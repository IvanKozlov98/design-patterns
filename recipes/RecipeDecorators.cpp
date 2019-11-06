//
// Created by demid5 on 05.11.2019.
//
#include <iostream>
#include "RecipeDecorator.h"

AdditionalItem::AdditionalItem(Recipe *_recipe) {
    this->_recipe = _recipe;
}

Sugar::Sugar(Recipe *_recipe) : AdditionalItem(_recipe){}

std::string Sugar::getDescription() {
    return std::string(_recipe->getDescription() + " + sugar ");
}

void Sugar::makeMix() {
    std::cout << " mix sugar \n";
}

Milk::Milk(Recipe *_recipe) : AdditionalItem(_recipe){}

std::string Milk::getDescription() {
    return std::string(_recipe->getDescription() + "+ milk ");
}


