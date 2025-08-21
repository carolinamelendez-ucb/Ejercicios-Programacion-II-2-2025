#include <iostream>
using namespace std;

int main() {
    int n;

    cout << " enter array size ";
    cin >> n;

    if (n <= 0) {
        cout << "El tamaño debe ser mayor que cero." << endl;
        return 1;
    }
    int* arr = new int[n];

    cout << "type " << n << " numbers" << endl;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    int Max = arr[0];
    int Min = arr[0];

    for (int i = 1; i < n; ++i) {
        if (arr[i] > Max) {
            Max = arr[i];
        }
        if (arr[i] < Min) {
            Min = arr[i];
        }
    }

    cout << "Max: " << Max << endl;
    cout << "Min: " << Min << endl;

    // Liberar memoria
    delete[] arr;

    return 0;
}
