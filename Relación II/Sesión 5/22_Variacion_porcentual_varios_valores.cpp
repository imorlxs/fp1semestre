//////////////////////////////////////////////////////////////////////////////////////
// CÁLCULO DE LA VARIACIÓN PORCENTUAL A PARTIR PARES DE VALORES DADOS
// Autor: Isaac Morales Santana
//
// Conceptos utilizados:
// - Entrada y salida de datos a través de la biblioteca iostream.
// - Empleo de fórmulas matemáticas a través de la libreria cmath
// - Creación de variables, y uso de ellas en operaciones básicas.
// - Uso de bucles y condicionales
//////////////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <cmath>
using namespace std;

double Variacion(double valorinicial, double valorfinal){
    double variacion = abs(100 * (valorfinal - valorinicial) / valorinicial);
    return variacion;
}


int main(){
    int valor = 0;
    int valor2;
    cout << "Introduzca pares de valores: ";
    do{
        cin >> valor;
        if (valor >= 0){
            cin >> valor2;
            cout << Variacion(valor, valor2) <<"%" << endl;
        }
    } while (valor >= 0);
    return 0;
}