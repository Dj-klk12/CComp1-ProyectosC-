/*
4- Un número palindrómico se lee igual en ambos sentidos. El palíndromo más grande hecho del 
producto de dos 2 -los números de dígitos son 9009 = 91 X 99.
encuentra el palindromo mas grande hecho del producto de los 3 numeros de digitos.
*/

#include <iostream>
using namespace std;

bool esPalindromo(int numero) 
{
    int original = numero;
    int reverso = 0;
    
    while (numero > 0) 
    {
        int digito = numero % 10;
        reverso = reverso * 10 + digito;
        numero /= 10;
    }
    
    return original == reverso;
}

int encuentraPalindromoMasGrande() 
{
    int palindromoMasGrande = 0;
    
    for (int i = 999; i >= 100; i--) 
    {
        for (int j = 999; j >= 100; j--) 
        {
            int producto = i * j;
            if (producto > palindromoMasGrande && esPalindromo(producto)) 
            {
                palindromoMasGrande = producto;
            }
        }
    }
    
    return palindromoMasGrande;
}

int main() 
{
    int resultado = encuentraPalindromoMasGrande();
    cout << "El palíndromo más grande hecho del producto de tres números de tres dígitos es: " << resultado << endl;
    
    return 0;
}
