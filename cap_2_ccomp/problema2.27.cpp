/*
EJERCICIO 2.27
Escriba un programa que imprima el equivalente entero de un carácter escrito en el teclado. 
Almacene la entrada en una variable de tipo char. Pruebe su programa varias veces utilizando 
letras mayúsculas, minúsculas, digitos y caracteres especiales (como $).
*/


#include <iostream>

using namespace std;

int main() 
{
    char a;

    cout << "ingrese un caracter --> " ;
    cin >> a;

    int b = a;

    cout << "el valor entero de --> " << a << " es " << b << endl;

    return 0;
}