    int n;
    cout << "ingrese la cantidad de numeros: ";
        cin >> n;
    int* arrDyn = new int[n];
    cout << "ingrese " << n << "numeros: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arrDyn[i];
    }
    int suma=0;
    for (int i = 0; i < n; i++)
    {
        suma += arrDyn[i];
    }
    cout << "la suma total es: " << suma << endl;
    delete[] arrDyn;
    return 0;
