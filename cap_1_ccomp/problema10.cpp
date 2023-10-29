/*
Ordenar tres números: Escribe un programa que tome tres números como entrada y los muestre en orden ascendente.
*/


#include <iostream>

using namespace std;

int main()
{
    int a;
    int b;
    int c;

    cout << "ingrese los numeros a comparar -->" ;
    cin >> a >> b >>c ;

    if (a > b && a > c )
    {
        if (b > c)
        {
            cout << a << " " << b << " " << c << endl; 
        }

        else 
        {
            cout << a << " " << c << " " << b << endl; 
        }
    }

    else if (b > a && b > c )
    {
        if (a > c)
        {
            cout << b << " " << a << " " << c << endl; 
        }

        else 
        {
            cout << b << " " << c << " " << a << endl; 
        }
    }

    else 
    {
        if (b > a)
        {
            cout << c << " " << b << " " << a << endl;
        }

        else 
        {
            cout << c << " " << a << " " << b << endl;
        }
         
    }

    return 0;
}