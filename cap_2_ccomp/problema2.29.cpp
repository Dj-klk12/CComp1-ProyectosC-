/*
EJERCICIO 2.29
Utilizando las técnicas de este capítulo, escriba un programa que calcule el área superficial
y el volumen de cubos con longitudes de cara de 0 a 4 cm.Utiliza tabuladores para imprimir la 
siguiente tabla de valores con un formato ordenadotabla de valores:

Face length     Surface area          Volume
of cube (cm)    of cube (cm^2)        of cube(cm^3)
0               0                     0
1               6                     1
2               24                    8
3               54                    27
4               96                    64
*/


#include <iostream>

using namespace std;

int main()
{
    int a{0};
    int b{1};
    int c{2};
    int d{3};
    int e{4};

    cout <<"lado(cm)                  area(cm2)                  volumen(cm3)" << endl;
    cout << a <<"                         " << (a*a)*6 <<"                          " << a*a*a << endl;
    cout << b <<"                         " << (b*b)*6 <<"                          " << b*b*b << endl;
    cout << c <<"                         " << (c*c)*6 <<"                         " << c*c*c << endl;
    cout << d <<"                         " << (d*d)*6 <<"                         " << d*d*d << endl;
    cout << e <<"                         " << (e*e)*6 <<"                         " << e*e*e << endl;



    return 0;
}