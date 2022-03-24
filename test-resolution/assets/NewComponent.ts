
import { _decorator, Component, Node, Slider, macro, Label } from 'cc';
const { ccclass, property } = _decorator;


@ccclass('NewComponent')
export class NewComponent extends Component {
    @property(Slider)
    slider: Slider = null!;

    @property(Label)
    text: Label = null!;

    last: number = 0;

    start() {
        this.last = parseFloat((1 + this.slider.progress * 5).toFixed(2));
        this.schedule(() => {
            let newI = parseFloat((1 + this.slider.progress * 5).toFixed(2));
            if (this.last == newI) {
                return;
            }
            this.last = newI;
            this.text.string = newI.toString();
            // @ts-ignore
            jsb.setResolutionRatio(newI);
        }, 0.2)
    }

    // update (deltaTime: number) {
    //     // [4]
    // }
}
