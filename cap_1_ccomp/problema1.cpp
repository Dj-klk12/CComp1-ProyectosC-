/*Calcula el area de un triangulo conociendo sus tres lados*/

#include <iostream>

#include <cmath>

using namespace std;

int main()
{
    int a;
    int b;
    int c;

    cout << "ingrese un lado(a) del triangulo: " ;
    cin >> a ;

    cout << "ingrese un lado(b) del triangulo: " ;
    cin >> b ;

    cout << "ingrese un lado(c) del triangulo: " ;
    cin >> c ;

    float p = (a+b+c)/2;

    float area = sqrt(p*(p-a)*(p-b)*(p-c));

    cout << "El area es: " << area << endl;

    return 0;

}