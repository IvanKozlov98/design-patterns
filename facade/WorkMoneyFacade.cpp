//
// Created by demid5 on 02.12.2019.
//

#include <iostream>
#include "WorkMoneyFacade.h"


int Calculator::calculate(int price, int balance) {
    return (balance - price);
}

void OddMoney::outOddMoney(int money) {
    std::cout << "ваша сдача " << money << " руб\n";
}

WorkMoneyFacade::WorkMoneyFacade() {
    this->calculator = new Calculator();
    this->oddMoney = new OddMoney();
}

bool WorkMoneyFacade::transaction(int price, int balance) {
    int dif = calculator->calculate(price, balance);
    if (dif >= 0) {
        //  totalBank.add(price); // кладем деньги в общий банк
        std::cout << "оплата прошла успешно\n";
        oddMoney->outOddMoney(dif);
        return true;
    }
    std::cout << "не достаточно " << -dif << " руб\n";
    return false;
}