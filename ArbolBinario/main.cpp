#include <iostream>
#include "Arbol.h"

using namespace std;

int main() {
   int dato, opc, cont = 0;
    Preorden p;
    Nodo *tree;

    do{
        cout<<"*****Menu*****"<<endl;

        cout<<"Elija opcion: \n1. Insertar nuevo nodo.\n2. Mostrar arbol\n3. Buscar elemento en el arbol\n4. Recorrer en preorden\n5. Recorrer en Inorden\n6. Recorrer en postorden.\n7. Eliminar nodo\n8. Salir"<<endl;
        cin>>opc;

        switch(opc){
            case 1:
                cout<<"Digite numero a almacenar: ";
                cin>>dato;
                p.insertarNodo(tree, dato);
                system("pause");
                break;

            case 2:
                cout<<"*****Mostrando arbol*****\n\n";
                p.showTree(tree, cont);
                cout<<"\n";
                system("pause");
                break;

            case 3:
                cout<<"Digite num a buscar: ";
                cin>>dato;

                if(p.searchNodo(tree, dato)){
                    cout<<"Elemento en nodo: "<<dato<<" found"<<endl;
                }

                else{
                    cout<<"Not found";
                }
                system("pause");
                break;

            case 4:
                cout<<"*****Recorrido en PreOrden: *****";
                p.preOrden(tree);
                cout<<"\n\n";
                system("pause");
                break;

            case 5:
                cout<<"*****Recorrido en InOrden*****";
                p.inOrden(tree);
                cout<<"\n\n";
                break;

            case 6:
                cout<<"*****Recorrido en PostOrden*****";
                p.postOrden(tree);
                cout<<"\n\n";
                break;

            case 7:
                cout<<"*****Eliminar Nodo*****";
                break;

            case 8:
                break;
        }

    }while(opc != 8);
}