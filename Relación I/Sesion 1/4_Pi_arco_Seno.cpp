//////////////////////////////////////////////////////////////////////////////////////
// CÁLCULO DEL VALOR DE PI A PARTIR DEL ARCO-SENO.
// Autor: Isaac Morales Santana
//
// Se emplea que pi/6 = arcoseno(0.5), y a través del despeje de esa ecuación obtenemos que
// pi = 6*arcoseno(0.5), y de ahí calculamos el valor de Pi. Para el arcoseno utilizamos la función
// asin() que viene incluida en la libreria cmath
//
// Conceptos utilizados:
// - Salida de datos a través de la libreria iostream.
// - Empleo de fórmulas matemáticas a través de la libreria cmath
// - Creación de variables, y uso de ellas en operaciones básicas.
//////////////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <cmath>
using namespace std;

int main(){
   double pi;

   pi = asin(0.5)*6;
   
   cout << "El valor de Pi es: " << pi << endl;

   return 0;
}