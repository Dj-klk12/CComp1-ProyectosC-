#include <iostream>

using namespace std;

int main()
{
    //suponga que x tiene como direccion de memoria -> 0x7777
    //suponga que y tiene como direccion de memoria -> 0x8888

    int x = 10; //inicializamos x con 10
    int y = 5;  // incializamos y con 5
    int *ptr = &x;  //luego asignamos al puntero ptr la direccion de memoria de x 
    *ptr = 1000;    //aqui el puntero tiene como valor 1000
    cout << x << endl;  //aqui imprime 1000 por que al tener la direccion de memoria de x, x toma el valor de 1000 

    ptr = &y;   // aqui ptr tiene la direccion de memoria de y
    cout << ptr << endl;    //aqui imprime 0x8888
    cout << *ptr << endl;   //aqui imprime 5

    int arr[] = {0,2,5,4,9,10}; //creamos un array de tamaño 6
    ptr = arr;  //aqui asigamos a ptr el array arr

    cout << *ptr << endl;   //aqui imprime el array primer elemento del array ya que un puntero en un array apunta directamente al primer elemento de un array
            //imprime 0 
    while(*ptr)     //creamos un bucle que inicia con 0 pero no entra en el bucle por ser falso
    {
        if(*ptr++)  //nunca entrara a las condiciones del bucle
        {
            *ptr = 10;
        }
        else
        {
            *ptr = 11;
        }
        cout << *ptr << endl; //
    }
    cout << *ptr << endl; // imprime 0

    return 0;
} 