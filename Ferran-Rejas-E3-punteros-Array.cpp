#include <iostream>
using namespace std;

// Funcion que recibe un puntero a arreglo y su tamaño
int encontrarMinimo(int* arreglo, int tam) {
    int minimo = *arreglo; // El primer elemento
    for (int i = 1; i < tam; i++) {
        if (*(arreglo + i) < minimo) {
            minimo = *(arreglo + i);
        }
    }
    return minimo;
}

int main() {
    int n;

    cout << "Ingrese el tamanio del arreglo: ";
    cin >> n;

    int* arreglo = new int[n]; // Reservamos memoria dinamica

    // Llenar el arreglo
    cout << "Ingrese " << n << " numeros: " << endl;
    for (int i = 0; i < n; i++) {
        cout << "Elemento [" << i << "]: ";
        cin >> *(arreglo + i);
    }

    // Llamamos a la funcion para obtener el minimo
    int minimo = encontrarMinimo(arreglo, n);

    cout << "El valor minimo en el arreglo es: " << minimo << endl;

    delete[] arreglo; // Liberamos la memoria
    return 0;
}
