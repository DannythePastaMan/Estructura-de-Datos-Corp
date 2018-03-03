//
// Created by dgome on 3/1/2018.
//

#ifndef ARBOLMANGOS_MANGO_H
#define ARBOLMANGOS_MANGO_H

#include <iostream>

struct Mango {
    Mango (int peso);
    Mango *ant;
    Mango *sig;
    int peso;
    Mango(int, int, int);
    ~Mango();
};


#endif //ARBOLMANGOS_MANGO_H
