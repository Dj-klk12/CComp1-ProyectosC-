/*
3.12 (Clase Fecha) Crea una clase llamada Fecha que incluya tres piezas 
de información como miembros de datos: un mes (tipo int), un día (tipo int) y un año (tipo int). 
Tu clase debe tener un constructor con tres parámetros que use los parámetros para inicializar 
los tres miembros de datos. 
Para el propósito de este ejercicio, asume que los valores proporcionados 
para el año y el día son correctos, pero asegúrate de que el valor del mes esté en el rango de 1 a 12; 
si no lo está, establece el mes en 1. Proporciona una función set y get para cada miembro de datos. 
Proporciona una función miembro displayDate que muestra el mes, día y año separados por barras diagonales (/). 
Escribe un programa de prueba que demuestre las capacidades de la clase Fecha.


    {
        void setmes(int mes)
        {
            if (mes >= 1 &&  mes <= 12)
            {

            }
        }
    }
    


*/



#include <iostream>

using namespace std;

class Fecha
{

private:
    int mes;
    int dia;
    int anyo;

public:

    Fecha(int m , int d , int a)
        : mes(m),dia(d),anyo(a)
        {
            if (mes < 0 || mes > 12)
            {
                mes = 1;
            }
        }

    void setmes(int m)
    {
        this -> mes = m;
    }

    void setdia(int d)
    {
        this -> dia = d;
    }

    void setanyo(int a)
    {
        this -> anyo = a;
    }


    int getmes() const
    {
        return mes;
    }

    int getdia()const
    {
        return dia;
    }

    int getanyo()const
    {
        return anyo;
    }

    void mostras_fecha()
    {
        cout << "la fecha es --> "<< dia << "/"<<mes << "/" << anyo << endl;
    }
};