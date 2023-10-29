//Número positivo, negativo o cero: Escribe un programa que solicite al usuario un número y luego indique si es positivo, negativo o cero.

#include <iostream>

using namespace std;

int main()
{
    int a;

    cout << "Ingrese un numero: " ;
    cin >> a ;

    if (a > 0)
    {
        cout << a << " es positivo" << endl;
    }

    else if(a < 0)
    {
        cout << a << " es negativo" << endl;
    }

    else 
    {
        cout << a << " es cero" << endl;
    }

    return 0;
}