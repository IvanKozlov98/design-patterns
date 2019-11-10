//
// Created by demid5 on 06.11.2019.
//

#ifndef COFEEAUTOMAT_DEVICES_H
#define COFEEAUTOMAT_DEVICES_H
#include <vector>
#include <string>
#include "Iterator.h"

class Device {
private:
    const std::string _name;
protected:
    Device(const std::string &name);
public:
    std::string getName() { return _name; }

    virtual Iterator* createIterator();
    virtual void add(Device&);
    virtual void remove(Device&);
    virtual std::vector<Device*> *getChild();
    // часть execute()
    // в процентном содержании
    virtual int getBalance() = 0;
};


class Container : public Device {
private:
    Iterator *iterator = nullptr;
    std::vector<Device*> _devices;
public:
    Container(const std::string &_name);
    virtual ~Container();

    virtual void add(Device&);
    virtual void remove(Device&);
    virtual std::vector<Device*> *getChild();
    // execute()
    // в процентном содержании
    virtual int getBalance();
    std::string getName();
};

class CassetteGlasses : public Device {
private:
    // число стаканов
    int countGlasses;
public:
    CassetteGlasses(const std::string&);
    int getBalance();
};

class SugarContainer : public Device {
private:
    int gr;
public:
    SugarContainer(const std::string&);
    int getBalance();
};

class Ingredient : public Device {
private:
    // количество грамм
    int gr;
public:
    Ingredient(const std::string&);
    int getBalance();
};




#endif //COFEEAUTOMAT_DEVICES_H
