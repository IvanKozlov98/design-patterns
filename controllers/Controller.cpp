//
// Created by demid5 on 31.10.2019.
//

#include <memory>
#include "Controller.h"

void RealController::startProcessCoffee()  {
    std::cout << "start process Coffee\n";
}

void ProxyController::startProcessCoffee() {
    if (5 > 3) {
        if (controller == nullptr) {
            controller = std::make_unique<RealController>();
        }
        controller->startProcessCoffee();
    }
    else {
        std::cout << "На счете недостаточно средств\n";
    }
}


