/*
Calculadora de descuento: Crea un programa que calcule el precio final de un producto después de aplicar un descuento. 
Pide al usuario que ingrese el precio original y el porcentaje de descuento, y luego muestra el precio con descuento.
*/

#include <iostream>

using namespace std;

int main()
{
    float a;
    
    cout << "ingrese el precio del producto--> " ;
    cin >> a ;

    if (a <= 0)
    {
        cout << "el precio del producto debe ser mayor a 0" << endl;
        return 1;
    }
    
    float b;

    cout << "ingrese el porcentaje de descuento --> " ;
    cin >> b ;

    if (b >= 25)
    {
        cout << "el porcentaje de descuento no es valido " << endl;
        return 1;
    }

    float calcula_porcentaje;

    calcula_porcentaje=a-(a*(b/100.0));

    cout << "el precio final es --> " << calcula_porcentaje << endl;

    return 0;
}