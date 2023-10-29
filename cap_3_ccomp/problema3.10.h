/*
3.10 (Clase Factura) Crea una clase llamada Factura que una ferretería podría usar para representar una
factura de un artículo vendido en la tienda. Una Factura debe incluir seis miembros de datos: un número 
de pieza (tipo string), una descripción de la pieza (tipo string), una cantidad del artículo que se está 
comprando (tipo int), un precio por artículo (tipo int), una tasa de impuesto al valor agregado (IVA) 
como decimal (tipo double) y un descuento tasa como decimal (tipo double). 
Tu clase debe tener un 
constructor que inicialice los seis miembros de datos. 
El constructor debe inicializar los primeros 
cuatro miembros de datos con valores de parámetros y los últimos dos miembros de datos a valores 
predeterminados del 0.20 por ciento y cero respectivamente. 
Proporciona una función set y get para cada 
miembro de datos. Además, proporciona una función miembro llamada getInvoiceAmount que calcula el monto 
de la factura (es decir, multiplica la cantidad por el precio por artículo y aplica los montos de 
impuestos y descuentos), luego devuelve el monto. Haz que los miembros de datos set realicen comprobaciones 
de validez en sus parámetros: si un valor de parámetro no es positivo, debería ser dejado sin cambios. 
Escribe un programa controlador para demostrar las capacidades de la Factura.
*/


#include <string>
#include <iostream>

using namespace std;

class Factura {

private:
    string N_pieza;
    string Des_pieza;
    int Cant_articulo;
    int Precio;
    double IVA;
    double dcnt_tasa;

public:
    Factura(string n_pieza, string d_pieza, int cnt_articulo, int precio)
        : N_pieza(n_pieza), Des_pieza(d_pieza), Cant_articulo(cnt_articulo), Precio(precio), IVA(0.20), dcnt_tasa(0.0)
        {
            if (Cant_articulo < 0)
            {
                this -> Cant_articulo = 0;
            }
            if (Precio < 0)
            {
                this -> Precio = 0;
            }
        }   

    void setnum_pieza(string n_pieza)
    {
        this -> N_pieza = n_pieza; 
    }

    void setdes_pieza(string d_pieza)
    {
        this -> Des_pieza = d_pieza;
    }

    void setcant_articulo(int cnt_articulo)
    {
        if (cnt_articulo > 0)
        {
            this -> Cant_articulo = cnt_articulo;
        }
    }

    void setprecio(int precio)
    {
        if (precio > 0)
        {
            this -> Precio = precio;
        }
    }

    void setiva(double iva)
    {   
        if (iva >= 0.0 && iva <= 1.0)
        {
            this -> IVA = iva;
        }
    }

    void setdcnt_tasa(double dcnt_tasa)
    {
        if (dcnt_tasa>= 0.0 && dcnt_tasa <= 1.0)
        {
            this -> dcnt_tasa = dcnt_tasa;
        }    
    } 

    string getnum_pieza() const
    {
        return N_pieza;
    }

    string getdes_pieza() const
    {
        return Des_pieza;
    }

    int getcant_articulo() const
    {
        return Cant_articulo;
    }

    int getprecio() const
    {
        return Precio;
    }

    double getiva() const
    {
        return IVA;
    }

    double getdcnt_tasa() const
    {
        return dcnt_tasa;
    }

    double getmonto_de_la_factura() const
    {
        double subtotal = Cant_articulo * Precio;
        double total_iva = subtotal * IVA;
        double total_descuento = subtotal * dcnt_tasa;
        return subtotal + total_iva - total_descuento;
    } 
          
};