/*
2.- Cada nuevo término en la secuencia de Fibonacci se genera sumando los dos términos anteriores. 
Al comenzar con 1 y 2 , los primeros 10  términos serán: 1, 2 ,3, 5 ,8 ,13 ,21, 34,55, 89, ... 
Considerando los términos de la secuencia de Fibonacci cuyos valores no superan los cuatro millones, 
encuentre la suma de los términos pares.

*/

#include <iostream>

using namespace std;

int main()
{
    int a = 1;
    int b = 2;
    int c = a + b;
    int suma = 0;

    while (c <= 4000000)
    {
        a = b;
        b = c;
        c = a + b;

        if (c % 2 == 0)
        {
            suma += c;
        }
    }

    cout << "La suma de los términos pares de Fibonacci menores o iguales a 4,000,000 es: " << suma << endl;

    return 0;
}


