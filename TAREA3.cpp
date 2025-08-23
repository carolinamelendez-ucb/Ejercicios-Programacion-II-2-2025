#include <iostream>

using namespace std;

void llenarArray(int* arr, int n)
{
    cout << " ingresar elementos del array" << endl;
    for ( int i = 0 ; i < n ; i++)
    {
        cin >> *(arr+i);
    }

}

void mostrarArray(int* arr, int n)
{
    cout << " Array = " ;

    for ( int i = 0 ; i < n ; i++)
    {
        cout << *(arr+i) << " ";
    }
    cout << endl;
}

void invertirRecursivo(int* inicio, int* fin) {
    if (inicio >= fin) return; // caso base

    int temp = *inicio;
    *inicio = *fin;
    *fin = temp;

    invertirRecursivo(inicio + 1, fin - 1);
}



int main()
{
    int n;

    int* arr = new int[n];

    cout << " Ingrese el tam del arreglo" << endl;
    cin >> n;

    llenarArray(arr,n);

    mostrarArray(arr,n);

    invertirRecursivo(arr,arr + n -1);

    cout << " Array New o nuevo Array XD" << endl;

    mostrarArray(arr,n);


    delete[] arr;




    return 0;

}