//
// Created by demid5 on 27.10.2019.
//
#include <memory>
#include "../controllers/Controller.h"

#ifndef COFEEAUTOMAT_IBUTTONACTION_H
#define COFEEAUTOMAT_IBUTTONACTION_H


class ButtonImpl {
public:
    virtual void pressButton() = 0;
};

class PushButtonImpl : public ButtonImpl {
public:
    void pressButton();
};

class MoveButtonImpl : public ButtonImpl {
public:
    void pressButton();
};

class StartButtonImpl  : public ButtonImpl {
private:
    std::unique_ptr<ProxyController> controller;
public:
    StartButtonImpl();
    void pressButton();
};


#endif //COFEEAUTOMAT_IBUTTONACTION_H
