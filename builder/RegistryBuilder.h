//
// Created by demid5 on 21.12.2019.
//

#ifndef COFEEAUTOMAT_REGISTRYBUILDER_H
#define COFEEAUTOMAT_REGISTRYBUILDER_H


#include "../recipes/Recipe.h"
#include "DrinkBuilder.h"
#include <algorithm>
#include <map>
using namespace  std;


class RegistryBuilder {
private:
    static RegistryBuilder *registryBuilder;
    map<string, DrinkBuilder*> mp;
    RegistryBuilder();
    ~RegistryBuilder(){ delete registryBuilder;}
public:
    static RegistryBuilder *Instance();
    DrinkBuilder *getDrinkBuilder(string name);
};


#endif //COFEEAUTOMAT_REGISTRYBUILDER_H
