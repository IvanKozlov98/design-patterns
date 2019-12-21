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

int main() {
    CoffeeProcessFacade *coffeeProcessFacade = new CoffeeProcessFacade();
    coffeeProcessFacade->coffeeProccess();
    return 0;
}