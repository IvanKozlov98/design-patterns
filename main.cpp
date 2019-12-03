#include "devices/Devices.h"
#include "devices/AdapterDevice.h"
#include "recipes/Recipe.h"
#include "recipes/RecipeDecorator.h"
#include "facade/CoffeeProccessFacade.h"
#include "facade/WorkMoneyFacade.h"
#include "flyweight/Tea.h"
#include <iostream>
#include <vector>
#include <algorithm>
#include <list>
#include <ctime>
using namespace std;

class AA{
public:
    int sum() {
        return 2;
    }
};

class BB:public AA {
    int min() {
        return 1;
    }
};



int main() {

    LoggerTea *loggerTea = new LoggerTea();
    loggerTea->order("bergamot", "black", 1, 0, 0, 1);
    loggerTea->order("bergamot", "black", 1, 0, 0, 1);
    loggerTea->order("bergamot", "green", 1, 0, 0, 1);
    loggerTea->history();

    cout << "\n\n\n";

    CoffeeProcessFacade *coffeeProcessFacade = new CoffeeProcessFacade();
    coffeeProcessFacade->coffeeProccess();


    /*
    time_t now = time(0);
    char *dt = ctime(&now);
    cout << "local time is  -->  " << dt << endl;

    tm *gmtm = gmtime(&now);
    dt = asctime(gmtm);
    cout << "local 2 time is -->  " << dt << endl;

    */


    return 0;
}