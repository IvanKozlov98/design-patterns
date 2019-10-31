//
// Created by demid5 on 31.10.2019.
//

#ifndef COFEEAUTOMAT_CONTROLLER_H
#define COFEEAUTOMAT_CONTROLLER_H

#include <iostream>

class Controller {
public:
    virtual void startProcessCoffee() = 0;
};

class RealController : public Controller {
public:
    void startProcessCoffee();
};

class ProxyController {
private:
    std::unique_ptr<RealController> controller;
public:
    void startProcessCoffee();
};


#endif //COFEEAUTOMAT_CONTROLLER_H
