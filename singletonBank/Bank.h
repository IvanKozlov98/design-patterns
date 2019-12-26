//
// Created by demid5 on 21.12.2019.
//

#ifndef COFEEAUTOMAT_BANK_H
#define COFEEAUTOMAT_BANK_H


class Bank {
public:
    virtual void addBalance(int money) = 0;
    virtual void subBalance(int money) = 0;
    virtual int getBalance() = 0;
};

class TotalBank: public Bank {
private:
    static TotalBank* instance;
    int balance;
protected:
    TotalBank();
public:
    static TotalBank *Instance();
    void addBalance(int money);
    void subBalance(int money);
    int getBalance();
};

class CurrentBank: public Bank {
private:
    static CurrentBank* instance;
    int balance;
protected:
    CurrentBank();
public:
    static CurrentBank *Instance();
    void addBalance(int money);
    void subBalance(int money);
    int getBalance();
};

#endif //COFEEAUTOMAT_BANK_H
