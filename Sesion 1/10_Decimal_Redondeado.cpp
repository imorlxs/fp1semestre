#include <iostream>
#include <cmath>
using namespace std;

int main(){
    float decimal;
    int numero;

    cin >> decimal >> numero;

    int exponente = pow(10, numero);
    decimal = decimal*exponente;
    decimal = round(decimal);
    decimal = decimal/exponente;
    
    cout << decimal << endl;
    
    return 0;
}