/*
7- al enumerar los primeros seis numeros primos 2,3,5,7,11 y13 podemos ver que el 6to primo es 13 cual es el 100001 primer numero primo
*/


#include <iostream>

using namespace std;

int main() 
{
    int n = 10001; 
    int contador = 0; 
    int numero = 2; 

    while (contador < n) 
    {
        bool esPrimo = true; 

        
        for (int i = 2; i * i <= numero; i++) 
        {

            if (numero % i == 0) 
            {
                esPrimo = false;
                break;
            }
        }

       
        if (esPrimo) 
        {
            contador++;
        }

        
        numero++;
    }

    cout << "El " << n << "º número primo es: " << (numero - 1) << endl;
    return 0;
}

