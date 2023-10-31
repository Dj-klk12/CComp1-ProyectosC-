#ifndef ARREGLO_ENTEROS
#define ARREGLO_ENTEROS

#include <iostream>

class ArregloDinamicoEnteros {
public:
    ArregloDinamicoEnteros() {
        datos = new int[0];
        this->tamaño = 0;
    }
    ArregloDinamicoEnteros(int tamaño, int arr[]) {
        this->tamaño = tamaño;
        datos = new int[tamaño];
        for (int i = 0; i < tamaño; i++) {
            datos[i] = arr[i];
        }
    }
    ArregloDinamicoEnteros(const ArregloDinamicoEnteros &o) {
        this->tamaño = o.tamaño;
        datos = new int[o.tamaño];
        for (int i = 0; i < tamaño; i++) {
            datos[i] = o.datos[i];
        }
    }
    ~ArregloDinamicoEnteros() {
        delete[] datos;
    }

    void insertar(int pos, int val) {
        if (pos < 0 || pos > tamaño) {
            std::cerr << "Posición de inserción no válida" << std::endl;
            return;
        }

        int *tmp = new int[tamaño + 1];
        for (int i = 0; i < pos; i++) {
            tmp[i] = datos[i];
        }
        tmp[pos] = val;
        for (int i = pos; i < tamaño; i++) {
            tmp[i + 1] = datos[i];
        }
        delete[] datos;
        tamaño++;
        datos = tmp;
    }

    void eliminar(int pos) {
        if (pos < 0 || pos >= tamaño) {
            std::cerr << "Posición de eliminación no válida" << std::endl;
            return;
        }

        int *tmp = new int[tamaño - 1];
        for (int i = 0; i < pos; i++) {
            tmp[i] = datos[i];
        }
        for (int i = pos + 1; i < tamaño; i++) {
            tmp[i - 1] = datos[i];
        }
        delete[] datos;
        tamaño--;
        datos = tmp;
    }

    int obtenerTamaño() const {
        return tamaño;
    }
    void imprimir() const {
        std::cout << "[ ";
        for (int i = 0; i < tamaño; i++) {
            std::cout << datos[i] << " ";
        }
        std::cout << "]" << std::endl;
    }

private:
    int *datos;
    int tamaño;
};

#endif
