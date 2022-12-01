/*
Usar los valores de la hora, minuto y segundo del instante inicial y los tiene
que comparar (usando expresiones lógicas) con los del instante final.
*/
#include <iostream>
using namespace std;
int main()
{
    int hora1, minuto1, segundo1, hora2, minuto2, segundo2;
    string anterior = "El primero es anterior \n";
    string noanterior = "El primero NO es anterior \n";
    cin >> hora1 >> minuto1 >> segundo1 >> hora2 >> minuto2 >> segundo2;

    if (hora1 < hora2) {
        cout << anterior;
    } else if (hora1 > hora2) {
        cout << noanterior;
    } else {
        if (minuto1 < minuto2) {
            cout << anterior;
        } else if (minuto1 > minuto2) {
            cout << noanterior;
        } else {
            if (segundo1 < segundo2) {
                cout << anterior;
            } else {
                cout << noanterior;
            }
        }
    }

    return 0;
}