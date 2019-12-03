//
// Created by demid5 on 27.10.2019.
//
#ifndef COFEEAUTOMAT_BUTTON_H
#define COFEEAUTOMAT_BUTTON_H


#include <string>
#include <memory>
#include "ButtonImpl.h"

class Button {
protected:
    std::unique_ptr<ButtonImpl> _pressButton;
    std::string name;
public:
    virtual int pressButton() {
        _pressButton->pressButton();
        return 0;
    };
    Button(const std::string &name) : name(name) {
    }
        Button() {}
    virtual ~Button() {}
};

class DrinkButton : public Button {
private:
    std::string description;
    int price;
public:
    DrinkButton(std::string des, int price);
    virtual int pressButton();
    virtual int getPrice();
    virtual std::string getDescription();
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
