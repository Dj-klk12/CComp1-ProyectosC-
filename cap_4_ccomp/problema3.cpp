/*
Implemente un programa que imprima los n números de la secuencia de Fibonacci
1 1 2 3 5 8 13 21 .....

*/

#include <iostream>

using namespace std;

int main()
{
    int a = 0 ;
    int b = 1 ;
    int c = a+b ;

    int iteraciones;
    cout << "ingrese cuantos numeros de fibbo quiere --> " ; cin >> iteraciones ;

    for(int i = 1 ; i <= iteraciones ; i++)
    {
        cout << c << " ";
        a = b ;
        b = c ;
        c = a + b ;
    }
    
    return 0;

}