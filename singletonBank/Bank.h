//
// Created by demid5 on 21.12.2019.
//

#ifndef COFEEAUTOMAT_BANK_H
#define COFEEAUTOMAT_BANK_H


class Bank {
private:
    static Bank* instance;
    int balance;
protected:
    Bank();
public:
    static Bank *Instance();
    void addBalance(int money);
    void subBalance(int money);
    int getBalance();
};

class TotalBank: public Bank { };

class CurrentBank: public Bank {};

#endif //COFEEAUTOMAT_BANK_H
