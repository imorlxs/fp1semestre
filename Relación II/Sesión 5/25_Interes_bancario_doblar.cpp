//====================================================================================
// Titulo: Interés bancario (doblar)
// Fecha: 17-11-2022
// Autor: Isaac Morales Santana
//
// Construya un programa para calcular cuántos años han
// de pasar hasta llegar a doblar, como mínimo, el capital inicial. Los datos que han de
// leerse desde teclado son el capital inicial y el interés anual.
// Ejemplo de entrada: 300 5.4
// −− Salida correcta:
// Para doblar la cantidad inicial han de pasar 14 años
// Al finalizar, se obtendrá un total de 626.455 euros
// Finalidad: Usar la variable acumuladora en la misma condición del bucle. Dificultad
// Baja.*/
//====================================================================================
#include <iostream>
#include <cmath>
using namespace std;

double Interes(double capital, double interes, double num_años){
    double ganancias_totales;
    ganancias_totales = capital*pow(((1+interes/100)), num_años);
    return ganancias_totales;
}

int main(){
    double capital, interes;
    double capital_final = 0;
    int num_años = 0;
    cout << "Introduzca el capital inicial y el interés anual: " << endl;
    cin >> capital >> interes;

    while (capital_final < 2*capital){
        num_años++;
        capital_final = Interes(capital, interes, num_años);
    }
    cout << "Para doblar la cantidad inicial han de pasar " << num_años << " años" << endl;
    cout << "Al finalizar, se obtendrá un total de " << capital_final << " euros" << endl;
}