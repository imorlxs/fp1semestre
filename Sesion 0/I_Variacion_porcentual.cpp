//////////////////////////////////////////////////////////////////////////////////////
// CÁLCULO DE LA VARIACIÓN PORCENTUAL A PARTIR DE UN VALOR INICIAL Y OTRO FINAL
// Autor: Isaac Morales Santana
//
// Conceptos utilizados:
// - Entrada y salida de datos a través de la biblioteca iostream.
// - Empleo de fórmulas matemáticas a través de la libreria cmath
// - Creación de variables, y uso de ellas en operaciones básicas.
//////////////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <cmath>
using namespace std;

int main(){
   double valorinicial, valorfinal, variacion;

   cout << "Introduzca el valor inicial: " << endl;
   cin >> valorinicial;
   cout << "Introduzca el valor final" << endl;
   cin >> valorfinal;

   variacion = abs(100 * (valorfinal - valorinicial) / valorinicial);

   cout << "La variación porcentual es de: " << variacion << "%" << endl;

   return 0;
}