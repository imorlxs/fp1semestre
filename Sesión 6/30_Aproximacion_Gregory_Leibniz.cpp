#include <cmath>
#include <iostream>
using namespace std;

int main()
{
    const int TOPE_MAXIMO = 1e+5;
    const string MSJ_PI = "\nValor de Pi obtenido por la serie de ";
    int tope;
    double suma, sumando, pi_aproximado;
    cout.precision(15);
    
    cout << "Aproximación del valor de Pi por Leibniz";
    cout << "\nIntroduzca el índice de la última iteración (< "
        << TOPE_MAXIMO << ")\n";

    do {
        cin >> tope;
    } while (tope <= 0 || tope > TOPE_MAXIMO);

    suma = 0;
    for (int i = 0; i <= tope; i++) {
        sumando = pow(-1, i) / (2 * i + 1);
        suma += sumando;
    }

    pi_aproximado = 4 * suma;

    cout << MSJ_PI << "Leibniz (a):\t" << pi_aproximado << endl;

    return 0;
}