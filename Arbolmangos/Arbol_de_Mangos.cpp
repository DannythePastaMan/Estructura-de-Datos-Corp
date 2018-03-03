//
// Created by dgome on 3/1/2018.
//
#include "Mango.h"
#include "Arbol_de_Mangos.h"
#include <iostream>

class Mango;
using namespace std;

Arbol_de_Mangos::Arbol_de_Mangos() {
    primero = NULL;
    cantmang = 0;
    crecimiento = 2;
}

void Arbol_de_Mangos::addMango(int peso) {
    if(crecimiento == 2){
        insertarMango(peso, cantmang);
    }

}

void Arbol_de_Mangos::addMango(Mango *mangiuito) {
    Mango *aux = primero;

    if(primero == NULL) {
        primero = mangiuito;
    }
    else{
        for (int i = 0; i < cantmang - 1; ++i) {
            aux = aux->sig;
            aux->sig = mangiuito;
        }
        cantmang++;
    }
}

void Arbol_de_Mangos::insertarMango(int peso, int pos) {
    Mango *neur = new Mango(peso);
    Mango *aux = primero;
    
    if(pos < 0 || pos > cantmang){
        return;
    }
    if(pos == 0 && primero == NULL){
        primero = neur;
        cantmang++;
    }
    
    else if(pos == 0 && primero != NULL){
        neur->sig = primero;
        primero = neur;
        cantmang++;
    }
    else if(pos == cantmang){
        for (int i = 0; i < pos - 1; ++i) {
            aux = aux->sig;
            aux->sig = neur;
            neur->ant = aux;
            cantmang++;
        }
        
        if(pos <= cantmang){
            for (int i = 0; i < pos - 1; ++i) {
                aux = aux->sig;
                aux->sig->ant = neur;
                neur->ant = aux;
                neur->sig = aux->sig;
                aux->sig = neur;
                cantmang ++;
            } 
        }
    }
}

void Arbol_de_Mangos::removerMango(int pos) {
    Mango *remove = NULL;
    Mango *aux = primero;

    if(pos < 0 || pos > cantmang || cantmang == 0){
        return;
    }
    if(cantmang == 1){
        remove = primero;
        primero = NULL;
    }

    else if(pos == 0){
        remove = primero;
        primero = primero->sig;
    }
    else if(pos == cantmang-1){
        for(int i = 0; i < pos -1; i++){
            aux = aux->sig;
            remove = aux->sig;
            delete remove;
            aux->sig = NULL;

        }
    }
    else{
        for(int i = 0; i > cantmang; i++){
            aux = aux->sig;
            remove = aux->sig;
            aux->sig = remove->sig;
            remove->sig->ant = aux;
        }
        delete remove;
        cantmang--;
    }
}

void Arbol_de_Mangos::Print() {
    Mango *aux = primero;
    for(int i = 0; i < cantmang; i++){
        cout<<aux->peso<<endl;
        aux = aux->sig;
    }
}

int Arbol_de_Mangos::getTam() {
    return cantmang;
    return 0;
}

void Arbol_de_Mangos::Crecer() {
    if(crecimiento == 1){
        //hace aqui una parte visual
        crecimiento ++;
    }
}

int Arbol_de_Mangos::getRitmoCrecimiento() {
    return crecimiento;
}
void Arbol_de_Mangos::get(int pos) {
    Mango *aux = primero;
    for (int i = 0; i < pos; i++) {
        aux = aux->sig;
    }
    cout<<aux->peso;
}

Arbol_de_Mangos::~Arbol_de_Mangos() {

}
