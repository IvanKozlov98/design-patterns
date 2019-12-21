//
// Created by demid5 on 21.12.2019.
//

#ifndef COFEEAUTOMAT_DIRECTOR_H
#define COFEEAUTOMAT_DIRECTOR_H


#include "DrinkBuilder.h"

class Director {
private:
    DrinkBuilder *builder;
public:
    Director(DrinkBuilder *builder);
    void changeBuilder(DrinkBuilder *builder);
    void construct();
};


#endif //COFEEAUTOMAT_DIRECTOR_H
