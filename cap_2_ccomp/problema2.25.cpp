/*
EJERCICIO 2.25
Escriba un programa que lea tres enteros y determine 
e imprima si los dos primeros enteros son factores 
del tercero.[Pista: Utilice el operador resto (%)].
*/

#include <iostream>

using namespace std;

int main()
{
    int a;

    cout << "ingrese el primer numero--> ";
    cin >> a;

    int b;

    cout << "ingrese el segundo numero--> ";
    cin >> b;

    int c;

    cout << "ingrese el tercer numero--> ";
    cin >> c;

    if (c % a == 0 && c % b ==0)
    {
        cout << " son factores de -->" << c << endl;
    }
    else 
    {
        cout << "no son factorees :(" << endl;
    }

    return 0;
}