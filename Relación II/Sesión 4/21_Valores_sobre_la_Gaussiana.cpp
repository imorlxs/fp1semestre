/*
Realice un programa que lea los coeficientes reales µ y σ de una función gaussiana.
Dichos valores se conocen con el nombre de esperanza y desviación respectivamente.
A continuación el programa leerá un valor de abscisa x y se imprimirá el valor que toma
la función en x
*/

#include <cmath>
#include <iostream>
using namespace std;

double FuncionGaussiana(double esperanza, double desviacion, double abscisa)
{
    double gaussiana;
    double pi = 3.141592;
    double base = (abscisa - esperanza) / desviacion;
    double raiz_cuadrada = sqrt(2 * pi);
    double exponencial = exp(-0.5 * pow(base, 2));

    gaussiana = (1 / (desviacion * raiz_cuadrada)) * exponencial;
    return gaussiana;
}

int main()
{
    double esperanza, desviacion, minimo, maximo, incremento;
    cout << "Introduzca el valor de la esperanza" << endl;
    cin >> esperanza;

    do {
        cout << "Introduzca el valor de la desviación" << endl;
        cin >> desviacion;
    } while (desviacion <= 0);

    do {
        cout << "Introduzca el valor mínimo" << endl;
        cin >> minimo;
        cout << "Introduzca el valor máximo" << endl;
        cin >> maximo;
    } while (maximo < minimo);

    do {
        cout << "Introduzca el valor de incremento \n \n";
        cin >> incremento;
    } while (incremento <= 0);

    for (double i = minimo; i <= maximo; i += incremento) {
        cout << "En x = " << i << " el valor de la función es: " << FuncionGaussiana(esperanza, desviacion, i) << endl;
    }

    return 0;
}