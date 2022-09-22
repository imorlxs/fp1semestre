//////////////////////////////////////////////////////////////////////////////////////
// CÁLCULO DEL VOLTAJE EMPLEANDO LA LEY DE OHM, A PARTIR DE LOS DATOS INTRODUCIDOS POR EL
// USUARIO.
// Autor: Isaac Morales Santana
// 
// Este programa pide al usuario el valor de la intensidad y la resistencia para calcular
// el voltaje correspondiente. Para ello utiliza la fórmula de la Ley de Ohm, que postula que el voltaje
// es directamente proporcional al producto de la resistencia y la intensidad.
// Muestra el resultado a través de un cout en consola.
//
// Conceptos utilizados:
// - Entrada y salida de datos a través de la biblioteca iostream.
// - Creación de variables, y uso de ellas en operaciones básicas.
//////////////////////////////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

int main(){
   double voltaje, intensidad, resistencia;

   cout << "Introduzca el valor de la intensidad: \n";
   cin >> intensidad;
   cout << "Introduzca el valor de la resistencia: \n";
   cin >> resistencia;

   voltaje = intensidad * resistencia;

   cout << "El voltaje correspondiente es de " << voltaje << "V \n" ;

   return 0;
}  