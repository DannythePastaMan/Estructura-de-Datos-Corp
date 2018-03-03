//
// Created by dgome on 3/1/2018.
//

#include "ListaArbol.h"
#include <iostream>

ListaArbol::ListaArbol() {
    primero = NULL;
    cantarboles = 0;
}

void ListaArbol::agregarArbol(Arbol_de_Mangos *tree) {
    insertArbol(tree, cantarboles);
}

void ListaArbol::insertArbol(Arbol_de_Mangos *tree, int pos) {
    Nodo *neur = new Nodo();
    Nodo *aux = primero;

    if (pos < 0 || pos > cantarboles) {
        return;
    }
    if (pos == 0 && primero == NULL) {
        primero = neur;
        cantarboles++;
    } else if (pos == 0 && primero != NULL) {
        neur->next = primero;
        primero = neur;
        cantarboles++;
    } else {
        if (pos == cantarboles) {
            for (int i = 0; i < cantarboles - 1; ++i) {
                aux = aux->next;
            }
            aux->next = neur;
            aux->prev = aux;
            cantarboles++;

        } else if (pos <= cantarboles) {
            for (int i = 0; i < pos - 1; ++i) {
                aux = aux->next;
            }
            aux->next = neur;
            neur->prev = aux;
            cantarboles++;
        }
    }
}

void ListaArbol::removerArbol(int pos) {
    Nodo *remove;
    Nodo *aux;
    if (pos < 0 || pos > cantarboles || cantarboles == 0){
        return;
    }
    if(cantarboles == 1){
        remove = primero;
        primero = NULL;
    }

    else if(pos == 0){
        remove = primero;
        primero = primero->next;
    }
    else if(pos == cantarboles - 1){
        for(int i = 0; i < pos - 1; i++){
            aux = aux->next;
        }
        remove = aux->next;
        delete remove;
        aux->next = NULL;
    }
    else{
        for (int i = 0; i < pos - 1; ++i) {
            aux = aux->next;
        }
        remove = aux->next;
        aux->next = remove->next;
        remove->next->prev = aux;
    }
    delete remove;
    cantarboles--;
}

int ListaArbol::getTam() {
    return cantarboles;
}


Arbol_de_Mangos *ListaArbol::get(int pos) {
    Nodo *aux = primero;

    for (int i = 0; i < pos; ++i) {
        aux = aux->next;
    }
    return nullptr;//cuando hagas la sprite del tree retornalo aqui como apuntador;
}
