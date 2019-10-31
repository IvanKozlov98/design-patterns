//
// Created by demid5 on 27.10.2019.
//
#ifndef COFEEAUTOMAT_BUTTON_H
#define COFEEAUTOMAT_BUTTON_H


#include <string>
#include <memory>
#include "IButtonAction.h"

class Button {
protected:
    std::unique_ptr<IButtonAction> buttonAction;
    std::string name;
public:
    virtual void actionButton() {
        buttonAction->actionButton();
    };
    Button(const std::string &name) : name(name) {
    }
    Button() {}
    virtual ~Button() {}
};

class DrinkButton : public Button {
public:
    DrinkButton();
    DrinkButton(const std::string&);
};

class SugarButton : public Button {
public:
    SugarButton();
};

class ReturnMoneyButton : public Button {
public:
    ReturnMoneyButton();
};

class StartButton : public Button {
public:
    StartButton();
};



#endif //COFEEAUTOMAT_BUTTON_H
