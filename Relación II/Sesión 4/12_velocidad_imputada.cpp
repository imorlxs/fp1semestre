#include <iostream>
using namespace std;

int main(){
    char tipo_radar;
    float velocidad_captada, velocidad_imputada;
    int margen_error;

    cin >> tipo_radar >> velocidad_captada;

    //Comprobamos el tipo de radar
    if (tipo_radar == 'F' || tipo_radar == 'f'){
        margen_error = 5;
    } 
    else {
        margen_error = 7;
    }

    if (velocidad_captada <= 100){
        velocidad_imputada = velocidad_captada - margen_error;
    }
    else {
        float porcentaje_error = 1 - (margen_error/100.0);
        velocidad_imputada = velocidad_captada * porcentaje_error;
    }

    cout << "La velocidad imputada es de: " << velocidad_imputada << "km/h" << endl;

    return 0;
}