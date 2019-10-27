#include <iostream>
#include "IButtonAction.h"

void PushButtonAction::actionButton() {
    std::cout << "push smth" << std::endl;
}

void MoveButtonAction::actionButton() {
    std::cout << "move smth" << std::endl;
}

void StartButton::actionButton() {
    std::cout << "start action" << std::endl;
}
