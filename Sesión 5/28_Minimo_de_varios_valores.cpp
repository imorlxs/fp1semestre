//====================================================================================
// Titulo: Mínimo de varios valores
// Fecha: 01-12-2022
// Autor: Isaac Morales Santana
// Realice un programa que lea enteros desde teclado y calcule cuántos se han introducido y cual es el mínimo de dichos valores (pueden ser
// positivos o negativos). Se dejará de leer datos cuando el usuario introduzca el valor 0.
//
// Realice la lectura de los enteros dentro de un bucle sobre una única variable llamada
// dato. Es importante controlar los casos extremos, como por ejemplo, que el primer
// valor leído fuese ya el terminador de entrada (en este caso, el cero).
//
// Ejemplo de entrada: 0
// −− Salida correcta: Introducidos: 0. Mínimo: 0
// Ejemplo de entrada: 1 3 -1 2 0
// −− Salida correcta: Introducidos: 4. Mínimo: -1
// Ejemplo de entrada: 1 3 1 2 0
// −− Salida correcta: Introducidos: 4. Mínimo: 1
//
// Una vez hecho el programa, indique qué cambios debería realizar si los valores a leer
// son enteros negativos y el final de la entrada de datos lo marca la introducción de
// cualquier valor positivo.
//
// Ejemplo de entrada: -1 -3 -2 0
// −− Salida correcta: Introducidos: 3. Mínimo: -3
//====================================================================================

#include <iostream>
using namespace std;

int main(){
    int n, min;
    int intrd = 0;
    bool es_primero = true;
    int FIN = 0;
    cin >> n;
    min = n;

    while (n != FIN){
        intrd++;
        if(n < min){
            min = n;
        }
        cin >> n;
    }

cout << "Introducidos: " << intrd << "  Mínimo: " << min << endl;


    return 0;
}