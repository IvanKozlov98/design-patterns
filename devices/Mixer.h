//
// Created by demid5 on 10.11.2019.
//

#ifndef COFEEAUTOMAT_MIXER_H
#define COFEEAUTOMAT_MIXER_H

class Mixer {
private:
    bool mixerWorking;
public:
    virtual bool isMixerWorking();
    virtual void setMixerWorking(bool mixerWorking);
    Mixer(bool mixerWorking);
    Mixer();
};

#endif //COFEEAUTOMAT_MIXER_H
