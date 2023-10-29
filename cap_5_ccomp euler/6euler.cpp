/*

6- La suma de los cuadrados de los diez primeros números naturales es:

El cuadrado de la suma de los primeros diez números naturales es,

Por tanto, la diferencia entre la suma de los cuadrados de los primeros diez números naturales y el cuadrado de la suma es.

Encuentra la diferencia entre la suma de los cuadrados de los primeros cien números naturales y el cuadrado de la suma.
*/

#include<iostream>

using namespace std;

int main()
{
    unsigned long long cuadrados_100=0;
    unsigned long long suma_cuadr_100=0;
    for(int i=1; i<=100;++i)
    {
        cuadrados_100+=(i*i);
        suma_cuadr_100+=i;
    }
    cout<<(suma_cuadr_100*suma_cuadr_100) - cuadrados_100 <<endl;
    
    return 0;
}
