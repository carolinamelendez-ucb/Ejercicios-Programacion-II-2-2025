#include <iostream>
using namespace std;

int main() {
	int size;
	cout << "Ingrese el tamano del array" << endl;
	cin >> size;
	int *arrDyn = new int[size];
	for (int i = 0; i < size; i++) {
		cout << "Coloque el valor " << i + 1 << endl;
		cin >> arrDyn[i];
	}
	int suma = 0;
	for (int j = 0; j < size; j++ ) {
		suma = suma + arrDyn[j];
	}
	cout << "La Suma del array es: " << suma << endl;
	delete[] arrDyn;
}
