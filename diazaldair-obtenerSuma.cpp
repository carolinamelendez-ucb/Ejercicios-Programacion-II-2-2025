// tarea.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;

int* crearArreglo(int n) {
    return new int[n];
}

void leerArreglo(int* arr, int n) {
    for (int i = 0; i < n; i++) {
        cout << "numero " << i + 1 << ": ";
        cin >> arr[i];
    }
}

int sumarArreglo(int* arr, int n) {
    int suma = 0;
    for (int i = 0; i < n; i++) {
        suma += arr[i];
    }
    return suma;
}

void liberarArreglo(int* arr) {
    delete[] arr;
}

int main() {
    int n;
    cout << "ingresar numero";
    cin >> n;

    int* arr = crearArreglo(n);
    leerArreglo(arr, n);
    int suma = sumarArreglo(arr, n);

    cout << "la suma es " << suma << endl;

    liberarArreglo(arr);

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
