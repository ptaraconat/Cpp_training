#include "Duree.hpp"
#include <string>
#include <iostream>

using namespace std;

int main()
{
    Duree chrono1(0,0,0);
    Duree chrono2(2,30,40);
    Duree chrono3(2,30,40);
    bool result(chrono1 == chrono2);
    bool result2(chrono2 == chrono3);
    cout << result << endl;
    cout << (chrono2 == chrono3) << endl;
    cout << (chrono2 < chrono3) << endl;
    cout << (chrono1 < chrono2) << endl;

    chrono1 += chrono2;

    Duree chrono4 = chrono1 + chrono3;

    cout << chrono4 << endl;

    return 0;
}