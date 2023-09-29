#include <iostream>

using namespace std;

int main()
{
    char opc;
    cout << "Elige una opcion del menu: " << endl;
    cout << "A - Opci\xA2n A: " << endl;
    cout << "B - Opcion B: " << endl;
    cout << "C - Opcion C " << endl;
    opc=getchar();
    switch(opc) {
        case 'A':
            cout << "Elegiste la opcion A" << endl;
            break;
        case 'B':
            cout << "Elegiste la opcion B" << endl;
            break;
        case 'C':
            cout << "Elegiste la opcin\xA2n C" << endl;
            break;
        default:
            cout << "Opcion incorrecta" << endl;
    }
    return 0;
}
