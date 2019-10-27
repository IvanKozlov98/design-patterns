#include "buttons/Button.h"

int main() {
    Button *drinkButton = new DrinkButton();
    Button *sugarButton = new SugarButton();
    Button *returnMoneyButton = new ReturnMoneyButton();

    Button *mas[3] {drinkButton, sugarButton, returnMoneyButton};
    for (auto elem: mas) {
        elem->actionButton();
    }
    return 0;
}