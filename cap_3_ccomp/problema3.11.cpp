/*
3.11 (Clase VehículoMotorizado) Crea una clase llamada VehículoMotorizado que represente un 
vehículo motorizado usando: marca (tipo string), tipo de combustible (tipo string), 
año de fabricación (tipo int), color (tipo string) y capacidad del motor (tipo int). 
Tu clase debe tener un constructor que inicialice los tres miembros de datos. 
Proporciona una función set y get para cada miembro de datos. Agrega una función 
miembro llamada displayCarDetails que muestra los cinco miembros de datos en cinco 
líneas separadas en la forma "nombre del miembro: valor del miembro". 
Escribe un programa de prueba para demostrar las capacidades del VehículoMotorizado.
*/

#include <iostream>

#include "problema3.11.h"

using namespace std;

int main()
{   

    string marca;
    string combustible;
    int a_fabri;
    string color;
    int cap_mot;

    cout << "ingrese la marca " ; cin >> marca ;
    cout << "ingrese el tipo de combustible " ; cin >> combustible ;
    cout << "ingrese el ano de fabricacion " ; cin >> a_fabri ;
    cout << "oingrese el color " ; cin >> color ;
    cout << "ingrese la capacidad del moto " ; cin >> cap_mot ;

    Vehiculomotorizado detalles(marca,combustible,a_fabri,color,cap_mot);
    detalles.MostrarDetallesDelAuto(); 

    return 0;

}