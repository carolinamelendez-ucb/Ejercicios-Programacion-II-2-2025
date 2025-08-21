#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Ingrese el tamaño del arreglo: ";
    cin >> n;

    int* arreglo = new int[n];

    for (int i = 0; i < n; i++) {
        cout << "Ingrese el elemento " << i + 1 << ": ";
        cin >> arreglo[i];
    }

    cout << "\nElementos del arreglo: ";
    for (int i = 0; i < n; i++) {
        cout << arreglo[i] << " ";
    }
    cout << endl;

    int suma = 0;
    for (int i = 0; i < n; i++) {
        suma += arreglo[i];
    }

    cout << "\nLa suma total es: " << suma << endl;

    
    delete[] arreglo;

    return 0;
}
