#include <iostream>  
using namespace std;

int valor_maximo(int* arr, int tam) {
    int maximo = arr[0];  
    for (int i = 1; i < tam; i++) {
        if (maximo < arr[i]) {
            maximo = arr[i];
        }
    }
    return maximo; 
}

int main() {
    int tam = 10;
    int* arr = new int[tam];
    arr[0] = 8;
    arr[1] = 2;
    arr[2] = 5;
    arr[3] = 6;
    arr[4] = 1;
    arr[5] = 12;
    arr[6] = 4;
    arr[7] = 5;
    arr[8] = 3;
    arr[9] = 7; 

    cout << "El valor máximo es: " << valor_maximo(arr, tam) << endl;

    delete[] arr;   
    return 0;
}