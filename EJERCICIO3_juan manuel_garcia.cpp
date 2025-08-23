// Clase 1 memoria dinamica.cpp : This file contains the 'main' function. Program execution begins and ends there.
using namespace std;
#include <iostream>

int main()
{
    int n = 3;
    int* arreglo = new int[n];
    cout << "Ingrese " << n << " numeros enteros:" << endl;
    for (int i = 0; i < n; i++) 
    {
        cout << "Elemento " << i << ": ";
        cin >> arreglo[i];
        cout << endl;
    }
    int suma = 0;
    for (int i = 0; i < n; i++) 
    {
        suma = suma+arreglo[i];
    }
    cout << "la suma es: " << suma;
}
