//
// Created by demid5 on 27.10.2019.
//

#ifndef COFEEAUTOMAT_IBUTTONACTION_H
#define COFEEAUTOMAT_IBUTTONACTION_H


class IButtonAction {
public:
    virtual void actionButton() = 0;
};

class PushButtonAction : public IButtonAction {
public:
    void actionButton();
};

class MoveButtonAction : public IButtonAction {
public:
    void actionButton();
};

class StartButton : public IButtonAction {
public:
    void actionButton();
};


#endif //COFEEAUTOMAT_IBUTTONACTION_H
