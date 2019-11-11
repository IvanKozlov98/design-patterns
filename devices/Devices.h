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
    virtual void print();
    // часть execute()
    // в процентном содержании
    virtual int getBalance() = 0;
    virtual bool check() = 0;
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
    virtual void print();
    // execute()
    // в процентном содержании
    virtual int getBalance();
    virtual bool check();
};

class CassetteGlasses : public Device {
private:
    // число стаканов
    int countGlasses;
public:
    CassetteGlasses(const std::string&);
    int getBalance();
    virtual bool check();
};

class SugarContainer : public Device {
private:
    // количество грамм сахара в контейнере
    int gr;
public:
    SugarContainer(const std::string&);
    int getBalance();
    virtual bool check();
};

class Ingredient : public Device {
private:
    // количество грамм ингридиента
    int gr;
public:
    Ingredient(const std::string&);
    int getBalance();
    virtual bool check();
};




#endif //COFEEAUTOMAT_DEVICES_H
