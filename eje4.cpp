#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Tamano del arreglo: ";
    if (!(cin >> n) || n <= 0) {
        cout << "Tamano invalido.\n";
        return 0;
    }

    int* a = new int[n];

    // Leer elementos usando punteros
    cout << "Ingresa " << n << " enteros:\n";
    for (int* p = a; p != a + n; ++p) {
        cin >> *p;
    }

    // Invertir in-place con dos punteros
    int* izq = a;          // apunta al inicio
    int* der = a + n - 1;  // apunta al final
    while (izq < der) {
        int tmp = *izq;
        *izq = *der;
        *der = tmp;
        ++izq;
        --der;
    }

    // Imprimir usando punteros
    cout << "Arreglo invertido: ";
    for (int* p = a; p != a + n; ++p) {
        cout << *p << (p + 1 == a + n ? '\n' : ' ');
    }

    delete[] a; // liberar memoria
    return 0;
}
