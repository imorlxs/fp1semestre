#include <iostream>
using namespace std;

int main(){
    int numero1, numero2;
    cin >> numero1 >> numero2;

    if (numero1 % numero2 == 0 || numero2 % numero1 == 0){
        cout << "Uno de ellos divide al otro" << endl;
    }
    else {
        cout << "Ninguno divide al otro" << endl;
    }
    return 0;
}