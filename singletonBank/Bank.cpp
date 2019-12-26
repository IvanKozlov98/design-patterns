//
// Created by demid5 on 21.12.2019.
//

#include "Bank.h"


TotalBank* TotalBank::instance = 0;

TotalBank::TotalBank() {}

void TotalBank::addBalance(int money) {
    balance += money;
}

void TotalBank::subBalance(int money) {
    balance -= money;
}

int TotalBank::getBalance() {
    return balance;
}

TotalBank* TotalBank::Instance() {
    if (instance == 0) {
        instance = new TotalBank();
    }
    return instance;
}

CurrentBank* CurrentBank::instance = 0;

CurrentBank::CurrentBank() {}

void CurrentBank::addBalance(int money) {
    balance += money;
}

void CurrentBank::subBalance(int money) {
    balance -= money;
}

int CurrentBank::getBalance() {
    return balance;
}

CurrentBank* CurrentBank::Instance() {
    if (instance == 0) {
        instance = new CurrentBank();
    }
    return instance;
}