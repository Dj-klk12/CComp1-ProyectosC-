#include <iostream>

using namespace std;

template <class T,int N> //indica que la clase va a ser general y va
                        // a recibir un valor de tipo int pero despues ira cambiando
                        // pero siempre sera entero
class mysequence    // creamos nuestra clase mysequence
{
        T memblock [N-1]; // aqui creamos neustro arreglo memmblock de tamaño n-1
                // y el tipo que deseamos q sea
    public:
    //aqui el setter nos permite establecer un valor en una posicion especifica del arreglo memblock       
    void setmember (int x, T value){ 
        memblock[x]=value;
    }
    //aqui el getter devuelve el valor en la posicion especifica del arreglo memblock
    T getmember (int x){
        return memblock[x-1];
    }
};

int main(){
    mysequence <int,5> myints; // creamos dos instancias de nuestra clase
    mysequence <double,5> myfloats;// con el tipo int en myints y double en myfloats ambas con capacidad de 5
    myints.setmember (0,100);// aqui se le asigna la posicion y el valor
    myfloats.setmember (3,3.1416); // "  "
    cout << myints.getmember(1) << '\n'; // aqui obtenemos el valor y lo imprime en este caso
    // imprime 100 por el arreglo de myints que es esta en indice 0 
    cout << myfloats.getmember(4) << '\n';// aqui imprime 3.1416 por el arreglo de indice 3
    return 0;
}