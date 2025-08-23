#include <iostream>
using namespace std;

int* crearArreglo(int n)
{
    return new int[n];
}

void llenarArreglo(int* arr,int n) 
{
    cout << "Ingresar los " << n << "numeros deseados que quieres ingresar:" << endl;
    for (int i = 0; i < n; i++) 
    {
        cout << "Numero" << i+1 << ": ";
        cin >> arr[i];
    }
}

int encontrarMaximo(int* arr,int n) 
{
    int maximo = arr[0];
    for (int i= 1;i < n;i++)
    {
        if (arr[i]>maximo) 
        {
            maximo = arr[i];
        }
    }
    return maximo;
}

void liberarArreglo(int* arr) 
{
    delete[] arr;
}

int main() 
{
    int n;
    cout <<"Ingresar la cantidad de numeros que quieres: ";
    cin >>n;
    int* arreglo=crearArreglo(n);
    llenarArreglo(arreglo, n);
    int maximo = encontrarMaximo(arreglo, n);
    cout << "\nEl valor maximo de los numeros es: "<< maximo << endl;
    liberarArreglo(arreglo);
    return 0;
}
