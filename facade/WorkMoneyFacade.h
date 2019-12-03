//
// Created by demid5 on 02.12.2019.
//

#ifndef COFEEAUTOMAT_WORKMONEYFACADE_H
#define COFEEAUTOMAT_WORKMONEYFACADE_H

// класс для счета
class Calculator {
public:
    virtual int calculate(int price, int balance);
};

// класс выдачи сдачи клиенту
class OddMoney {
public:
    virtual void outOddMoney(int money);
};

class WorkMoneyFacade {
private:
    Calculator *calculator;
    OddMoney *oddMoney;
    // класс totalBank -- сюда мы будем складывать деньги в случае удачной транзакции
public:
    WorkMoneyFacade();
    bool transaction(int price, int balance);
};


#endif //COFEEAUTOMAT_WORKMONEYFACADE_H
