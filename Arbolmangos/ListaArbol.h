//
// Created by dgome on 3/1/2018.
//

#ifndef ARBOLMANGOS_LISTAARBOL_H
#define ARBOLMANGOS_LISTAARBOL_H

#include "Nodo.h"
#include "Arbol_de_Mangos.h"

class ListaArbol {
private:
    Nodo *primero;
    int cantarboles;

public:
    ListaArbol();
    void agregarArbol(Arbol_de_Mangos *tree);
    void insertArbol(Arbol_de_Mangos *tree, int pos);
    void removerArbol(int pos);
    int getTam();
    Arbol_de_Mangos *get(int);
};


#endif //ARBOLMANGOS_LISTAARBOL_H
