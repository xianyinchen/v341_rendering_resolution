## ===== ctor function implementation template

static bool ${signature_name}(se::State& s) // NOLINT(readability-identifier-naming)
{
#if $is_skip_constructor
    //#2 ${namespaced_class_name}: is_skip_construtor ${is_skip_constructor}
    se::ScriptEngine::getInstance()->evalString("throw new Error(\"${namespaced_class_name} constructor is skipped\")");
    return false;
#else
#if len($arguments) >= $min_args
    #set arg_count = len($arguments)
    #set arg_idx = $min_args
    #set $count = 0
    #if $arg_idx > 0
    CC_UNUSED bool ok = true;
    const auto& args = s.args();
    #end if
    #while $count < $arg_idx
        #set $arg = $arguments[$count]
        #set $arg_type = arg.to_string($generator)
        #if $arg.is_numeric
    ${arg.to_string($generator)} arg${count} = 0;
        #elif $arg.is_pointer
    ${arg.to_string($generator)} arg${count} = nullptr;
        #else
    ${arg.to_string($generator)} arg${count};
        #end if
        #set $count = $count + 1
    #end while
    #set $count = 0
    #set arg_list = ""
    #set arg_array = []
    #while $count < $arg_idx
        #set $arg = $arguments[$count]
        #set $arg_type = arg.to_string($generator)
    ${arg.to_native({"generator": $generator,
                         "arg": $arg,
                         "arg_type": $arg_type,
                         "in_value": "args[" + str(count) + "]",
                         "out_value": "arg" + str(count),
                         "class_name": $class_name,
                         "level": 2,
                         "context" : "s.thisObject()",
                         "is_static": False,
                         "is_persistent": $is_persistent,
                         "ntype": str($arg)})};
        #set $arg_array += ["arg"+str(count)]
        #set $count = $count + 1
    #end while
    #if $arg_idx > 0
    SE_PRECONDITION2(ok, false, "${signature_name} : Error processing arguments");
    #end if
    #if len($arg_array) == 0
    #set $arg_list=""
    #else
    #set $arg_list = "," + ", ".join($arg_array)
    #end if
    ${namespaced_class_name}* cobj = JSB_ALLOC(${namespaced_class_name}$arg_list);
    s.thisObject()->setPrivateData(cobj);
    #if not $is_ref_class
    se::NonRefNativePtrCreatedByCtorMap::emplace(cobj);
    #end if
#end if
    return true;
#end if
}
SE_BIND_SUB_CLS_CTOR(${signature_name}, __jsb_${underlined_class_name}_class, js_${underlined_class_name}_finalize)
