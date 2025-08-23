// Ejercicio-4 -Aritmetica de punteros or.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;

void leer(int* puntero, int n)
{
    cout << "Ingresar los numeros del arreglo que usted desee:" << endl;
    for (int i = 0; i < n; i++) 
    {
        cin>> *(puntero + i);
    }
}

void invertir(int* puntero, int n) 
{
    int* inicio = puntero;
    int* fin = puntero + n - 1;
    while (inicio < fin) 
    {
        int temp = *inicio;
        *inicio = *fin;
        *fin = temp;
        inicio++;
        fin--;
    }
}

void mostrar(int* puntero, int n) 
{
    cout << "Arreglo: ";
    for (int i = 0; i < n; i++) 
    {
        cout<< *(puntero + i) << " ";
    }
    cout<< endl;
}

int main() 
{
    int n;
    cout<< "Ingresar el tamano de numeros del arreglo que usted desee: ";
    cin>> n;
    int* arreglo = new int[n];
    leer(arreglo, n);
    invertir(arreglo, n);
    mostrar(arreglo, n);
    delete[] arreglo;
    return 0;
}
