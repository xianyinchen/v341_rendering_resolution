## ===== struct constructor function implementation template


template<>
bool sevalue_to_native(const se::Value &from, ${namespaced_class_name} * to, se::Object *ctx)
{
    assert(from.isObject());
    se::Object *json = from.toObject();
    auto* data = reinterpret_cast<${namespaced_class_name}*>(json->getPrivateData());
    if (data) {
        *to = *data;
        return true;
    }
    se::Value field;
    bool ok = true;
#set arg_idx = 0
#for field in $public_fields
    #set field_type = field.ntype.to_string($generator)
    json->getProperty("${field.name}", &field);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->${field.name}), ctx);
    }
#set $arg_idx = $arg_idx + 1
#end for
    return ok;
}

SE_DECLARE_FINALIZE_FUNC(js_${underlined_class_name}_finalize)

static bool ${struct_constructor_name}(se::State& s) // NOLINT(readability-identifier-naming)
{
    CC_UNUSED bool ok = true;
    const auto& args = s.args();
    size_t argc = args.size();

    if(argc == 0)
    {
        ${namespaced_class_name}* cobj = JSB_ALLOC(${namespaced_class_name});
        s.thisObject()->setPrivateData(cobj);
        se::NonRefNativePtrCreatedByCtorMap::emplace(cobj);
        return true;
    }
    #if len($public_fields) > 1

    if(argc == 1 && args[0].isObject())
    {
        se::Object *json = args[0].toObject();
        se::Value field;

        ${namespaced_class_name}* cobj = JSB_ALLOC(${namespaced_class_name});
        ok &= sevalue_to_native(args[0], cobj, s.thisObject());
        if(!ok) {
            JSB_FREE(cobj);
            SE_REPORT_ERROR("argument convertion error");
            return false;
        }

        s.thisObject()->setPrivateData(cobj);
        se::NonRefNativePtrCreatedByCtorMap::emplace(cobj);
        return true;
    }
    #end if

    ${namespaced_class_name}* cobj = JSB_ALLOC(${namespaced_class_name});
    #set arg_idx = 0
    #for field in $public_fields
    #set field_type = field.ntype.to_string($generator)
    #set conv_text = $field.ntype.to_native({"generator": $generator, \
                            "arg": $field.ntype, \
                            "arg_type": $field_type, \
                            "in_value": "args[" + str(arg_idx) + "]", \
                            "_out_value": "arg" + str(arg_idx), \
                            "out_value" : "(cobj->" + field.name +")",
                            "class_name": $class_name, \
                            "level": 3, \
                            "is_static": False, \
                            "is_pointer": $field.ntype.is_pointer, \
                            "is_persistent": $is_persistent, \
                            "ntype": str($field_type)})
    if (argc > ${arg_idx} && !args[${arg_idx}].isUndefined()) {
        #if $field.ntype.is_reference
        #set $holder_prefix="HolderType<"+$field_type+", true>"
        #else
        #set $holder_prefix="HolderType<"+$field_type+", false>"
        #end if
        ## // $holder_prefix arg${arg_idx} = {};
        $conv_text;
        ## // cobj->${field.name} = arg${arg_idx}.value();
    }
    #set $arg_idx = $arg_idx + 1
    #end for

    if(!ok) {
        JSB_FREE(cobj);
        SE_REPORT_ERROR("Argument convertion error");
        return false;
    }

    s.thisObject()->setPrivateData(cobj);
    se::NonRefNativePtrCreatedByCtorMap::emplace(cobj);
    return true;
}
SE_BIND_CTOR(${struct_constructor_name}, __jsb_${underlined_class_name}_class, js_${underlined_class_name}_finalize)
