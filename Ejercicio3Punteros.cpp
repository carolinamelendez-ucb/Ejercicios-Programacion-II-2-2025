#include <iostream>
using namespace std;

    

int main()
{
    //Ejercicio obtener la suma de un arreglo dinamico
    int tamanio;
    cout << "Ingrese el tamaño del vector: " << endl;
    cin >> tamanio;
    int sumaTotal = 0;
    int* arrDyn = new int[tamanio];
    for (int i = 0; i < tamanio; i++)
    {
        arrDyn[i] = 1 + (i * 2);
        sumaTotal += arrDyn[i]; // Ejercicio 3 obtener la suma
    }
    cout << "Array dinamico: " << endl;
    for (int i = 0; i < tamanio; i++)
    {
        cout << arrDyn[i] << " | ";
    }

    cout << endl;
    cout << "--------------------------------------------------" << endl;
    cout << "Ejercico 3: OBTENER LA SUMA" << endl;
    cout << "Suma total: " << sumaTotal << endl;

    delete[] arrDyn;

    
}
