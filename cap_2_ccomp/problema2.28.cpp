/*
EJERCICIO 2.28
Escribe un programa que introduzca un entero de cuatro dígitos, 
separe el entero en sus dígitos y los imprima en orden inverso separados 
por dos espacios cada uno.Por ejemplo, si el usuario teclea 4315, 
el programa debería imprimir: 5  1  3  4 [Pista: Usa los operadores de división y resto de enteros].
*/


#include <iostream>

using namespace std;

int main() 
{
    int a;
    cout << "introduzca un numero de 4 digitos --> " ;
    cin >> a;

    if (a > 999 && a < 10000)
    {
        cout << a%10 << (a/10)%10 << (a/100)%10 << (a/1000)%10 << endl;
    }

    else 
    {
        cout << "el numero no es valido :(" << endl;
    }

    return 0;
}