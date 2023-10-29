/*
EJERCICIO 2.30
Crear una aplicación calculadora de IMC que lea el peso del usuario en libras y la altura en pulgadas
(o, si lo prefiere, el peso del usuario en kilogramos y la altura en metros), a continuación, calcula y muestra
el índice de masa corporal del usuario. Además, la aplicación debe mostrar la siguiente información de
Departamento de Salud y Servicios Humanos/Institutos Nacionales de Salud para que el usuario pueda evaluar su IMC
evaluar su IMC:

IMC = Peso (en kilogramos) / (Altura en metros)²
*/

#include <iostream> 

using namespace std;

int main()
{
    cout << "Bajo peso: IMC por debajo de 18.5" << endl;
    cout << "Peso normal: IMC entre 18.5 y 24.9" << endl;
    cout << "Sobrepeso: IMC entre 25 y 29.9" << endl;
    cout << "Obesidad leve (Grado 1): IMC entre 30 y 34.9" << endl;
    cout << "Obesidad moderada (Grado 2): IMC entre 35 y 39.9" << endl;
    cout << "Obesidad severa (Grado 3): IMC de 40 o más" << endl;


    float a;
    cout << "ingrese su peso en kg --> ";
    cin >> a;

    float b;
    cout << "ingrese su talla en metros --> ";
    cin >> b;

    cout << "su Imc esta en --> " << a / (b*b) << endl;

    return 0;
}