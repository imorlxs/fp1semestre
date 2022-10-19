//////////////////////////////////////////////////////////////////////////////////////
// CÁLCULO DE SUELDO FINAL AL INCREMENTAR UN 2% UN SUELDO BASE DADO POR EL USUARIO
// Autor: Isaac Morales Santana
// 
//
// Conceptos utilizados:
// - Entrada y salida de datos a través de la biblioteca iostream.
// - Creación de variables, y uso de ellas en operaciones básicas.
//////////////////////////////////////////////////////////////////////////////////////
#include <iostream>
using namespace std;

int main(){
   double salario;

   cout << "Introduzca el salario base: " << endl;
   cin >> salario;

   salario *= 1.02;

   cout << "El salario final es: " << salario << endl;
   
   return 0;
}

/*
   He elegido la alternativa c), ya que al incrementar la misma variable nos ahorramos espacio en la memoria
   ya que no tenemos que crear una variable para emplearla una sola vez. Nos evitamos ser redundantes y el código
   es legible, de un vistazo cualquiera puede saber que hace nuestro programa sin necesidad de comentarios innecesarios.
*/