#include <iostream>

using namespace std;

int main(){
    float tarifa_base = 150;
    float km;

    cin >> km;
    tarifa_base = tarifa_base+km*0.1;
    cout << tarifa_base << endl;

    return 0;
}