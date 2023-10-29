/*
Convertir temperatura: Crea un programa que permita al usuario convertir una 
temperatura Celsius a grados Fahrenheit, según su elección. 
Utiliza la fórmula adecuada para la conversión.
de ºC a ºF
ºF = ºC x 1.8 + 32
de ºF a ºC
ºC = (ºF-32) ÷ 1.8
*/

#include <iostream>

using namespace std;

int main()
{

    string a;

    cout << "ustede desea convertir Celcius a Fahrenheit(c-f) o Fahrenheit a Celcius(f-c) --> " ;
    cin >> a ;

    if (a == "c-f")
    {
        float c;
        cout << "ingrese los grados celsius --> ";
        cin >> c ;

        cout << "usted eligio de Celcius a Fahrenheit --> " << c*1.8+32 << endl;
    }

    else if (a == "f-c")
    {
        float f;
        cout << "ingrese los grados fahrenheit --> ";
        cin >> f ;

        cout << "usted eligio de Fahrenheit a Celcius --> " << (f-32) /1.8 << endl;
    } 

    return 0;
}