#include "Recipe.h"
#include <string>


std::string Cappuccino::getDescription() {
    return std::string(" Сappuccino ");
}


std::string Latte::getDescription() {
    return std::string(" Latte ");
}

std::string Macchiatto::getDescription() {
    return std::string(" Macchiatto ");
}
