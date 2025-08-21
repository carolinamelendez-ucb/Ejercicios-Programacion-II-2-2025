#include <iostream>
using namespace std;
/*
void recorrerVector(int vec[], int n, int i = 0) {
    // Caso base: si llegamos al final, detenemos la recursión
    if (i == n) return;

    // Procesar el elemento actual
    cout << "Elemento " << i << ": " << vec[i] << endl;

    // Llamada recursiva al siguiente elemento
    recorrerVector(vec, n, i + 1);
}

int main() {
    int vec[] = {10, 20, 30, 40, 50};
    int n = sizeof(vec) / sizeof(vec[0]);

    recorrerVector(vec, n);

    return 0;
}
    */

    #include <iostream>
using namespace std;

void recorrerVector(int vec[], int n, int i = 0) {
    if (i == n) return; // Caso base
    cout << "Elemento " << i << ": " << vec[i] << endl;
    recorrerVector(vec, n, i + 1); // Recursión
}

int main() {
    int n;
    cout << "Ingrese el tamaño del vector: ";
    cin >> n;

    int vec[100]; // tamaño máximo (ejemplo)
    cout << "Ingrese los elementos del vector:\n";
    for (int i = 0; i < n; i++) {
        cin >> vec[i];
    }

    cout << "\nRecorrido recursivo:\n";
    recorrerVector(vec, n);

    return 0;
}

