/*
3.12 (Clase Fecha) Crea una clase llamada Fecha que incluya tres piezas 
de información como miembros de datos: un mes (tipo int), un día (tipo int) y un año (tipo int). 
Tu clase debe tener un constructor con tres parámetros que use los parámetros para inicializar 
los tres miembros de datos. Para el propósito de este ejercicio, asume que los valores proporcionados 
para el año y el día son correctos, pero asegúrate de que el valor del mes esté en el rango de 1 a 12; 
si no lo está, establece el mes en 1. Proporciona una función set y get para cada miembro de datos. 
Proporciona una función miembro displayDate que muestra el mes, día y año separados por barras diagonales (/). 
Escribe un programa de prueba que demuestre las capacidades de la clase Fecha.
*/


#include <iostream>
#include "problema3.12.h"

using namespace std;

int main()
{
    int anio;
    int mes;
    int dia;

    cout << "ingrese el anio --> "; cin >> anio;
    cout <<"ingres el mes --> " ; cin >> mes;
    cout << "ingrese el dia -->" ; cin >> dia;

    Fecha fecha(mes,dia,anio);
    fecha.mostras_fecha();

    return 0;
}