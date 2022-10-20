#include <iostream>
using namespace std;

int main()
{
    double cota_izda, cota_dcha, valor_real;
    char car_izda, car_dcha, car_coma;
    bool pertenece;
    string siono;

    cout << "Intervalo.\n\n"
        << "Introduzca el intervalo.\n";

    cin >> car_izda;
    cin >> cota_izda;
    cin >> car_coma;
    cin >> cota_dcha;
    cin >> car_dcha;
    cin >> valor_real;

    if (valor_real > cota_izda && valor_real < cota_dcha){   //Comprobamos que esta dentro del intervalo abierto.
        pertenece = true;
    }
    else if (car_izda == '[' && valor_real == cota_izda){
        pertenece = true;
    }
    else if (car_dcha == ']' && valor_real == cota_dcha ){
        pertenece = true;
    }
    else {
        pertenece = false;
    }
    
    //Para no repetir el COUT
    if (pertenece){
        siono = " ";
    }
    else {
        siono = " no ";
    }

    cout << "El valor " << valor_real << siono << "está dentro del intervalo " << car_izda << cota_izda
        << car_coma << " " << cota_dcha << car_dcha << endl;

    // [-2.2,4.8]
}
