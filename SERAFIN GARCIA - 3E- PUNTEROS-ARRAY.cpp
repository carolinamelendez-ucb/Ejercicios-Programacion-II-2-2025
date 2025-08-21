#include <iostream>
using namespace std;


int promediodelarray(int *arr, int tamañodearray)
{
    int acumulador = 0;
    for (int i = 0; i < tamañodearray; i++)
    {
        acumulador = acumulador + arr[i];
    }
    return acumulador / tamañodearray;
}

int main() 
{
    int tamañodearray;
    cout << "Ingrese el tamaño del arreglo: ";
    cin >> tamañodearray;

    int* arr = new int[tamañodearray];

    cout << "Ingrese los elementos del arreglo:" << endl;
    for (int i = 0; i < tamañodearray; i++) {
        cout << "Elemento " << i + 1 << ": ";
        cin >> arr[i];
    }

    cout << "Elementos ingresados:" << endl;
    for (int i = 0; i < tamañodearray; i++) {
        cout << arr[i]<<" - ";
    }
    cout << endl;
    int x= promediodelarray(arr, tamañodearray);
    cout<<"promedio: " << x;
    delete[] arr;
    
    return 0;
}
