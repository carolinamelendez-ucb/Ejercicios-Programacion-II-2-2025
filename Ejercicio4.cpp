#include <iostream>
using namespace std;

int main() {
    int size;
    cout << "Ingrese el tamaño del arreglo: " << endl;
    cin >> size;

    int* arr = new int[n];
    cout << "Ingrese los elementos del arreglo: " << endl;
    for (int i = 0; i < size; i++) {
        cin >> *(arr + i);
    }

    int* inicio = arr;          
    int* fin = arr + size - 1;     
    while (inicio < fin) {
        int temp = *inicio;
        *inicio = *fin;
        *fin = temp;
        inicio++;
        fin--;
    }

    cout << "Arreglo invertido: " << endl;
    for (int i = 0; i < size; i++) {
        cout << *(arr + i) << " ";
    }
    delete[] arr;
    return 0;
}
