#include <iostream>

using namespace std;

int main()
{
    float a = 10.5;
    cout << "Esto es a: " << a << endl;
    float b, c, d, e, f, g, h;
    a = 15.5;
    b = 12.65;
    c = 97.6547;
    d = a+b;
    e = a-b;
    f = a/b;
    g = a*b;

    bool r1, r2, r3, r4;

    r1 = 1||1;
    r2 = 1||0;
    r3 = 0&1;
    r4 = 0&0;

    cout << "AND" << endl;
    cout << "1 : 1 = " << r1 << endl;
    cout << "1 : 0 = " << r2 << endl;
    cout << "0 : 1 = " << r3 << endl;
    cout << "0 : 0 = " << r4 << endl<< endl<< endl;

    cout << "OR" << endl;
    cout << "1 : 1 = " << r1 << endl;
    cout << "1 : 0 = " << r2 << endl;

    cout << "Esto es otra ves a: " << a <<endl;
    cout << "Esto es b: " << b <<endl;
    cout << "Esto es c: " << c <<endl;
    cout << "Esto es suma: " << b <<endl;
    cout << "Esto es resta: " << e <<endl;
    cout << "Esto es multiplicaion: " << f <<endl;
    cout << "Esto es divicion: " << g <<endl;
    cout << "Hello world!" << endl;
    return 0;
}
