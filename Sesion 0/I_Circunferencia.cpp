//////////////////////////////////////////////////////////////////////////////////////
// CÁLCULO DE ÁREA DEL CÍRCULO Y LONGITUD DE LA CIRCUNFERENCIA, A PARTIR DEL RADIO
// Autor: Isaac Morales Santana
// 
// Este programa pide al usuario la medida del radio de la circunferencia de la cual
// quiere calcular la longitud y el área del círculo descrito. Para ello, emplea fórmulas
// de geometría básica, tales como el área del círculo (3.14*r^2) o la longitud de una
// circunferencia (2*3.14*r). 
// Muestra el resultado a través de un cout en consola.
//
// Conceptos utilizados:
// - Entrada y salida de datos a través de la biblioteca iostream.
// - Creación de variables, y uso de ellas en operaciones básicas.
//////////////////////////////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

int main(){
   double area, longitud, radio;
   double pi = 3.1416;

   cout << "Introduzca la medida del radio: " << endl;
   cin >> radio;

   area = pi*radio*radio;
   longitud = 2*pi*radio;

   cout << "El área del círculo es: " << area << " unidades cuadradas" << endl;
   cout << "La longitud de la circunferencia es: " << longitud << " unidades" << endl;
}

/* He utilizado la alternativa c), ya que al asignarle a Pi un valor y utilizarlo cuando
   lo necesitemos nos evita los siguientes inconvenientes:
   1. El usuario puede no conocer el valor de Pi, o introducir uno erróneo, lo que haría
      que el programa no cumpla su propósito.

   2. No tenemos que introducir el valor de Pi varias veces a lo largo del código, por lo
      que evitamos ser redundantes y hacemos un código más legible y entendible, en el cual
      de un vistazo cualquier persona puede entender lo que hace.
*/