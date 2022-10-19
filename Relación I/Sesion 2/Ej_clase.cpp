#include <iostream>

using namespace std;

int main(){
    int numero, copia_numero, centenas, decenas, unidades;
    cin >> numero;
    copia_numero = numero;  

    unidades = copia_numero % 10;
    copia_numero = copia_numero / 10;
    decenas = copia_numero % 10;
    centenas = copia_numero / 10;

    cout << centenas << " " << decenas << " " << unidades << endl;

    return 0;
}