/*
Calculadora simple: Crea un programa que realice operaciones aritméticas básicas (suma, resta, multiplicación y división) 
utilizando dos números ingresados por el usuario. Pídele al usuario que seleccione la operación deseada mediante un menú.

*/

#include <iostream>

using namespace std;

int main()
{
    int a;
    int b;

    string c;

    cout << "ingrese el 1er numero: " ;
    cin >> a;

    cout << "ingrese el 2do numero: " ;
    cin >> b;

    cout << "ingrese la operacion que desea ejecutar(suma,resta,multiplicacion,division): " ;
    cin >> c;
    
    if (c=="suma")
    {
        cout << "usted eligio la suma " << " a+b = " << a+b <<endl;
    }

    else if (c=="resta")
    {
        cout << "usted eligio la resta " << " a-b = " << a-b <<endl;
    }

    else if (c=="multiplicacion")
    {
        cout << "usted eligio la multiplicacion " << " a*b = " << a*b <<endl;
    }

    else if (c=="division")
    {
        if (b==0)
        {
            cout << "la division entre cero no existe :(" << endl;
        }
        
        else 
        {
            cout << "usted eligio la division " << " a/b = " << a/b <<endl;
        }
    }

    return 0;
}