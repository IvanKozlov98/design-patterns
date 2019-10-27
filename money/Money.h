//
// Created by demid5 on 27.10.2019.
//

#ifndef COFEEAUTOMAT_MONEY_H
#define COFEEAUTOMAT_MONEY_H

class Money {
private:
    int balance;
    int cost;
public:
    void setBalance(int balance) {
        this->balance = balance;
    }

    void  setCost(int cost) {
        this->cost = cost;
    }

    bool check() {
        return balance >= cost;
    }
};

#endif //COFEEAUTOMAT_MONEY_H
