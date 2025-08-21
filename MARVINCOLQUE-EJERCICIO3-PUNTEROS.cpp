#include <iostream>

using namespace std;

int main()
{
	int TAM;

	cout << "Intoduce el tamanio del array: " << endl;
	cin >> TAM;

    int* arr=new int[TAM];
	cout << "Introduce los valores del array: " << endl;
	for (int i = 0; i < TAM; i++)
	{
		cin >> arr[i];
	}

	int maxAct = arr[0];

	for (int i = 0; i < TAM; i++)
	{
		if (arr[i] > maxAct)
		{
			maxAct = arr[i];
		}
	}

	cout << "El valor maximo del array es: " << maxAct;

	delete[] arr;
}
