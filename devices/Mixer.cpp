//
// Created by demid5 on 10.11.2019.
//

#include "Mixer.h"

bool Mixer::isMixerWorking() {
    return mixerWorking;
}

Mixer::Mixer() {

}

Mixer::Mixer(bool mixerWorking) {
    this->mixerWorking = mixerWorking;
}

void Mixer::setMixerWorking(bool mixerWorking) {
    this->mixerWorking = mixerWorking;
}

