//
// Created by demid5 on 21.12.2019.
//

#include "Director.h"

Director::Director(DrinkBuilder *builder) {
    this->builder = builder;
}

void Director::changeBuilder(DrinkBuilder * builder) {
    this->builder = builder;
}

void Director::construct() {
    builder->checkDevice();
    builder->makeBaseDrink();
    builder->makeRecipe();
    builder->additional();
}