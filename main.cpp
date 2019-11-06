#include "buttons/Button.h"
#include "recipes/Recipe.h"
#include "recipes/RecipeDecorator.h"

int main() {
    /*Button *drinkButton = new DrinkButton();
    Button *sugarButton = new SugarButton();
    Button *returnMoneyButton = new ReturnMoneyButton();
    Button *startButton = new StartButton();
    Button *mas[4] {drinkButton, sugarButton, returnMoneyButton, startButton};
    for (auto elem: mas) {
        elem->actionButton();
    }*/

    Recipe *capuch = new Cappuccino();
    std::cout << capuch->getDescription();
    Recipe *moc = new Macchiatto();
    std::cout << moc->getDescription();
    Recipe *latte= new Latte();
    std::cout << latte->getDescription();

    std::cout << "\n\n";
    Sugar *additionalItem = new Sugar(capuch);
    additionalItem->makeMix();
    Milk *aa = new Milk(additionalItem);


    std::cout << aa->getDescription();

    return 0;
}