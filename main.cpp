#include "buttons/Button.h"

int main() {
    Button *drinkButton = new DrinkButton();
    Button *sugarButton = new SugarButton();
    Button *returnMoneyButton = new ReturnMoneyButton();
    Button *startButton = new ProxyStartButton();
    Button *mas[4] {drinkButton, sugarButton, returnMoneyButton, startButton};
    for (auto elem: mas) {
        elem->actionButton();
    }
    return 0;
}