//
// Created by demid5 on 21.12.2019.
//

#include "RegistryBuilder.h"

RegistryBuilder* RegistryBuilder::registryBuilder = 0;

RegistryBuilder::RegistryBuilder() {
    // инициализация всех билдеров
    mp["latte"] = new CoffeeLatteBuilder();
    mp["espresso"] = new CoffeeEspressoBuilder();
    mp["mockachino"] = new CoffeeMockachinoBuilder();
    mp["jasmin"] = new TeaJasminBuilder();
    mp["kurkudim"] = new TeaKurkudimBuilder();
}

RegistryBuilder * RegistryBuilder::Instance() {
    if (registryBuilder == 0) {
       registryBuilder = new RegistryBuilder();
    }
    return registryBuilder;
}

DrinkBuilder* RegistryBuilder::getDrinkBuilder(string name) {
    return mp[name];
}