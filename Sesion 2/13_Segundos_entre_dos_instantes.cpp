#include <iostream>

using namespace std;

int main()
{
    int horas1, minutos1, segundos1, horas2, minutos2, segundos2;

    cin >> horas1 >> minutos1 >> segundos1 >> horas2 >> minutos2 >> segundos2;     
    minutos1 += horas1*60;
    segundos1 += minutos1*60;
    minutos2 += horas2*60;
    segundos2 += minutos2*60;

    int segundos_finales = segundos2-segundos1;

    cout << segundos_finales << endl;

    return 0;
}