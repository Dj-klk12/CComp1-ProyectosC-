/*
EJERCICIO 2.26
Muestre el siguiente patrón de tablero de ajedrez con ocho sentencias de salida y a continuación, 
muestre el mismo patrón utilizando el menor número posible de sentencias.
* * * * * * * *
 * * * * * * * *
* * * * * * * *
 * * * * * * * *
* * * * * * * *
 * * * * * * * *
* * * * * * * *
 * * * * * * * *
*/

#include <iostream>

using namespace std;

int main()
{
    cout << "con 8 sentencias de salida --> " << endl;

    cout << "* * * * * * * * " << endl;
    cout << " * * * * * * * *" << endl;
    cout << "* * * * * * * * " << endl;
    cout << " * * * * * * * *" << endl;
    cout << "* * * * * * * * " << endl;
    cout << " * * * * * * * *" << endl;
    cout << "* * * * * * * * " << endl;
    cout << " * * * * * * * *" << endl;

    cout << "con las menores sentencias --> " << endl;

    cout << "* * * * * * * *\n" " * * * * * * * *\n" "* * * * * * * *\n" " * * * * * * * *\n" "* * * * * * * *\n" " * * * * * * * *\n" "* * * * * * * *\n" " * * * * * * * *\n"  <<endl;

    return 0;
}