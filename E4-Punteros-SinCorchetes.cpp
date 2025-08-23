// E4-Punteros-SinCorchetes.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int getSize() {
    int n;
    cout << "Ingrese el tamano del arreglo: ";
    cin >> n;
    return n;
}

void readArray(int* arrPtr, int size){
    cout << "Ingrese los " << size << " elementos del arreglo:" << endl;
	for (int i = 0; i < size; i++) {
		cout << "Elemento " << i + 1 << ": ";
		cin >> *(arrPtr + i);
	}
}
void printArray(int* arrPtr, int size) {
	cout << "[ ";
	for (int i = 0; i < size; i++) {
		cout << *(arrPtr + i) << " ";
	}
	cout << "]" << endl;
}

void reverseArray(int* arrayPtr, int size) {
    int* start = arrayPtr;
    int* end = arrayPtr + size - 1;

    while (start < end) {
        int temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}


int main()
{
    int size = getSize();
    int* Arr = new int[size];
    readArray(Arr, size);
    cout << "Arreglo original: ";
    printArray(Arr, size);
    reverseArray(Arr, size);
    cout << "El arreglo invertido es: ";
    printArray(Arr, size);

    delete[] Arr;
    Arr = nullptr;

    return 0;
}
