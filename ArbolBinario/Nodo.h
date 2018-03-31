//
// Created by daniel on 3/7/18.
//

#ifndef ARBOLBINARIO_NODO_H
#define ARBOLBINARIO_NODO_H

#include <iostream>

class Nodo {
public:
    Nodo();
    Nodo *izq;
    Nodo *der;
    Nodo *father;
    int value;

};


#endif //ARBOLBINARIO_NODO_H
