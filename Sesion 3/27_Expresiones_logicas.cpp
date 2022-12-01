#include <iostream>
using namespace std;

bool Minuscula(char letra){
    if (letra >= 'a' && letra <= 'z')
        return true;

    else
        return false;
}

bool Edad(int edad){
    if (edad < 18 || edad > 65)
        return true;
    else
        return false;

}

bool Bisiesto(int year){
    if (year % 4 == 0 && year % 100 != 0 )
        return true;

    else if (year % 400 == 0)
        return true; 

    else 
        return false;

}

bool Adivine(int adivine){
    if (adivine >= 1 && adivine <= 100)
        return true;
    else    
        return false;
}

bool Velocidad(int velocidad){
    if (velocidad >= 100)
        return true;
    
    else   
        return false;
}

bool Vocal(int letra){
    if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u')
        return true;
    
    else 
        return false;
    
}

int main(){
    char letra, vocal;
    int edad, adivine, anio, velocidad;
    cin >> letra >> edad >> adivine >> anio >> velocidad >> vocal;

    cout << Minuscula(letra) << " " << Edad(edad) << " " << Adivine(adivine) << " " << Bisiesto(anio) << " " << Velocidad(velocidad)
    << " " << Vocal(vocal) << endl; 

    return 0;
}
