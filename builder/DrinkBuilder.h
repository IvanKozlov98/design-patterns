//
// Created by demid5 on 21.12.2019.
//

#ifndef COFEEAUTOMAT_DRINKBUILDER_H
#define COFEEAUTOMAT_DRINKBUILDER_H
#include <string>
#include "../recipes/Recipe.h"

using namespace std;

/**
 * класс напиток
 */
class Drink {
private:
    string name;
    int type;
    Recipe *recipe;
};

/**
 * абстрактный класс билдеров напитков
 */
class DrinkBuilder {
protected:
    string name;
    Drink *drink;
public:
    DrinkBuilder() {};
    ~DrinkBuilder(){};
    DrinkBuilder(string name, Drink *drink);
    /*методы строителя*/
    virtual void checkDevice() = 0;
    virtual void makeBaseDrink() = 0;
    virtual void makeRecipe() = 0;
    virtual void additional() = 0;
    virtual Drink *getDrink() = 0;
};


/**
 * здесь будут определены обшие шаги для всех кофейных и чайных напитков
 * checkDevice() and makeBaseDrink()
 */
class CoffeeBuilder : public DrinkBuilder {
public:
    CoffeeBuilder() {};
    ~CoffeeBuilder(){};
    CoffeeBuilder(string name, Drink *drink);
    /*методы строителя*/
    void checkDevice();
    void makeBaseDrink();
};

class TeaBuilder : public DrinkBuilder {
public:
    TeaBuilder() {};
    ~TeaBuilder(){};
    TeaBuilder(string name, Drink *drink);
    /*методы строителя*/
    void checkDevice();
    void makeBaseDrink();
};

/**
 * кофейные билдеры
 * реализуют makeRecipe() и additional()
 */
class CoffeeLatteBuilder :  public CoffeeBuilder {
public:
    CoffeeLatteBuilder() {};
    ~CoffeeLatteBuilder(){};
    CoffeeLatteBuilder(string name, Drink *drink);
    /*методы строителя*/
    void makeRecipe();
    void additional();
    Drink *getDrink();
};

class CoffeeEspressoBuilder :  public CoffeeBuilder {
public:
    CoffeeEspressoBuilder() {};
    ~CoffeeEspressoBuilder(){};
    CoffeeEspressoBuilder(string name, Drink *drink);
    /*методы строителя*/
    void makeRecipe();
    void additional();
    Drink *getDrink();
};

class CoffeeMockachinoBuilder : public CoffeeBuilder {
public:
    CoffeeMockachinoBuilder() {};
    ~CoffeeMockachinoBuilder(){};
    CoffeeMockachinoBuilder(string name, Drink *drink);
    /*методы строителя*/
    void makeRecipe();
    void additional();
    Drink *getDrink();
};

/*
 * чайные билдеры
 */
class TeaJasminBuilder : public  TeaBuilder {
public:
    TeaJasminBuilder() {};
    ~TeaJasminBuilder(){};
    TeaJasminBuilder(string name, Drink *drink);
    /*методы строителя*/
    void makeRecipe();
    void additional();
    Drink *getDrink();
};

class TeaKurkudimBuilder:  public TeaBuilder {
public:
    TeaKurkudimBuilder() {};
    ~TeaKurkudimBuilder(){};
    TeaKurkudimBuilder(string name, Drink *drink);
    /*методы строителя*/
    void makeRecipe();
    void additional();
    Drink *getDrink();
};


#endif //COFEEAUTOMAT_DRINKBUILDER_H
