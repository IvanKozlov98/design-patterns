//
// Created by demid5 on 31.10.2019.
//

#include <memory>
#include "Controller.h"
#include "../builder/RegistryBuilder.h"
#include "../builder/Director.h"

void RealController::startProcessCoffee()  {
    std::cout << "start process Coffee\n";
    std::string name = "latte";
    DrinkBuilder *drinkBuilder = RegistryBuilder::Instance()->getDrinkBuilder(name);
    Director *director = new Director(drinkBuilder);
    director->construct();
}

void ProxyController::startProcessCoffee(int price, int balance) {
    WorkMoneyFacade *workMoneyFacade = new WorkMoneyFacade();
    if (workMoneyFacade->transaction(price, balance)) {
        if (controller == nullptr) {
            controller = std::make_unique<RealController>();
        }
        controller->startProcessCoffee();
    }
    else {
        std::cout << "На счете недостаточно средств\n";
    }
}


