//
// Created by daniel on 3/7/18.
//

#ifndef ARBOLBINARIO_PREORDEN_H
#define ARBOLBINARIO_PREORDEN_H

#include "Nodo.h"

class Preorden {

public:
    Preorden();
    Nodo *root = nullptr;
    Nodo *crearNodo(int);
    Nodo *encontrarMinimo(Nodo *);
    int altura;
    int nivel;
    void insertarNodo(Nodo *&, int);
    void EliminarNodo(Nodo *, int);
    void deleteNodo(Nodo *);
    void preOrden(Nodo *);
    void inOrden(Nodo *);
    void postOrden(Nodo *);
    void Replace(Nodo *, Nodo *);
    void Destroy(Nodo *);
    void showTree(Nodo *, int);
    bool searchNodo(Nodo *, int);

};


#endif //ARBOLBINARIO_PREORDEN_H
