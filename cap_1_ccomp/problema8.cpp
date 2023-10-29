/*
Categorizar edades: Pide al usuario que ingrese su edad 
y luego muestra un mensaje que indique si es un niño, adolescente, adulto 
o adulto mayor, según ciertos rangos de edades que definas.
*/

#include <iostream>

using namespace std;

int main() 
{
    int a;

    cout << "ingrese su edad --> ";
    cin >> a ;
 
    if (a >= 0 && a <= 120)
    {

        if (a < 12)
        {
            cout << "es un niño :v" << endl;
        }

        else if (a >= 12 && a <= 21)
        {
            cout << "es un adolescente :,v" << endl;
        }

        else if (a >= 22 && a <= 55)
        {
            cout << "es un adulto :(" << endl;
        }

        else
        {
            cout << "es un adulto mayor :,(" << endl;
        }

    }

    else
    {
        cout << "edad no validad." << endl;
    }

    return 0;
}