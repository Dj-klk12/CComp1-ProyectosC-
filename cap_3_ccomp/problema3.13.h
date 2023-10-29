/*
3.13 (Eliminación de código duplicado en la función principal) En la Fig. 3.9, la función principal contiene
seis declaraciones (líneas 14-15, 16-17, 26-27, 28-29, 37-38 y 39-40) que muestran cada una un objeto de Cuenta
nombre y saldo. Estudia estas declaraciones y notarás que sólo difieren en el objeto de Cuenta que se está manipulando: cuenta1 o cuenta2. En este ejercicio, definirás una nueva función displayAccount que contiene una copia de esa declaración de salida. El parámetro de la función miembro
será un objeto de Cuenta y la función miembro mostrará el nombre y el saldo del objeto. Luego reemplazarás las seis declaraciones duplicadas en main con llamadas a displayAccount, pasando
como argumento el objeto de Cuenta específico para mostrar.
Modifica la Fig. 3.9 para definir la siguiente función displayAccount después de la directiva using y
antes de main:

void displayAccount(Account accountToDisplay) 
{
 // coloca la declaración que muestra 
 // el nombre y saldo de accountToDisplay aquí
}

Reemplaza el comentario en el cuerpo de la función miembro con una declaración que muestre el nombre y saldo de accountToDisplay.
Una vez que hayas completado la declaración de displayAccount, modifica main para reemplazar las declaraciones
que muestran el nombre y saldo de cada Cuenta con llamadas a displayAccount de la forma:

displayAccount(nombreDelObjetoDeCuenta);

En cada llamada, el argumento debe ser el objeto cuenta1 o cuenta2, según corresponda. Luego, prueba
el programa actualizado para asegurarte de que produce la misma salida que se muestra en la Fig. 3.9.
*/



#include <string>

using namespace std;

class Account 
{
public:

    Account(string nombre_cuenta, int saldo_inicial)
        : nombre{nombre_cuenta} {

        if (saldo_inicial > 0) {
            saldo = saldo_inicial;
        }
    
    }
    void deposito (int deposito_importe) {
        if (deposito_importe > 0) {
            saldo = saldo + deposito_importe;
        }
    }

    int obtener_saldo() const {
        return saldo;
    }

    void poner_nombre(string nombre_cuenta) {
        nombre = nombre_cuenta;
    }

    string obtener_nombre() const {
        return nombre;
    }



private:
    string nombre;
    int saldo{0};
};