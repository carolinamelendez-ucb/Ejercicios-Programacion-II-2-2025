#include <iostream>

using namespace std;

void invertarray(int* arr, int size) {
    int* start = arr;
    int* end = arr + size - 1;

    while (start < end) {
        int count = *start;
        *start = *end;
        *end = count;
        start++;
        end--;
    }
}

int main() {
    int size;

    cout << "Ingrese el tamaño del array ";
    cin >> size;

    int* arr = new int[size];

    for (int i = 0; i < size; i++) {
        cin >> *(arr + i); 
    }

    invertarray(arr, size);
    for (int i = 0; i < size; i++) {
        cout << *(arr + i) << endl;
    }
   
    delete[] arr;

    return 0;
}
