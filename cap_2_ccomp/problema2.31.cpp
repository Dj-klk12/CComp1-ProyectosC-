/*
EJERCICIO 2.31
(Calculadora de ahorro de coches compartidos) Investiga varias páginas web de coches compartidos. Crea una aplicación
que calcule su coste diario de conducción, para que pueda estimar cuánto dinero podría ahorrarse si
el coche compartido. La aplicación debe introducir la siguiente información y mostrar al usuario el coste por
día de trayecto en coche al trabajo:
a) Total de kilómetros recorridos al día.
b) Coste por galón de gasolina.
c) Promedio de kilómetros por galón.
d) Tasas de aparcamiento por día.
e) Peajes por día.
*/

#include <iostream>

using namespace std;

int main() {
    float k_d;
    cout << "Ingrese el recorrido al día en km: ";
    cin >> k_d;

    float c_gl;
    cout << "Ingrese el costo por galón de gasolina: ";
    cin >> c_gl;

    float p_k_gl = k_d / c_gl;
    cout << "El promedio de km por galón es --> " << p_k_gl << endl;

    float ap_d;
    cout << "Ingrese el costo de aparcamiento al día: ";
    cin >> ap_d;

    float p_d;
    cout << "Ingrese el número de peajes al día: ";
    cin >> p_d;

    float costo = p_k_gl + p_d + ap_d;

    cout << "El costo total diario es --> " << costo << endl;

    return 0;
}
