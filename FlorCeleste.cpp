#include <iostream>

using namespace std;

int main() {
    int* arreglo = nullptr; 
    int tamano;

    cout << "Ingrese el tamanio del arreglo: ";
    cin >> tamano;

    if (tamano <= 0) {
        cout << "El tamanio debe ser mayor que cero." << endl;
        return 1;
    }

    arreglo = new int[tamano];

    cout << "Ingrese " << tamano << " numeros enteros:" << endl;
    for (int i = 0; i < tamano; ++i) {
        cout << "Elemento " << i + 1 << ": ";
        cin >> *(arreglo + i);  
    }


    int suma = 0;
    for (int i = 0; i < tamano; ++i) {
        suma += *(arreglo + i);
    }

    cout << "La suma de los elementos es: " << suma << endl;

    delete[] arreglo;

    return 0;
}
