#include <iostream>

using namespace std;

int main()
{
    char nombre[5];
    string nombre_, nombre_s;

    nombre[0] = 'J';
    nombre[1] = 'u';
    nombre[2] = 'a';
    nombre[3] = 'n';
    nombre[4] = '\0';

    nombre_s = "Pedro";

    cout << nombre<< endl;
    cout << nombre[10] << endl;


    cout << nombre_s << endl;
    cout << nombre_s[0] << endl;


    nombre_[0] = 'P';
    nombre_[1] = 'a';
    nombre_[2] = 'c';
    nombre_[3] = 'o';
    nombre_[4] = '\0';

    cout << "Nombre_:" << nombre_ << endl;

    return 0;
}
