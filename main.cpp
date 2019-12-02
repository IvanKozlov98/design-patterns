#include "devices/Devices.h"
#include "devices/AdapterDevice.h"
#include "recipes/Recipe.h"
#include "recipes/RecipeDecorator.h"
#include <iostream>
#include <vector>
#include <algorithm>
#include <list>
using namespace std;


int main() {
    Recipe *capuch = new Cappuccino();
    std::cout << capuch->getDescription();
    Recipe *moc = new Macchiatto();
    std::cout << moc->getDescription();
    Recipe *latte= new Latte();
    std::cout << latte->getDescription();

    std::cout << "\n\n";
    Sugar *additionalItem = new Sugar(capuch);
    std::cout << additionalItem->getDescription() << endl;
    additionalItem->makeMix();
    Milk *aa = new Milk(additionalItem);
    std::cout << aa->getDescription() << "\n\n\n";

    Device *container2 = new Container("Container 2");
    Device *caramel2 = new Ingredient("caramel 2");
    Device *chockolate2 = new Ingredient("chockolate 2");
    container2->add(*caramel2);
    container2->add(*chockolate2);


    Device *sugar = new SugarContainer("Container with sugar");
    std::cout << sugar->getName() << endl;
    cout << sugar->getBalance() << endl;
    Device *container = new Container("Container");
    Device *caramel = new Ingredient("caramel");
    Device *chockolate = new Ingredient("chockolate");

    container->add(*caramel);

    container->add(*container2);
    container->add(*chockolate);

    Device *mixer = new AdapterDevice("mixer");

    container->add(*mixer);

    Iterator *it = new DeviceIterator(container);
    for (it->first(); it->hasNext(); it->next()) {
        cout << it->currentItem()->getName() << " --> " << it->currentItem()->getBalance() << endl;
    }
    //container->print();


return 0;
}