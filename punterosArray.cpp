#include <iostream>
using namespace std;
int main()
{
    int size,suma=0;
    cout << "\nINGRESAR TAMAÑO DEL ARRAY:";
    cin >> size;
    int* arrDyn = new int [size];
    for (int i = 0; i < size; i++) {
        cin>> arrDyn[i];
    }
    for (int i = 0; i < size; i++) {
        suma = suma + arrDyn[i];
    }
    cout << "la suma es " << suma;
    delete[] arrDyn;
}

