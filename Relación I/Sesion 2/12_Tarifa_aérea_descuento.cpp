#include <iostream>

using namespace std;

int main(){
    double precio;
    cin >> precio;

    double descuento1 = precio*0.96;
    double descuento2 = precio*0.98;

    cout << descuento1 << " "  << descuento2 << endl;
    

    return 0;
}