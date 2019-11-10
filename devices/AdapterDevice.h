//
// Created by demid5 on 10.11.2019.
//

#ifndef COFEEAUTOMAT_ADAPTERDEVICE_H
#define COFEEAUTOMAT_ADAPTERDEVICE_H

#include "Devices.h"
#include "Mixer.h"

class AdapterDevice : public Device {
private:
    Mixer *mixer;
public:
    AdapterDevice(const std::string&);
    bool check();
    int getBalance();
};

#endif //COFEEAUTOMAT_ADAPTERDEVICE_H
