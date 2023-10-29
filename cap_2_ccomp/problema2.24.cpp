/*
EJERCICIO 2.24
Escriba un programa que lea dos números enteros y determine e imprima si cada entero,
así como la suma de los dos enteros es un número impar. [Sugerenciaoperador resto (%).
Un número impar no es múltiplo de dos. 
Cualquier número impar tiene un resto de uno cuando se divide por 2].
*/

#include <iostream>

using namespace std;

int main()
{
    int a;

    cout << "ingrese a-->" ;
    cin >> a;

    if(a % 2 == 0)
    {
        cout << "es par " << endl;
    }
    else
    {
        cout << "es impar " << endl;
    }

    int b;

    cout << "ingrese b-->" ;
    cin >> b;

    if(b % 2 == 0)
    {
        cout << "es par " << endl;
    }
    else
    {
        cout << "es impar " << endl;
    }

    int c=a+b;

    if(c % 2 == 0)
    {
        cout << "la suma de los 2 es par " << endl;
    }
    else
    {
        cout << "la suma de los 2 es impar " << endl;
    }

    return 0;
}