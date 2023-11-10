#include <iostream>

using namespace std;

int main()
{
    int c;

    int product;

    while ( c <= 5 ){
        product *= c;
        ++c;
    }

    cout << c << endl;

}

//el error aqui era los () en c++ se usa {}para las sentencias de los bucles