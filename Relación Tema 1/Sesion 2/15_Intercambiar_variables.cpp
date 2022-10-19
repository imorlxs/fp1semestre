#include <iostream>

using namespace std;

int main()
{
    double caja_izda, caja_dcha;
    double aux;
    cin >> caja_dcha >> caja_izda;
    aux = caja_dcha;
    caja_dcha = caja_izda;
    caja_izda = aux;

    cout << caja_dcha << endl << caja_izda << endl;

    return 0;
}
