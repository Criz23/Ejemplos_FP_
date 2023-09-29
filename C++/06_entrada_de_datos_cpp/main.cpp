#include <iostream>

using namespace std;

int main()
{
    string nombre = "";
    int entero;
    float flotante;
    bool boleano;


    //cout << "Ingrese su nombre:";
    cin >> nombre;
    //cout << "Ingrese un entero:";
    cin >> entero;
    //cout << "Ingrese un flotante:";
    cin >> flotante;
    //cout << "Ingrese un boleano:";
    cin >> boleano;

    cout << "\nTu nombre es: " << nombre << endl;
    cout << "El entero es: " << entero << endl;
    cout << "El flotante es: " << flotante << endl;
    cout << "Tu boleano es: " << boleano << endl;

    return 0;
}
