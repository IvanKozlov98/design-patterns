//
// Created by demid5 on 06.11.2019.
//

#include "Devices.h"
#include "Iterator.h"
#include <string>

Device::Device(const std::string &name) : _name(name) { }

void Device::add(Device &) {}
void Device::remove(Device &) {}
Iterator* Device::createIterator() {
    return new DeviceIterator(this);
}

std::vector<Device*>* Device::getChild() {
    return nullptr;
}


Container::~Container()  {}


Container::Container(const std::string &_name) : Device(_name){}

void Container::add(Device &device) {
    _devices.push_back(&device);
}

void Container::remove(Device &device) {
}

std::vector<Device*>* Container::getChild() {
    return &_devices;
}


int Container::getBalance() { return 0;}


int SugarContainer::getBalance() {
    return ((double )gr / 1000) * 100;
}

SugarContainer::SugarContainer(const std::string &name) : Device(name) {
    gr = 50;
}

CassetteGlasses::CassetteGlasses(const std::string &name) : Device(name){
    countGlasses = 100;
}

int CassetteGlasses::getBalance() {
    return (double)countGlasses / 100;
}

Ingredient::Ingredient(const std::string &name) : Device(name){
    gr = 120;
}

int Ingredient::getBalance() {
    return ((double)gr / 150) * 100;
}
