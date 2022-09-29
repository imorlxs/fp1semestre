#include <iostream>

using namespace std;

int main()
{
    int x = 10;
    int y = 100;
    int z = 30;
    int aux = x;
    x = z;
    z = y;
    y = aux;


    cout << x << endl << y << endl << z << endl;
    return 0;
}

// 10->100->30