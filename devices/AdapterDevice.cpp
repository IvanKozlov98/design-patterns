//
// Created by demid5 on 10.11.2019.
//

#include "AdapterDevice.h"

AdapterDevice::AdapterDevice(const std::string &name) : Device(name){
    mixer = new Mixer(true);
}

bool AdapterDevice::check() {
    return mixer->isMixerWorking();
}

int AdapterDevice::getBalance() {
    return ((int)mixer->isMixerWorking()) * 100;
}


