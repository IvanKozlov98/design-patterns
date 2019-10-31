#include <iostream>
#include "IButtonAction.h"

void PushButtonAction::actionButton() {
    std::cout << "push smth" << std::endl;
}

void MoveButtonAction::actionButton() {
    std::cout << "move smth" << std::endl;
}

StartButtonAction::StartButtonAction() {
    controller = std::make_unique<ProxyController>();
}

void StartButtonAction::actionButton() {
    controller->startProcessCoffee();
}
