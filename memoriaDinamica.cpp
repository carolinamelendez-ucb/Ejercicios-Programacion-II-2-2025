#include <iostream>

using namespace std;
void leerArreglo(int* arr, int n )
{
    cout<< " nums ; " << endl;
    for ( int i = 0; i < n ; i++)
    {
        cin >>arr[i];
    }
}
int sumarArreglo(int* arr, int n)
{
    int suma=0;
    for (int i = 0 ; i < n ;i ++)
    {
        suma +=arr[i];
    }
    return suma ;
}
int main()
{
    int n ;
    cout <<"CANTIDAD DE NUMEROS" << endl;
    cin >> n;

    int *arr = new int[n];

    leerArreglo(arr,n);

    int suma = sumarArreglo(arr,n);
    cout << "Suma " << suma << endl;

delete[] arr;

    return 0;
}