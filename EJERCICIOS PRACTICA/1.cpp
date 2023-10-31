#include <iostream>
#include <iomanip> 

using namespace std;

int main()
{
    float a;
    cout << "Ingrese a --> "; 
    cin >> a;

    cout << fixed << setprecision(2);
    
    cout << "El NRO es --> " << a << endl;

    return 0;
}
