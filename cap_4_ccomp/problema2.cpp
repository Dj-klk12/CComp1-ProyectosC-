/*
Implemente un programa que imprima los n números perfectos

Elegimos el número 28.
Los divisores propios positivos de 28 son 1, 2, 4, 7 y 14.
Sumamos estos divisores: 1 + 2 + 4 + 7 + 14 = 28.
La suma de los divisores propios es igual a 28, por lo tanto, 28 es un número perfecto.
*/

#include <iostream>

using namespace std;

int main()
{
    int num;                                // cuando num = 1000
    cout <<"ingrese un numero -->" ; 
    cin >> num ;

    for (int j = 1 ; j <= num ; j++)        // iniciamos un bucle for con j
    {                                       // que inicia en 1 siempre y cuando j menor igual a num
        int numeros_perfectos = 0;          // inicializamos nuestra variable en 0 aqui sumaremos los divisores
        for(int i = 1 ; i < j ; i++)        // iniciamos el 2do bucle for con i que inicia en 1 siempre y cuando sea menor a j 
        {
            if (j % i == 0)                 // si cumple que j % i == 0 , la variable numeros perfectos se incrementara con cada divisor(i) que de residuo 0
            {
                numeros_perfectos = numeros_perfectos + i;
            }        
        }
    
        if (numeros_perfectos == j)         // aqui comparamos si j es igual a numeros perfectos(la suma de los divisores de j)
        {                                   // si cumple imprime j que seria un numero perfecto 
            cout << j << endl;
        }
    }
    return 0;
}