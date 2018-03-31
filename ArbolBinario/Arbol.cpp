//
// Created by daniel on 3/7/18.
//

#include "Arbol.h"
#include "Nodo.h"
#include <iostream>
using namespace std;

Preorden::Preorden() {

    this->root = NULL;
    this->altura = altura;
    this->nivel = nivel;

}

Nodo *Preorden::encontrarMinimo(Nodo *tree) {
    if(tree == nullptr){
        return nullptr;
    }

    if(tree->izq){
        return encontrarMinimo(tree->izq);
    }

    else{
        return tree;
    }
}

void Preorden::showTree(Nodo *tree, int cont) {
    if(tree == nullptr){
        return;
    }

    else{
        showTree(tree->der, cont + 1);

        for (int i = 0; i < cont; ++i) {
            cout<<"   ";
        }

        cout<<tree->value<<endl;
        showTree(tree->izq, cont + 1);
    }

}

void Preorden::Replace(Nodo *tree, Nodo *neur) {
    if(tree->father){
        if(tree->value == tree->father->izq->value){
            tree->father->izq = neur;
        }
        else if(tree->value == tree->father->der->value){
            tree->father->der = neur;
        }
    }

    if(neur){
        neur->father = tree->father;
    }

}

void Preorden::Destroy(Nodo *anahilate) {

    anahilate->izq = nullptr;
    anahilate->der = nullptr;
    delete anahilate;
}

Nodo *Preorden::crearNodo(int dato) {
    Nodo *nuevo = new Nodo();

    nuevo->value = dato;
    nuevo->izq = nullptr;
    nuevo->der = nullptr;

    return nuevo;
}

void Preorden::insertarNodo(Nodo *&tree, int dato) {
    if(tree == nullptr){
        Nodo *nuevo = crearNodo(dato);
        tree = nuevo;
    }

    else{
        int rootValue = tree->value;
        if(dato < rootValue){
            insertarNodo(tree->izq, dato);
        }
        else{
            insertarNodo(tree->der, dato);
        }
    }
}

bool Preorden::searchNodo(Nodo *tree, int dato) {
    if(tree == nullptr){
        return false;
    }

    else if(tree->value == dato){
        return true;
    }

    else if(dato < tree->value){
        return searchNodo(tree->izq, dato);
    }

    else{
        return searchNodo(tree->der, dato);
    }
}

void Preorden::EliminarNodo(Nodo *tree, int dato) {
    if(tree == nullptr){
        return;
    }

    else if(dato < tree->value){
        EliminarNodo(tree->izq, dato);
    }

    else if(dato > tree->value){
        EliminarNodo(tree->der, dato);
    }

    else{
        deleteNodo(tree);
    }
}

void Preorden::deleteNodo(Nodo *remove) {

    if(remove->izq && remove->der){
        Nodo *min = encontrarMinimo(remove->der);
        remove->value = min->value;
        deleteNodo(min);
    }

    else if(remove->izq){
        Replace(remove, remove->izq);
        Destroy(remove);
    }

    else if(remove->der){
        Replace(remove, remove->der);
        Destroy(remove);
    }

    else{
        Replace(remove, nullptr);
        Destroy(remove);
    }
}

void Preorden::preOrden(Nodo *tree) {
    if(tree == nullptr){
        return;
    }

    else{
        cout<<tree->value<<" - ";
        preOrden(tree->izq);
        preOrden(tree->der);
    }
}

void Preorden::inOrden(Nodo *tree) {
    if(tree == nullptr){
        return;
    }

    else{
        inOrden(tree->izq);
        cout<<tree->value<<" - ";
        inOrden(tree->der);
    }

}

void Preorden::postOrden(Nodo *tree) {
    if(tree == nullptr){
        return;
    }

    else{
        postOrden(tree->izq);
        postOrden(tree->der);
        cout<<tree->value<<" - ";
    }
}

