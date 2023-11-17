/*#include <iostream>

using namespace std;

class Fraction
{
        int gcd(int a , int b) { return b == 0 ? a : gcd(b, a % b); }
        int n, d ;

    public:

        Fraction(int n, int d = 1) : n(n/gcd(n, d)), d(d/gcd(n,d)) {}
        int num() const { return n; }
        int den() const { return d; }
        Fraction& operator*=(const Fraction& rhs)
        {
            int new_n = n * rhs.n/gcd(n*rhs.n, d * rhs.d);
            d = d * rhs.d/gcd(n * rhs.n, d * rhs.d);
            n = new_n;
            return *this; 
        }

};


int main()
{
    Fraction f1(3,8), f2(1,2), f3(10,2);
    cout << (f1==f2) << '\n';
    cout << (f1!=f2) << '\n';
    cout << f1 << "*" << f2 << "=" << f1*f2 << '\n'
         << f2 << "*" << f3 << "=" << f2*f3 << '\n'
         <<  2 << "*" << f1 << "=" << 2*f1 << '\n';
}

*/

#include <iostream>
using namespace std;

class Fraction {
    int gcd(int a, int b) { return b == 0 ? a : gcd(b, a % b); }
    int n, d;

public:
    Fraction(int n, int d = 1) : n(n / gcd(n, d)), d(d / gcd(n, d)) {}
    int num() const { return n; }
    int den() const { return d; }

    Fraction& operator*=(const Fraction& rhs) {
        int new_n = n * rhs.n / gcd(n * rhs.n, d * rhs.d);
        d = d * rhs.d / gcd(n * rhs.n, d * rhs.d);
        n = new_n;
        return *this;
    }

    // Sobrecarga del operador de salida <<
    friend ostream& operator<<(ostream& os, const Fraction& f) {
        os << f.num() << '/' << f.den();
        return os;
    }

    // Sobrecarga del operador ==
    bool operator==(const Fraction& rhs) const {
        return (n == rhs.n && d == rhs.d);
    }

    // Sobrecarga del operador !=
    bool operator!=(const Fraction& rhs) const {
        return !(*this == rhs);
    }

    // Sobrecarga del operador *
    friend Fraction operator*(const Fraction& lhs, const Fraction& rhs) {
        Fraction result = lhs;
        result *= rhs;
        return result;
    }

    // Sobrecarga del operador * para multiplicación por un entero
    friend Fraction operator*(const Fraction& f, int scalar) {
        return Fraction(f.num() * scalar, f.den());
    }

    friend Fraction operator*(int scalar, const Fraction& f) {
        return f * scalar;
    }
};

int main() {
    Fraction f1(3, 8), f2(1, 2), f3(10, 2);
    cout << (f1 == f2) << '\n';
    cout << (f1 != f2) << '\n';
    cout << f1 << " * " << f2 << " = " << f1 * f2 << '\n'
         << f2 << " * " << f3 << " = " << f2 * f3 << '\n'
         << 2 << " * " << f1 << " = " << 2 * f1 << '\n';
    return 0;
}
