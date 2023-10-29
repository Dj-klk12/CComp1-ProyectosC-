/*
10- La suma de los números primos por debajo de 10 es: 2 + 3 + 5 + 7 = 17.
Encuentra la suma de todos los primos por debajo de 2 millones.

*/

#include <iostream>

using namespace std;

int main() 
{
    const int limite = 2000000;
    long long suma = 0;
    bool esPrimo;

    for (int numero = 2; numero < limite; numero++) 
    {
        esPrimo = true;
        for (int divisor = 2; divisor * divisor <= numero; divisor++) 
        {
            if (numero % divisor == 0) 
            {
                esPrimo = false;
                break;
            }
        }

        if (esPrimo) 
        {
            suma += numero;
        }
    }

    cout << "La suma de todos los números primos por debajo de 2 millones es: " << suma << endl;

    return 0;
}