#include <iostream>

using namespace std;

int main()
{
    long var = 10;
    long x = 0;

    while (x<=10)
    {
        var -= x;
        ++x;
    cout << var << endl;
    }
}