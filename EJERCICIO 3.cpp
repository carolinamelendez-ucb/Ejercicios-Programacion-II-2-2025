// EJERCICIO 3.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;

int ObtenerMaximo(int* arr, int n)
{
    int* ptr = arr;    
    int max = *ptr;   

    for (int i = 1; i < n; i++)
    {
        ptr++; 
        if (*ptr > max) {
            max = *ptr;
        }
    }
    return max;
}

int main() 
{
    int n;
    cout << "Ingrese la cantidad de elementos: ";
    cin >> n;

    int arr[100]; 
    cout << "Ingrese los " << n << " elementos:\n";
    for (int i = 0; i < n; i++) 
    {
        cin >> arr[i];
    }

    cout << "El valor máximo es: " << ObtenerMaximo(arr, n) << endl;

    return 0;
}


// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
