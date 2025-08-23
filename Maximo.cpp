#include <iostream>
using namespace std;

int pedirCantidad() 
{
    int n;
    cout << "Ingrese la cantidad de elementos: ";
    cin >> n;
    return n;
}

void leerArreglo(int* arr, int n) 
{
    for (int i = 0; i < n; i++) 
   {
        cout<<"elemento "<<i+1;
        cin >> arr[i];
    }
}

void mostrarArreglo(int* arr, int n)
{
    cout << "elementos del arreglo: ";
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<< " ";
    }
    cout << endl;
}

int encontrarMaximo(int* arr, int n) 
{
    int maximo = arr[0];
    for (int i = 1; i < n; i++) 
    {
        if (arr[i] > maximo)
        {
            maximo = arr[i];
        }   
    }
    return maximo;
}



void mostrarResultados(int maximo)
{
    cout << "maximo: "<<maximo<< endl;
}

int main() {
    int n = pedirCantidad();
    int* arr = new int[n];

    leerArreglo(arr, n);
    mostrarArreglo(arr, n);

    int maximo = encontrarMaximo(arr, n);

    mostrarResultados(maximo);

    delete[] arr;
    return 0;
}
