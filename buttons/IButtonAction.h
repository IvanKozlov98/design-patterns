//
// Created by demid5 on 27.10.2019.
//
#include <memory>
#include "../controllers/Controller.h"

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

class StartButtonAction  : public IButtonAction {
private:
    std::unique_ptr<ProxyController> controller;
public:
    StartButtonAction();
    void actionButton();
};


#endif //COFEEAUTOMAT_IBUTTONACTION_H
