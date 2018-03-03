//
// Created by dgome on 3/1/2018.
//

#ifndef ARBOLMANGOS_NODO_H
#define ARBOLMANGOS_NODO_H

#include <iostream>

class Nodo {
public:
    Nodo();
    Nodo * next;
    Nodo * prev;
    ~Nodo();
};


#endif //ARBOLMANGOS_NODO_H
