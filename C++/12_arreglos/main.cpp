#include <iostream>

using namespace std;

int main()
{
    int arreglo_enteros[5];
    string arreglo_string[5];

    /*for (int i = 0; i < 5; i++){
        cout << "Ingresa el numero " << i+1 << ":" << endl;
        cin >> arreglo_enteros[i];
        system("cls");
    }*/

    cout << "Ingresa el numero " << 1 << ":" << endl;
    cin >> arreglo_enteros[0];
    system("cls");
    cout << "Ingresa el numero " << 2 << ":" << endl;
    cin >> arreglo_enteros[1];
    system("cls");
    cout << "Ingresa el numero " << 3 << ":" << endl;
    cin >> arreglo_enteros[2];
    system("cls");
    cout << "Ingresa el numero " << 4 << ":" << endl;
    cin >> arreglo_enteros[3];
    system("cls");
    cout << "Ingresa el numero " << 5 << ":" << endl;
    cin >> arreglo_enteros[4];
    system("cls");

    for (int j = 0; j < 5; j++){
        cout << "Ingresa la palabra " << j+1 << ":" << endl;
        cin >> arreglo_string[j];
        system("cls");
    }

    for (int k = 0; k < 5; k++){
        cout << "El numero en la posicion " << k+1 << " es: " << arreglo_enteros[k] << endl;
    }

    for (int l = 0; l < 5; l++){
        cout << "La palabra en la posicion " << l+1 << " es: " << arreglo_string[l] << endl;
    }
    //cout << "Hello world!" << endl;
    return 0;
}
