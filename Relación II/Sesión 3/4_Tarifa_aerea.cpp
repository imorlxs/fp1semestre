#include <iostream>

using namespace std;

int main()
{
    const float tarifa_base = 150;
    float tarifa_actualizada;
    float km;

    cin >> km;
    
    if (km < 300){
        tarifa_actualizada = tarifa_base;
    } 
    else {
        tarifa_actualizada = tarifa_base + (km-300)*0.10;
    }

    cout << tarifa_actualizada << endl;
    
    return 0;
}