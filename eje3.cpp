#include <iostream>
using namespace std;

int main() {
    int n;

    
    cout << "Introduce el tamanio del arreglo: ";
    cin >> n;

  
    int* arr = new int[n];

   
    cout << "Introduce " << n << " elementos:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Elemento " << i + 1 << ": ";
        cin >> arr[i];
    }

   
    int maximo = arr[0];
    int minimo = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > maximo) {
            maximo = arr[i];
        }
        if (arr[i] < minimo) {
            minimo = arr[i];
        }
    }

    cout << "El maximo es: " << maximo << endl;
    cout << "El minimo es: " << minimo << endl;

    delete[] arr;

    return 0;
}