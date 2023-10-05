#include <iostream>

using namespace std;

int main()
{
    int opc;
    do{
        cout << "Elige una opcion del menu: " << endl;
        cout << "1 - Opci\xA2n A: " << endl;
        cout << "2 - Opcion B: " << endl;
        cout << "3 - Opcion C " << endl;
        cout << "4 - Salir " << endl;
        cin >> opc;
        switch(opc) {
            case 1:
                int opc2;
                cout << "Elige una opcion del menu: " << endl;
                cout << "1 - Opci\xA2n A: " << endl;
                cout << "2 - Opcion B: " << endl;
                cout << "3 - Opcion C " << endl;
                cin >> opc2;
                switch(opc2) {
                    case 1:
                        cout << "Elegiste la opcion A" << endl;
                        break;
                    case 2:
                        cout << "Elegiste la opcion B" << endl;
                        break;
                    case 3:
                        cout << "Elegiste la opcin\xA2n C" << endl;
                        break;
                    default:
                        cout << "Opcion incorrecta" << endl;
                }
                break;
            case 2:
                cout << "Elegiste la opcion B" << endl;
                system("cls");
                break;
            case 3:
                cout << "Elegiste la opcin\xA2n C" << endl;
                system("cls");
                break;
            case 4:
                cout << "Adios..." << endl;
                system("cls");
                break;
            default:
                cout << "Opcion incorrecta" << endl;
        }
    }while(opc!=4);
}
