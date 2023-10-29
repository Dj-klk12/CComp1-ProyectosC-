/*
9- Una terna pitagórica es un grupo de 3 números naturales (a< b< c) para los cuales a² + b² = c²
Por ejemplo: 3² + 4² = 9 + 16 = 25 = 5²
Existe solamente una terna para que a + b + c = 1000. Encuentra el producto de a*b*c
*/


#include <iostream>

using namespace std;

int main() 
{
    for (int a = 1; a < 1000; a++) 
    {
        for (int b = a + 1; b < 1000; b++) 
        {
            int c = 1000 - a - b;
            if (a * a + b * b == c * c) 
            {
                cout << "Terna Pitagórica encontrada: a = " << a << ", b = " << b << ", c = " << c << endl;
                cout << "El producto abc es: " << a * b * c << endl;
                return 0;
        }
    }

    cout << "No se encontró ninguna terna Pitagórica que cumpla con a + b + c = 1000." << endl;
    return 0;
}
