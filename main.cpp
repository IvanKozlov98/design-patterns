#include "devices/Devices.h"
#include "devices/AdapterDevice.h"
#include "recipes/Recipe.h"
#include "recipes/RecipeDecorator.h"
#include "facade/CoffeeProccessFacade.h"
#include "facade/WorkMoneyFacade.h"
#include "flyweight/Tea.h"
#include "singletonBank/Bank.h"
#include "builder/DrinkBuilder.h"
#include "builder/Director.h"
#include <iostream>
#include <vector>
#include <algorithm>
#include <list>
#include <ctime>
using namespace std;

/**
 * кнопка старт должна принимать на вход класс для приготовления напитка -->
 * сделать класс который принимает результаты действия кнопок - под него сделать два адаптера
 * к классу recipe and tea, каждый их которых задает рецепт по пригтовлению напитка
 * Далее эта кнока старт и передает необходимые данные фасаду и контроллерам и билдерам
 * @return
 */


int main() {
    CoffeeProcessFacade *coffeeProcessFacade = new CoffeeProcessFacade();
    coffeeProcessFacade->coffeeProccess();
    return 0;
}