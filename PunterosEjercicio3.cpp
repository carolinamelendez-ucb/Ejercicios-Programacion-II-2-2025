
#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int suma = 0;
    int size;
    cout << "Ingresa el tamano del array" << endl;
    cin >> size;
    int* arr0yn = new int[size];
    for (int i = 0; i < size; i++)
    {
        cout << "ingresa un numero para la suma" << endl;
        cin >> arr0yn[i];
        suma = suma + arr0yn[i];
    };
    delete[] arr0yn;
    cout << "el resultado de la suma es " << suma << endl;
}

