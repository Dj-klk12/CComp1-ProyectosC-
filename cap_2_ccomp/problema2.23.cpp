/*
EJERCICIO 2.23
Escriba un programa que lea cinco números enteros y determine e imprima 
los números enteros mayor y menor del grupo. Utiliza sólo las 
técnicas de programación aprendidas en este capítulo.
*/

#include <iostream>

using namespace std;

int main()
{
    int a;
    int b;
    int c;
    int d;
    int e;

    cout << "ingrese los 5 numeros separados por --> " " <-- " ;
    cin >> a >> b >> c >> d >> e ;

    if (a > b && a > c && a > d && a > e )
        cout << "es mayor --> " << a << endl;
    else if (b > a &&  b > c && b > d && b > e)
        cout  << "es mayor --> " << b << endl;
    else if (c > a &&  c > b && c > d && c > e)
        cout  << "es mayor --> " << c << endl;
    else if (d > a &&  d > c && d > b && d > e)
        cout  << "es mayor --> " << d << endl;
    else if (e > a &&  e > c && e > d && e > b)
        cout  << "es mayor --> " << e << endl;

    if (a < b && a < c && a < d && a < e )
        cout << "es menor--> " << a << endl;
    else if (b < a && b < c && b < d && b < e )
        cout << "es menor--> " << b << endl;
    else if (c < b && c < a && c < d && c < e )
        cout << "es menor--> " << c << endl;
    else if (d < b && d < c && d < a && d < e )
        cout << "es menor--> " << d << endl;
    else if (e < b && e < c && e < d && e < a )
        cout << "es menor--> " << e << endl; 
    return 0;
}