#include "Button.h"
#include "ButtonImpl.h"
#include <string>
#include <algorithm>

DrinkButton::DrinkButton(std::string des, int price) : Button(des){
    _pressButton = std::make_unique<PushButtonImpl>();
    this->description = des;
    this->price = price;
}

int DrinkButton::pressButton() {
    _pressButton->pressButton();
    return this->price;
}

int DrinkButton::getPrice() {
    return price;
}

std::string DrinkButton::getDescription() {
    return this->description;
}

SugarButton::SugarButton() {
    _pressButton = std::make_unique<MoveButtonImpl>();
}

ReturnMoneyButton::ReturnMoneyButton() {
    _pressButton = std::make_unique<PushButtonImpl>();
}

StartButton::StartButton() {
    _pressButton = std::make_unique<StartButtonImpl>();
}









