#include <iostream>

#include <vector>

class Polygon{
    protected:
    int ancho, largo;

    public:
        Polygon(int ancho, int largo) : ancho(ancho), largo(largo) {}
        Polygon(){}

        int area(void){
            return 0;
        }

        void printarea(){
            std::cout << this->area() << std::endl;
        }
        void print(){
            std::cout << "ancho: " << ancho << ", largo: " << largo << std::endl;
        }
};

class arraydinamico{
    private:
    Polygon* array;
    int longitud;
    public:
    arraydinamico(){
        this->longitud=0;
        array = new Polygon[0];
    }
    arraydinamico(Polygon temo[], int longitud){
        this->longitud = longitud;
        array = new Polygon[longitud];
        for(int i=0; i < longitud; i++){
            array[i] = temo[i];
        }
    }

    ~arraydinamico(){
        delete[] array;
    }

    void push_back(Polygon valor){
        Polygon* temp = new Polygon[longitud+1];
        for(int i=0; i < longitud; i++){
            temp[i] = array[i];
        }
        temp[longitud] = valor;
        delete[]array;
        array = temp;
        longitud++;
    }

    void insert(int posicion, Polygon valor){
        if(posicion < 0 ||  posicion > longitud){
            return;
        }

        Polygon* temp = new Polygon[longitud +1];
        for(int i=0; i < posicion; i++){
            temp[i] = array[i];
        }
        temp[posicion] = valor;
        for(int i=posicion; i < longitud; i++){
            temp[i +1] = array[i];
        }
        delete[]array;
        array = temp;
        longitud++;
    }

    void remove(int posicion){
        if(posicion < 0 || posicion >= longitud){
            return;
        }

        Polygon* temp = new Polygon[longitud-1];
        for(int i=0; i < posicion; i++){
            temp[i] = array[i];
        }
        for(int i=posicion+1; i < longitud; i++){
            temp[i -1] = array[i];
        }
        delete[]array;
        array = temp;
        longitud--;
    }

    void print() {
        for(int i = 0; i < longitud; i++){
            array[i].print();
        }
    }
};

int main(){
    
    arraydinamico ad;

    
    ad.push_back(Polygon(5, 10));
    ad.push_back(Polygon(15, 20));
    ad.push_back(Polygon(25, 30));

    ad.insert(2,Polygon(1,3));
    ad.remove(2);

    ad.print();

    return 0;
}