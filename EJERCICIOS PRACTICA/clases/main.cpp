#include <iostream>
#include "ArregloDinamicoEnteros.h"

using namespace std;

int main() {
    int arr[3] = {2, 3, 5};
    ArregloDinamicoEnteros arreglo(3, arr);

    cout << "Arreglo original: ";
    arreglo.imprimir();

    // Insertar el valor 10 en la posición 1
    arreglo.insertar(1, 10);
    cout << "Despues de insertar 10 en la posicion 1: ";
    arreglo.imprimir();

    // Eliminar el elemento en la posición 2
    arreglo.eliminar(1);
    cout << "Despues de eliminar el elemento en la posicion 1: ";
    arreglo.imprimir();

    return 0;
}
