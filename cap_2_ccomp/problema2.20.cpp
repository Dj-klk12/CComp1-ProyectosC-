
/*
EJERCICIO 2.20
(Diámetro, Circunferencia y Área de un Círculo) Escribe un programa que lea el radio de
un círculo como un número entero e imprima el diámetro, la circunferencia y el área del círculo. 
Utiliza el valor constante 3.14159 para π. Haz todos los cálculos en las sentencias de salida.
*/


#include <iostream>

using namespace std;

int main()
{
    int a;
    cout << "ingrese el radio--> " ;
    cin >> a ;

    float phi{3.1416};

    cout << "el diametro es --> " << 2 * a << endl;
    cout << "el area es --> " << phi * a * a  << endl;
    cout << "la circunferencia es --> " << 2 * a * phi << endl;

    return 0;
    
}