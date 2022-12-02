//====================================================================================
// Titulo: Aproximacion Pi por Wallis
// Fecha: 02-12-2022
// Autor: Isaac Morales Santana
// pi/2 = 2/1 + 2/3 + 4/3 + 4/5 + 6/5 + 6/7...
//====================================================================================

#include <iostream>
using namespace std;
int main()
{
    int tope;
    double numerador = 2;
    double denominador = 1;
    double suma, pi_aproximado;
    cout.precision(15);
    cout << "Aproximación de Pi por Wallis" << endl;
    cout << "Introduzca un valor tope (< 100000): " << endl;

    do {
        cin >> tope;
    } while (tope < 0 || tope > 1e+5);

    bool cambio_denominador = true;
    suma = 1;
    /*
    /////METODO BOOL
    for (int i = 0; i <= tope; i++) {
        suma *= (numerador / denominador);

        if (cambio_denominador == true) {
            denominador += 2;
            cambio_denominador = false;
        } else {
            numerador += 2;
            cambio_denominador = true;
        }
    }
    */

    //METODO ITERACION
    for (int i = 0; i <= tope; i++){
        suma *= (numerador/denominador);
        double aux = numerador;
        numerador = denominador + 1;
        denominador = aux + 1;

    }
    pi_aproximado = suma * 2;
    cout << "El valor aproximado de Pi es: " << pi_aproximado << endl;

    return 0;
}