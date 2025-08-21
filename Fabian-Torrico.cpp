#include <iostream>
using namespace std;

void llenarArray(int* arr, int n)
{
    cout << "Ingrese los elementos del arreglo:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}

int sumarArray(int* arr, int n, int i = 0)
{
    if (i == n) return 0;
    return arr[i] + sumarArray(arr, n, i + 1);
}

int main()
{
    int n;
    cout << "Ingrese el tamaño del arreglo: ";
    cin >> n;
    int* arr = new int[n];
    llenarArray(arr, n);
    int suma = sumarArray(arr, n);
    cout << "La suma de los elementos del arreglo es: " << suma << endl;
    delete[] arr;

    return 0;
}
