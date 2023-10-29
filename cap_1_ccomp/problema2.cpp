    //Mayor de dos números: Escribe un programa que tome dos números como entrada y muestre el número más grande.
    

#include <iostream>

using namespace std;

int main()
{
    int a;
    int b;

    cout << "Ingrese el primer numero: " ;
    cin >> a ;

    cout << "Ingrese el segundo numero: " ;
    cin >> b ;

    if (a > b)
    {
        cout << a << " es el mas grande" << endl;
    }
    else 
    {
        cout << b << " es el mas grande" << endl;
    }

    return 0;
}   