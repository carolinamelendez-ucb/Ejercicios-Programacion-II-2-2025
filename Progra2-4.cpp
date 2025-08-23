#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Ingrese el tamanio del vector: ";
    cin >> n;
    int* vec = new int[n];
    cout << "Ingrese los elementos del vector:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> *(vec + i);   
   } 
    int* inicio = vec;       
    int* fin = vec + n - 1;   
    while (inicio < fin) {
        int temp = *inicio;
        *inicio = *fin;
        *fin = temp;
        inicio++;
        fin--;
    }
    cout << "El vector invertido es: ";
    for (int i = 0; i < n; i++) {
        cout << *(vec + i) << " ";
   } 
    delete[] vec;
    return 0;
}
