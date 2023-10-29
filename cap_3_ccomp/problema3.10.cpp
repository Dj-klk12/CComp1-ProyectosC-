/*
3.10 (Clase Factura) Crea una clase llamada Factura que una ferretería podría usar para representar una
factura de un artículo vendido en la tienda. Una Factura debe incluir seis miembros de datos: un número 
de pieza (tipo string), una descripción de la pieza (tipo string), una cantidad del artículo que se está 
comprando (tipo int), un precio por artículo (tipo int), una tasa de impuesto al valor agregado (IVA) 
como decimal (tipo double) y un descuento tasa como decimal (tipo double). Tu clase debe tener un 
constructor que inicialice los seis miembros de datos. El constructor debe inicializar los primeros 
cuatro miembros de datos con valores de parámetros y los últimos dos miembros de datos a valores 
predeterminados del 0.20 por ciento y cero respectivamente. Proporciona una función set y get para cada 
miembro de datos. Además, proporciona una función miembro llamada getInvoiceAmount que calcula el monto 
de la factura (es decir, multiplica la cantidad por el precio por artículo y aplica los montos de 
impuestos y descuentos), luego devuelve el monto. Haz que los miembros de datos set realicen comprobaciones 
de validez en sus parámetros: si un valor de parámetro no es positivo, debería ser dejado sin cambios. 
Escribe un programa controlador para demostrar las capacidades de la Factura.
*/

#include <iostream>

using namespace std;

#include "problema3.10.h"

int main()
{

    Factura prueba_fac("clavos1475","clavos", 2 , 18);

    cout << "Codigo --> " << prueba_fac.getnum_pieza() << endl;
    cout << "Descripcion--> " << prueba_fac.getdes_pieza() << endl;
    cout << "# de piezas--> " << prueba_fac.getcant_articulo() << endl;
    cout << "Precio de pieza--> " << prueba_fac.getprecio() << endl;
    cout << "El IVA es--> " << prueba_fac.getiva() << endl;
    cout << "Descuento es --> " << prueba_fac.getdes_pieza() << endl;

    cout << "Total de la Factura --> " << prueba_fac.getmonto_de_la_factura() << endl;

    return 0;
}