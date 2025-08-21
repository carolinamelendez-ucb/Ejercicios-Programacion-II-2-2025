#include <iostream>
using namespace std;
const int filas = 3, columnas = 3;
// Función 1: Encontrar el maximo
int encontrarMayorMatriz(int matriz[filas][columnas],int fila,int columna,int mayorActual)
{
    // Caso base
    if (fila == filas)
    {
        return mayorActual;
    }
    // Condición lógica
    if (matriz[fila][columna]>mayorActual)
    {
        mayorActual = matriz[fila][columna];
    }
    // Recorrido
    if (columna + 1 < columnas)
    {
        return encontrarMayorMatriz(matriz, fila, columna + 1,mayorActual);
    }
    else
    {
        return encontrarMayorMatriz(matriz, fila + 1,0,mayorActual);
    }
}

// Sumar todos los elementos
int sumarMatriz(int matriz[filas][columnas],int fila,int columna,int sumaActual)
{
    // Caso base
    if (fila == filas)
    {
        return sumaActual;
    }

    // Condición lógica
    sumaActual += matriz[fila][columna];

    // Recorrido
    if (columna + 1<columnas)
    {
        return sumarMatriz(matriz,fila,columna + 1,sumaActual);
    }
    else
    {
        return sumarMatriz(matriz,fila +1,0,sumaActual);
    }
}

int main()
{
    int matriz[filas][columnas] =
    {
        {12, 9, 33},
        {23, 22, 9},
        {2, 34, 11}
    };
    int mayor = encontrarMayorMatriz(matriz,0,0, matriz[0][0]);
    int suma = sumarMatriz(matriz, 0,0,0);
    cout << "El maximo elemento de la matriz es: " << mayor << endl;
    cout << "La suma de todos los elementos de esta matriz es: " << suma << endl;
    return 0;
}
