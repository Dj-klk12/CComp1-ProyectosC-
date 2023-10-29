/*
5- 2520 es el número más pequeño que se puede dividir por cada uno de los números de 1 
a 10 sin ningún resto.

¿Cuál es el número positivo más pequeño que es?divisiblepor todos los números de 1 
a 20?
*/

#include <iostream>
#include <cmath>
using namespace std;


long long calcularMCD(long long a, long long b) 
{
    while (b != 0) 
    {
        long long temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}


long long calcularMCM(int n) 
{
    long long resultado = 1;
    
    for (int i = 2; i <= n; i++) 
    {
        resultado = (resultado * i) / calcularMCD(resultado, i);
    }
    
    return resultado;
}

int main() 
{
    int limiteSuperior = 20;
    long long resultado = calcularMCM(limiteSuperior);
    
    cout << "El número más pequeño divisible por todos los números de 1 a " << limiteSuperior << " es: " << resultado << endl;
    
    return 0;
}

