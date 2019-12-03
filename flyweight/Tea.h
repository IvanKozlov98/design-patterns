//
// Created by demid5 on 03.12.2019.
//

#ifndef COFEEAUTOMAT_TEA_H
#define COFEEAUTOMAT_TEA_H

#include <string>
#include <map>
#include <iostream>
#include <vector>

class TypeTea {
private:
    std::string name; // бергамот и тд
    std::string type; // черный зеленый белый
    int year; //
public:
    TypeTea(std::string name, std::string type, int year);
    void description();
};

class TypeTeaFactory {
private:
    std::map<std::string, TypeTea*> collection;
public:
    TypeTea* getTypeTea(std::string name, std::string type, int year);
};

class Tea {
private:
    TypeTea *typeTea;
    bool milk;
    bool sugar;
    int indigrient; // индекс индигриента
public:
    Tea(TypeTea *type, bool milk, bool sugar, int ind);
    void description();
};

class LoggerTea {
private:
    std::vector<Tea> listTea;
public:
    void order(std::string name, std::string type, int year, bool milk, bool sugar, int ind);
    void history();
};


#endif //COFEEAUTOMAT_TEA_H
