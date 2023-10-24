#include <iostream>

using namespace std;

int suma(int a, int b){
    int resultado = a+ b;
    return resultado;
}

void imprimir(){
    cout << "hola mundo c++" << endl;
}

int main()
{
    imprimir();
    cout << suma(5, 10);
    return 0;
}
