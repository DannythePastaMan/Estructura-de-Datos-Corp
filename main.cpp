#include "Arbol_de_Mangos.h"
#include "ListaArbol.h"
#include "Nodo.h"
#include "Mango.h"

int main() {
    Arbol_de_Mangos am;

    am.addMango(2);

    am.addMango(4);
    am.addMango(5);
    am.addMango(8);

    am.insertarMango(3, 2);

    am.getTam();

    am.Print();
}