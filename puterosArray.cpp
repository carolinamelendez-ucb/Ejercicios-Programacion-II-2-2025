// Progra2Jabneel-4.cpp.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std; 

//SUMA
int main()
{
    int size, Total=0;
    std::cout << "Ingrese los numeros que desea sumar";
    std::cin >> size;
    int* arrDyn = new int[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arrDyn[i];
    }
    for (int i = 0; i < size; i++)
    {
        Total += arrDyn[i]; 
    }
    std::cout << "La suma es: "<< Total;
    delete[] arrDyn; 
}
