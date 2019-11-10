#include "devices/Devices.h"
#include "devices/AdapterDevice.h"
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


class Point{
public:
    int x, y;
    Point(int x, int y) {
        this->x = x;
        this->y = y;
    }
};

int compare(Point *a, Point *b) {
    return a->y < b->y;
}


int main() {
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

    Iterator *i = container->createIterator();
    for (i->first(); i->hasNext(); i->next()) {
        cout << i->currentItem()->getName() << ' ';
    }

return 0;
}