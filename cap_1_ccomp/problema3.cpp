// Calificación a letra: Pide al usuario que ingrese una calificación numérica (por ejemplo, 90) y 
// luego muestra la calificación correspondiente en letra (por ejemplo, "A" para 90-100, "B" para 80-89, etc.).

#include <iostream>

using namespace std;

int main()
{
    int a;
    
    cout << "Ingrese su calificación(0-100): " ;
    cin >> a ;

    if (a >= 0)
    {

        if (a >= 90 && a<= 100)
        {
            cout << "usted tiene A" << endl;
        }

        else if (a >= 80 && a <= 89)
        {
            cout << "usted tiene B" << endl;
        }

        else if (a >= 70 && a <= 79)
        {
            cout << "usted tiene C" << endl;
        }

        else
        {
            cout << "ustede jalo el curso" << endl;
        }
    }

    else
    {
        cout << "usted no ingreso una nota valida" << endl;
    }
    return 0;
}