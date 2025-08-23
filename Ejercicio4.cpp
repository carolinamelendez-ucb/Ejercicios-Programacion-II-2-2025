#include <iostream>
using namespace std;

void leerArreglo(int* arr, int tamano) 
{
    for (int i = 0; i < tamano; ++i) 
    {
        cout << "Ingrese el valor ";
        cin >> *(arr + i);
    }
}

void mostrarArreglo(int* arr, int tamano) 
{
    for (int i = 0; i < tamano; ++i) 
    {
        cout << *(arr + i) << " ";
    }
    cout << endl;
}

void invertirArreglo(int* arr, int tamano) 
{
    int* inicio = arr;
    int* fin = arr + tamano - 1;

    while (inicio < fin)
    {
        
        int temp = *inicio;
        *inicio = *fin;
        *fin = temp;
        inicio++;
        fin--;
    }
}

int main()
{
    int tamano;
    cout << "Ingrese el tamano del arreglo: ";
    cin >> tamano;
    int* arreglo = new int[tamano]; 
    leerArreglo(arreglo, tamano);
    cout << "Arreglo original: ";
    mostrarArreglo(arreglo, tamano);
    invertirArreglo(arreglo, tamano);
    cout << "Arreglo invertido: "<<endl;
    mostrarArreglo(arreglo, tamano);
    delete[] arreglo; 

    return 0;
}
