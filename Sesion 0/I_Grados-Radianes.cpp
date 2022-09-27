#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double pi = asin(0.5)*6;
    double grado1, grado2;
    cout << "Introduzca los grados" << endl;
    cin >> grado1 >> grado2;
    double radian1 = grado1*pi/180;
    double radian2= grado2*pi/180;

    cout << radian1 << endl << radian2 << endl;


}

