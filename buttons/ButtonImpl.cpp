#include <iostream>
#include "ButtonImpl.h"

void PushButtonImpl::pressButton() {
    std::cout << "push smth" << std::endl;
}

void MoveButtonImpl::pressButton() {
    std::cout << "move smth" << std::endl;
}

StartButtonImpl::StartButtonImpl() {
    controller = std::make_unique<ProxyController>();
}

void StartButtonImpl::pressButton() {
    controller->startProcessCoffee(3, 4);
}

