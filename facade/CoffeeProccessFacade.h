//
// Created by demid5 on 02.12.2019.
//

#ifndef COFEEAUTOMAT_COFFEEPROCCESSFACADE_H
#define COFEEAUTOMAT_COFFEEPROCCESSFACADE_H

#include <ctime>
#include <memory>
#include <vector>
#include "../buttons/Button.h"

// информационный эксперт
class PurchaseInfo {
private:
    int money; //
    tm *dt; // дата и время совершения платежа
public:
    virtual void setMoney(int money);
    virtual int getMoney();
    virtual void setDataTime(tm *dt);
    virtual tm * getDataTime();
};

// приемник денег
class Reciever {
private:
    PurchaseInfo *purchaseInfo;
public:
    Reciever();
    virtual ~Reciever() {}
    virtual void recieveMoney(int money);
    virtual PurchaseInfo *getPurchaseInfo();
};


class CoffeeProcessFacade {
private:
    std::unique_ptr<Reciever> reciever;
    std::vector<Button*> mas;
public:
    CoffeeProcessFacade();
    virtual void coffeeProccess();
};


#endif //COFEEAUTOMAT_COFFEEPROCCESSFACADE_H
