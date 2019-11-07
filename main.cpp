#include "devices/Devices.h"
#include <iostream>
using namespace std;

int main() {
    Device *sugar = new SugarContainer("Container with sugar");
    std::cout << sugar->getName() << endl;
    cout << sugar->getBalance();
    Device *container = new Container("Container");
    Device *caramel = new Ingredient("caramel");
    Device *chockolate = new Ingredient("chockolate");
    container->add(*caramel);
    container->add(*chockolate);

    return 0;
}