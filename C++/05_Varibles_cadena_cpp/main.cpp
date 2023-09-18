#include <iostream>

using namespace std;

int main()
{
    char nombre[5];
    string nombre_s;

    nombre[0] = 'J';
    nombre[1] = 'u';
    nombre[2] = 'a';
    nombre[3] = 'n';
    nombre[4] = '\0';

    nombre_s = "Pedro";

    cout << nombre << endl;
    cout << nombre[0] << endl;


    cout << nombre_s << endl;
    cout << nombre_s[0];
    return 0;
}
