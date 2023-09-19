#include <iostream>

using namespace std;

int main()
{
    bool and1, and2, and3, and4, or1, or2, or3, or4;

    and1 = 1&1;
    and2 = 1&0;
    and3 = 0&1;
    and4 = 0&0;

    or1 = 1||1;
    or2 = 1||0;
    or3 = 0||1;
    or4 = 0||0;

    cout << "AND" << endl;
    cout << "1 : 1 = " << and1 << endl;
    cout << "1 : 0 = " << and2 << endl;
    cout << "0 : 1 = " << and3 << endl;
    cout << "0 : 0 = " << and4 << endl<< endl<< endl;

    cout << "OR" << endl;
    cout << "1 : 1 = " << or1 << endl;
    cout << "1 : 0 = " << or2 << endl;
    cout << "0 : 1 = " << or3 << endl;
    cout << "0 : 0 = " << or4 << endl<< endl<< endl;

    cout << "XAND" << endl;
    cout << "1 : 1 = " << !and1 << endl;
    cout << "1 : 0 = " << !and2 << endl;
    cout << "0 : 1 = " << !and3 << endl;
    cout << "0 : 0 = " << !and4 << endl<< endl<< endl;

    cout << "OR" << endl;
    cout << "1 : 1 = " << !or1 << endl;
    cout << "1 : 0 = " << !or2 << endl;
    cout << "0 : 1 = " << !or3 << endl;
    cout << "0 : 0 = " << !or4 << endl;

    return 0;
}
