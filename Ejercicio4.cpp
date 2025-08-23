#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Ingrese el tamaño del arreglo: " << endl;
    cin >> n;

    int* arr = new int[n];
    cout << "Ingrese los elementos del arreglo: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> *(arr + i);
    }

    int* inicio = arr;          
    int* fin = arr + n - 1;     
    while (inicio < fin) {
        int temp = *inicio;
        *inicio = *fin;
        *fin = temp;
        inicio++;
        fin--;
    }

 
    cout << "Arreglo invertido: " << endl;
    for (int i = 0; i < n; i++) {
        cout << *(arr + i) << " ";
    }
    delete[] arr;
    return 0;
}
