// 23 de agosto.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;
void invertir(int* arreglo, int n) {
	for (int i = 0; i < n / 2; i++) {
		int temp = arreglo[i];
		arreglo[i] = arreglo[n - i - 1];
		arreglo[n - i - 1] = temp;
	}
}
int main()
{
    int n;
    cout << "Ingrese el tamaño del arreglo ";
	cin >> n;
	int* arreglo = new int[n];

	cout << "Ingrese los elementos del arreglo: ";
	for (int i = 0; i < n; i++) {
		cin >> arreglo[i]; 
	}

	cout << "Los elementos del arreglo son: ";
	for (int i = 0; i < n; i++) {
		cout << arreglo[i] << " "; 
	}
	cout << endl;
	invertir(arreglo, n);
	cout << "El arreglo invertido es: ";
	for (int i = 0; i < n; i++) {
		cout << arreglo[i] << " ";
	}
	delete[] arreglo; 
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
