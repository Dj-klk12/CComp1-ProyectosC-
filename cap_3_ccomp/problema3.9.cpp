/*
3.9(Clase de cuenta modificada) Modifica la clase Cuenta (Fig. 3.8) para proporcionar una función 
miembro llamada retirar que retira dinero de una Cuenta. Asegúrate de que el monto del retiro no 
exceda el saldo de la Cuenta. Si lo hace, el saldo debe permanecer sin cambios y la función 
miembro debe mostrar un mensaje que indique “El monto del retiro excedió el saldo de la 
cuenta”. Modifica la clase AccountTest (Fig. 3.9) para probar la función miembro retirar. 
*/

#include <iostream>

#include "problema3.9.h"

using namespace std;

int main()
{
    Cuenta cuenta1{"Frank C", 350};
    Cuenta cuenta2{"Eduardo A", 150};

    cout << "Cuenta 1: " << cuenta1.obtener_nombre() << " el saldo es  $" << cuenta1.obtener_saldo() << endl;
    cout << "Cuenta 2: " << cuenta2.obtener_nombre() << " el saldo es $" << cuenta2.obtener_saldo();

    int depositAmount;
    cout << "\n\nIntroducir el importe del depósito a la cuenta1: ";
    cin >> depositAmount;
    cout << "añadiendo $" << depositAmount << " a la cuenta1 saldo $";
    cuenta1.deposito(depositAmount);

    cout << "\n\nCuenta1: " << cuenta1.obtener_nombre() << " el saldo es  $"<< cuenta1.obtener_saldo();
    cout << "\nCuenta2: " << cuenta2.obtener_nombre() << " el saldo es  $" << cuenta2.obtener_saldo();

    cout << "\n\nIntroducir el importe del depósito a la cuenta2: ";
    cin >> depositAmount;
    cout << "añadiendo $" << depositAmount << " a la cuenta2 saldo $";
    cuenta2.deposito(depositAmount);

    cout << "\n\nCuenta1: " << cuenta1.obtener_nombre() << " el saldo es  $" << cuenta1.obtener_saldo(); 
    cout << "\nCuenta2: " << cuenta2.obtener_nombre() << " el saldo es  $" << cuenta2.obtener_saldo() << endl; 

    int retiro_dinero;
    cout << "\nIntroduzca la cantidad a retirar de la cuenta1 por favor: ";
    cin >> retiro_dinero;
    cout << "Retirando $" << retiro_dinero << " de la cuenta1: ";
    cuenta1.retirar(retiro_dinero);

    cout << "\n\nCuenta1: " << cuenta1.obtener_nombre() << " el saldo es  $"<< cuenta1.obtener_saldo();
    cout << "\nCuenta2: " << cuenta2.obtener_nombre() << " el saldo es  $" << cuenta2.obtener_saldo();

    cout << "\nIntroduzca la cantidad a retirar de la cuenta2 por favor: ";
    cin >> retiro_dinero;
    cout << "Retirando $" << retiro_dinero << " de la cuenta2: ";
    cuenta2.retirar(retiro_dinero);

    cout << "\n\nCuenta1: " << cuenta1.obtener_nombre() << " el saldo es  $"<< cuenta1.obtener_saldo();
    cout << "\nCuenta2: " << cuenta2.obtener_nombre() << " el saldo es  $" << cuenta2.obtener_saldo();

}