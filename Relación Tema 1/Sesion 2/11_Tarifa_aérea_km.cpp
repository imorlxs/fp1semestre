#include <iostream>

using namespace std;

int main()
{
    const float tarifa_base = 150;
    float km;

    cin >> km;
    float tarifa_final = tarifa_base + km * 0.1;
    cout << tarifa_final << endl;

    return 0;
}