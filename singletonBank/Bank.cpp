//
// Created by demid5 on 21.12.2019.
//

#include "Bank.h"


Bank* Bank::instance = 0;

Bank::Bank() {}

void Bank::addBalance(int money) {
    balance += money;
}

void Bank::subBalance(int money) {
    balance -= money;
}

int Bank::getBalance() {
    return balance;
}

Bank* Bank::Instance() {
    if (instance == 0) {
        instance = new Bank();
    }
    return instance;
}
