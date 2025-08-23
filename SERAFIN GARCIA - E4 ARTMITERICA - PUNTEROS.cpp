#include <iostream>
using namespace std;

void invertir(int *inicio, int *final)
{
    while (inicio < fin)
    {
        int temp = *inicio;
        *inicio = *final;
        *final = temp;
        inicio++;
        final--;
    }
}

int main()
{
    int tamanovec;
    cout << "Ingrese el tamano del arreglo: "<<endl;
    cin >> tamanovec;

    int *arr = new int[tamanovec];

    cout << "Ingrese los elementos del arreglo:" << endl;
    for (int i = 0; i < tamanovec; i++)
    {
        cin>> *(arr + i);
    }

    invertir(arr, arr + tamanovec - 1);

    cout << "arreglo invertido:" << endl;
    for (int i = 0; i < tamanovec; i++)
    {
        cout << *(arr + i) << " ";
    }
    cout << endl;
    delete[] arr;

    return 0;
}
