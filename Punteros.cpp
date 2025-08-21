#include <iostream>
using namespace std;
int main()
{
	cout << "escoja dos numeros que se sumaran " << endl;
	int* x = new int;
	cin>>*x;
	int* y = new int;
	cin>>*y;
	cout << "el resultado de los punteros es: " << *x + *y << endl;
	int* array= new int[5];
	cout << "ahora escoja un tamaño para el array: " << endl;
	int size;
	cin >> size;
	cout << "escoja ahora "<< size <<" numeros pa que se sumen en un array : " << endl;
	int suma = 0;

	for (int i = 0; i < size; i++) {
		cin >> array[i];
		suma = suma + array[i];

	}
	cout << "el resultdo de la suma del vector es " << suma << endl;
	delete[] array;
}


