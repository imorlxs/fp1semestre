//====================================================================================
// Titulo: Muy divisible
// Fecha: 06-12-2022
// Autor: Isaac Morales Santana
//====================================================================================

// ((-1)^i * (1/sqrt(3))^(2i+1))/2i+1
#include <iostream>
using namespace std;

int main()
{
    int min, max, k, resto, divisores;
    cout << "Introduzca dos enteros, un mínimo y un máximo" << endl;
    do {
        cin >> min >> max;
    } while (min > max);
    cout << "Introduzca un entero k ( >= 1)";
    do {
        cin >> k;
    } while (k < 1);

    for (int i = min; i <= max; i++){
        divisores = 0;
        for (int j = 2; j < i; j++){
            resto = i%j;
            if (resto == 0){
                divisores ++;
            };
            
        }
        if (divisores >= k){
            cout << i << "Tiene " << divisores << " divisores " << endl;
        }
    }

    return 0;
}