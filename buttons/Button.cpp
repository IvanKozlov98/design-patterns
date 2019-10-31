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

StartButton::StartButton() {
    buttonAction = std::make_unique<StartButtonAction>();
}







