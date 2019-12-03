//
// Created by demid5 on 03.12.2019.
//

#include "Tea.h"
#include <map>


TypeTea::TypeTea(std::string name, std::string type, int year) {
    this->name = name;
    this->type = type;
    this->year = year;
}

void TypeTea::description() {
    std::cout << name << ' ' << type << ' ' << year;
}


TypeTea* TypeTeaFactory::getTypeTea(std::string name, std::string type, int year) {
    if (collection[name] == nullptr) {
        collection[name] = new TypeTea(name, type, year);
    }
    return collection[name];
}

Tea::Tea(TypeTea *type, bool milk, bool sugar, int ind) {
    this->typeTea = type;
    this->sugar = sugar;
    this->milk = milk;
    this->indigrient = ind;
}

void Tea::description() {
    this->typeTea->description();
    std::cout << this->sugar << ' ' << this->milk << ' ' << this->indigrient << "\n";
}

void LoggerTea::order(std::string name, std::string type, int year, bool milk, bool sugar, int ind) {
    TypeTeaFactory *typeTeaFactory = new TypeTeaFactory();
    TypeTea* typeTea = typeTeaFactory->getTypeTea(name, type, year);
    listTea.push_back(*(new Tea(typeTea, milk, sugar, ind)));
}

void LoggerTea::history() {
    for (auto elem: this->listTea)
        elem.description();
}