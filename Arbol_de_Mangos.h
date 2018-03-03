//
// Created by dgome on 3/1/2018.
//

#ifndef ARBOLMANGOS_ARBOL_DE_MANGOS_H
#define ARBOLMANGOS_ARBOL_DE_MANGOS_H
#include "Mango.h"

class Arbol_de_Mangos {
private:
    Mango *primero;
    int cantmang;
    int crecimiento;

public:
    Arbol_de_Mangos();
    void addMango(int peso);
    void addMango(Mango *manguito);
    void insertarMango(int peso, int pos);
    void removerMango(int pos);
    void Print();
    int getTam();
    void Crecer();
    int getRitmoCrecimiento();
    void get(int pos);
    ~Arbol_de_Mangos();

};


#endif //ARBOLMANGOS_ARBOL_DE_MANGOS_H
