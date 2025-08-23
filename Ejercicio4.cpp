#include <iostream>
#include <conio.h>
using namespace std;
int main() 
{
    int tam;
    cout << "Ingrese el tamano del arreglo: ";
    cin >> tam;

    int* array = new int[tam];

    for (int i = 0; i < tam; i++)
    {
        cout << "Ingrese un valor para el arreglo:" << endl;
        cin >> *(array + i);
    }

    cout << "Arreglo original:" << endl;;
    for (int i = 0; i < tam; i++)
    {
        cout << *(array + i) << " , ";
    }
    cout << endl;
    int* inicio = array;
    int* fin = array + tam - 1;

    while (inicio < fin) 
    {
        int aux = *inicio;
        *inicio = *fin;
        *fin = aux;

        inicio++;
        fin--;
    }

    cout << "Arreglo invertido: "<<endl;
    for (int i = 0; i < tam; i++) 
    {
        cout << *(array + i) << " , ";
    }
    cout << endl;
    delete[] array;
    return 0;
}
