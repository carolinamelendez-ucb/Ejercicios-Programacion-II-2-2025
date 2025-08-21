#include <iostream>
using namespace std;

int GetSize() {
    int n;
    cout << "Ingrese el tamano del arreglo: ";
    cin >> n;
    return n;
}

void ReadArray(int* arreglo, int n) {
    cout << "Ingrese los " << n << " elementos del arreglo:" << endl;
    for (int i = 0; i < n; ++i) {
        cout << "Elemento " << i + 1 << ": ";
        cin >> arreglo[i];
    }
}

int CalculateSum(int* arreglo, int n) {
    int suma = 0;
    for (int i = 0; i < n; ++i) {
        suma += arreglo[i];
    }
    return suma;
}

int main() {
    int n = GetSize();
    int* arregloDinamico = new int[n];
    ReadArray(arregloDinamico, n);
    int sumaTotal = CalculateSum(arregloDinamico, n);
    cout << "La suma total de los elementos es: " << sumaTotal << endl;
    delete[] arregloDinamico;
    arregloDinamico = nullptr;
    return 0;
}
