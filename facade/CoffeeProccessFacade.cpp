//
// Created by demid5 on 02.12.2019.
//
#include <iostream>
#include "CoffeeProccessFacade.h"

Reciever::Reciever() {
    this->purchaseInfo = new PurchaseInfo();
}

void Reciever::recieveMoney(int money) {
    std::cout << "принял " << money << "  руб\n";
    purchaseInfo->setMoney(money);
    time_t now = time(0);
    purchaseInfo->setDataTime(gmtime(&now));
}

void PurchaseInfo::setMoney(int money) {
    this->money = money;
}

int PurchaseInfo::getMoney() {
    return this->money;
}

void PurchaseInfo::setDataTime(struct tm * dt) {
    this->dt = dt;
}

struct tm * PurchaseInfo::getDataTime() {
    return this->dt;
}

class PurchaseInfo * Reciever::getPurchaseInfo() {
    return this->purchaseInfo;
}

CoffeeProcessFacade::CoffeeProcessFacade() {
    this->reciever = std::make_unique<Reciever>();
    Button *drinkButton = new DrinkButton("latte", 15);
    Button *sugarButton = new SugarButton();
    Button *returnMoneyButton = new ReturnMoneyButton();
    Button *startButton = new StartButton();
    this->mas = {drinkButton, sugarButton, returnMoneyButton, startButton};
};

void CoffeeProcessFacade::coffeeProccess() {
    reciever->recieveMoney(20);
    int curMoney = reciever->getPurchaseInfo()->getMoney();
    for (int i = 0; i < 4; ++i) {
        mas[i]->pressButton();
    }
}