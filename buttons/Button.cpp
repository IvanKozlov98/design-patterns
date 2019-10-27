#include "Button.h"
#include "IButtonAction.h"
#include <string>


DrinkButton::DrinkButton() {
    buttonAction = std::make_unique<PushButtonAction>();
}

DrinkButton::DrinkButton(const std::string &str) : Button(str) { }

SugarButton::SugarButton() {
    buttonAction = std::make_unique<MoveButtonAction>();
}

ReturnMoneyButton::ReturnMoneyButton() {
    buttonAction = std::make_unique<PushButtonAction>();
}

RealStartButton::RealStartButton() {
    buttonAction = std::make_unique<StartButton>();
}

ProxyStartButton::ProxyStartButton() {
    buttonAction = std::make_unique<StartButton>();
}

void ProxyStartButton::actionButton() {
    if
}





