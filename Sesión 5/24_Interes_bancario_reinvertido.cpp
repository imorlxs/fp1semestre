//====================================================================================
// Titulo: Interés bancario (capital reinvertido)
// Fecha: 17-11-2022
// Autor: Isaac Morales Santana
// Finalidad: Usar una variable acumuladora dentro del cuerpo de un bucle (aparecerá a
// la izquierda y a la derecha de una asignación)
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
    double capital, interes, ganancias, num_años;
    cout << "Introduzca el capital, el interés y el número de años" << endl;
    cin >> capital >> interes >> num_años;

    for (int i = 1; i <= num_años; i++){
        ganancias = Interes(capital, interes, i);
        cout << "Capital obtenido transcurrido el año " << i-1 << ": " << ganancias << endl;
    }
    return 0;
}