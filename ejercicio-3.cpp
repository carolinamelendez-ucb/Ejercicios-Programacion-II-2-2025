// ejercicio-3.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;

int main()
{
    int size;
    int suma=0;
    cout << "Ingresar tamaño del array" << endl;
    cin >> size;
    int* arrDyn = new int[size];
    for (int i = 0; i < size; i++) {
        cin>>arrDyn[i];
    }
    cout << "Array dinamico:  ";
    for (int i = 0; i < size; i++) {
        cout << arrDyn[i] << " ";
    }
    cout << "Suma Array :  ";
    for (int i = 0; i < size; i++) {
        suma=suma+arrDyn[i];
    }
    cout << "suma es: " << suma;
    delete[] arrDyn;

}
