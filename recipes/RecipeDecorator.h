//
// Created by demid5 on 05.11.2019.
//
#include <iostream>
#include <memory>
#include "Recipe.h"

#ifndef COFEEAUTOMAT_RECIPEDECORATOR_H
#define COFEEAUTOMAT_RECIPEDECORATOR_H

class AdditionalItem : public Recipe {
protected:
    Recipe *_recipe;
public:
    AdditionalItem(Recipe *_recipe);
    virtual std::string getDescription() = 0;
    virtual ~AdditionalItem() { delete(_recipe);}
};

class Sugar : public AdditionalItem {
public:
    Sugar(Recipe *_recipe);
    std::string getDescription();
    void makeMix();
};

class Milk : public AdditionalItem {
public:
    Milk(Recipe *_recipe);
    std::string getDescription();
};

#endif //COFEEAUTOMAT_RECIPEDECORATOR_H
