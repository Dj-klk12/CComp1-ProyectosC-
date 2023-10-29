/*
Implemente un programa que imprima solicite por teclado un numero n e imprima los n primeros primos.
Si ingresa 20
Debe imprimir: 2 3 5 7 11 13 17 19
Un numero es primo si es divisible únicamente entre 1 y el mismo numero.
*/

#include <iostream>

using namespace std;

int main()
{
    int a ;
    cout <<"ingrese un numero: " ; cin >> a;

    if (a <= 1)
    {
        cout << "no cumple animall " << endl;
    }

    else
    {
        for (int i = 2; i <= a ; i++)
        {
            bool primo = true;

            for (int j = 2; j*j <= i; j++)
            {

                if (i % j == 0)
                {
                    primo = false;
                    break;
                }
            }

            if(primo)
            {
                cout << i << " " ;
            }
        }
        
    }
    return 0;
}
