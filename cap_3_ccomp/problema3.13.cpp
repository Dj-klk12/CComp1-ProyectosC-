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


#include <iostream>
#include "problema3.13.h"

using namespace std;

void mostrarInformacionCuenta(const Account& cuenta)
{
    cout << "Cuenta: " << cuenta.obtener_nombre() << " el saldo es $" << cuenta.obtener_saldo() << endl;
}

int main()
{
    Account account1{"Jane Green", 50};
    Account account2{"John Blue", -7};

    mostrarInformacionCuenta(account1);
    mostrarInformacionCuenta(account2);

    int depositAmount;

    cout << "\n\nIntroducir el importe del depósito a la cuenta 1: ";
    cin >> depositAmount;
    cout << "Añadiendo $" << depositAmount << " a la cuenta 1 saldo $\n\n";
    account1.deposito(depositAmount);
    mostrarInformacionCuenta(account1);
    mostrarInformacionCuenta(account2);


    cout << "\n\nIntroducir el importe del depósito a la cuenta 2: ";
    cin >> depositAmount;
    cout << "Añadiendo $" << depositAmount << " a la cuenta 2 saldo $\n\n";
    account2.deposito(depositAmount);
    mostrarInformacionCuenta(account1);
    mostrarInformacionCuenta(account2);


    return 0;
}