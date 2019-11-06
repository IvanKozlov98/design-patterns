//
// Created by demid5 on 05.11.2019.
//
#include <string>
#include <iostream>

#ifndef COFEEAUTOMAT_RECIPE_H
#define COFEEAUTOMAT_RECIPE_H

class Recipe {
public:
    virtual std::string getDescription() = 0;
    Recipe(){}
    virtual ~Recipe(){}
};

class Cappuccino : public Recipe {
public:
     std::string getDescription();
};

class Latte : public Recipe {
public:
     std::string getDescription();
};

class Macchiatto : public Recipe {
public:
     std::string getDescription();
};

#endif //COFEEAUTOMAT_RECIPE_H
