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

#include <string>

using namespace std;

class Vehiculomotorizado
{

private:
    string marca;
    string t_combus;
    int a_fabri;
    string color;
    int capacidad_motor;


public:

    Vehiculomotorizado(string marca1, string t_combus1, int a_fabri1, string color1, int capacidad_motor1) 
        :marca(marca1) , t_combus(t_combus1), a_fabri(a_fabri1), color(color1), capacidad_motor(capacidad_motor1)
        {}

    void getmarca1(string marca1)
    {
        this -> marca = marca1;
    }

    void gett_combus1(string t_combus1)
    {
        this -> t_combus = t_combus1;
    }

    void geta_fabri1(int a_fabri1)
    {
        this -> a_fabri = a_fabri1;
    }

    void getcolor1(string color1)
    {
        this -> color = color1;
    }

    void getcapacidad_motor(int capadidad_motor1)
    {
        this -> capacidad_motor = capadidad_motor1;
    }


    string setmarca1() const 
    {
        return marca;
    }

    string sett_combus1() const 
    {
        return t_combus;
    }

    int seta_fabri1() const
    {
        return a_fabri;
    }

    string setcolor1() const
    {
        return color;
    }

    int setcapacidad_motor1() const
    {
        return capacidad_motor;
    }
  
    void MostrarDetallesDelAuto()
    {
        cout <<"La marca del auto es --> " << marca << endl;
        cout <<"El tipo de combustible es --> " << t_combus << endl;
        cout <<"El ano de fabricacion es --> " << a_fabri << endl;
        cout <<"El color es --> " << color << endl;
        cout <<"La capcidad del motor es --> " << capacidad_motor << endl;
    }

};