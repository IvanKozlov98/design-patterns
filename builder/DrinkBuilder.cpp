//
// Created by demid5 on 21.12.2019.
//

#include "DrinkBuilder.h"

DrinkBuilder::DrinkBuilder(string name, Drink *drink) {
    this->name = name;
    this->drink = drink;
}

CoffeeBuilder::CoffeeBuilder(string name, Drink *drink) : DrinkBuilder(name, drink) {}

TeaBuilder::TeaBuilder(string name, Drink *drink) : DrinkBuilder(name, drink) {}

CoffeeLatteBuilder::CoffeeLatteBuilder(string name, Drink *drink) : CoffeeBuilder(name, drink) {}

CoffeeEspressoBuilder::CoffeeEspressoBuilder(string name, Drink *drink) : CoffeeBuilder(name, drink) {}

CoffeeMockachinoBuilder::CoffeeMockachinoBuilder(string name, Drink *drink) : CoffeeBuilder(name, drink) {}

TeaKurkudimBuilder::TeaKurkudimBuilder(string name, Drink *drink) : TeaBuilder(name, drink) {}

TeaJasminBuilder::TeaJasminBuilder(string name, Drink *drink) : TeaBuilder(name, drink) {}

void CoffeeBuilder::checkDevice() {
    cout << "проверка всех устройств, необходимых для приготовления coffee" << endl;
}

void CoffeeBuilder::makeBaseDrink() {
    cout << "make base coffee drink" << endl;
}

void TeaBuilder::checkDevice() {
    cout << "проверка всех устройств, необходимых для приготовления чая" << endl;
}

void TeaBuilder::makeBaseDrink() {
    cout << "make base tea drink" << endl;
}

void CoffeeEspressoBuilder::makeRecipe() {
    cout << "it s empty espresso - because i dont smth do" << endl;
}

void CoffeeEspressoBuilder::additional() {
    cout << "тут по вашему желанию\n";
}

class Drink * CoffeeEspressoBuilder::getDrink() {
    return new Drink();
}

void CoffeeLatteBuilder::makeRecipe() {
    cout << "make recipe of latte" << endl;
}

void CoffeeLatteBuilder::additional() {
    cout << "тут по вашему желанию of latte\n";
}

Drink* CoffeeLatteBuilder::getDrink() {
    return new Drink();
}

void CoffeeMockachinoBuilder::makeRecipe() {
    cout << "make recipe of mockachino" << endl;
}

void CoffeeMockachinoBuilder::additional() {
    cout << "тут по вашему желанию of mockachino" << endl;
}

class Drink * CoffeeMockachinoBuilder::getDrink() {
    return new Drink();
}

void TeaKurkudimBuilder::makeRecipe() {
    cout << "make recipe of kurkudim" << endl;
}

void TeaKurkudimBuilder::additional() {
    cout << "тут по вашему желанию of tea kurkudim" << endl;
}

class Drink * TeaKurkudimBuilder::getDrink() {
    return new Drink();
}

void TeaJasminBuilder::makeRecipe() {
    cout << "make recipe of jasmin" << endl;
}

void TeaJasminBuilder::additional() {
    cout << "тут по вашему желанию of tea jasmin" << endl;
}

class Drink * TeaJasminBuilder::getDrink() {
    return new Drink();
}






