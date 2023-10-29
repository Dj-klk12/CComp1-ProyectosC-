/*
Determinar si un número es primo: Escribe un programa que verifique si un número 
ingresado por el usuario es primo o no. Un número primo es aquel que solo es 
divisible por 1 y por sí mismo.
*/

#include <iostream>

using namespace std;

int main() 
{
    int n;

    cout << "ingrese un n entero positivo--> ";
    cin >> n;

    if (n <= 1) 
    {
        cout << "no es primo :(" << endl;
    } 
    else if (n == 2 || n == 3) 
    {
        cout << "es primo uwu" << endl;
    } 
    else if ((n % 2 == 0) || (n % 3 == 0) ) 
    {
        cout << "no es primo :(" << endl;
    } 
    else 
    {
        cout << "es primo uwu" << endl;
    }

    return 0;
}
