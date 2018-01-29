#include <iostream>
using namespace std;

int main() {

    int *pc, c;

    c = 5;
    //1) Posicion de c en la memoria
    cout << "Address of c (&c): " << &c << endl;
    //2) Valor de c
    cout << "Value of c (c): " << c << endl << endl;

    pc = &c;
    //3) Posicion del apuntador pc en la memoria
    cout << "Address that pointer pc holds (pc): "<< pc << endl;
    //4) Contenido del apuntador
    cout << "Content of the address pointer pc holds (*pc): " << *pc << endl << endl;

    c = 11;
    *pc = 2;

    //5) Doble apuntador
    int **doublepointer = &pc;
    cout<< "Adress pointer doublepointer holds (pc): "<< doublepointer << endl;
    //6) Valor del doble apuntador
    cout<< "Value of doublepointer: "<< **doublepointer<< endl ;

    c = 5;
    *pc = 10;

    //7) Suma con apuntadores
    cout<<"c + pc = "<<c + *pc<<endl;

    //8) Resta con apuntadores
    cout<<"pc - c = "<<*pc - c<<endl;

    //9) Multiplicacion con apuntadores
    cout<<"pc * c = "<<*pc * c<<endl;

    //10) Division con apuntadores
    cout<<"pc / c = "<<*pc / c<<endl;
    return 0;
}
