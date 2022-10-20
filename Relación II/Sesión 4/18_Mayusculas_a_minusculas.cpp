

#include <iostream>
using namespace std;

/*
Creo un tipo enumerado que representa las opciones de que un carácter sea mayúscula
minúscula o un carácter no alfabético.
*/
enum class Tipo_letra{
    mayuscula, minuscula, no_alfabetico
};

int main()
{
    /*
    Hay 32 caracteres de diferencia entre las mayúsculas y las minúsculas
    y hay el mismo número de ellas (y están en el mismo orden)
    Por tanto, basta hacer mayuscula + 32 para obtener la correspondiente
    minúscula:

        letra_convertida = letra_original + 32;

    Pero debemos evitar los "números mágicos" como 32.
    Lo obtenemos a través de la constante simbólica DISTANCIA_MAY_MIN
    y no la inicializamos a 32 sino a 'a'-'A' que es mucho más informativo.
    */

    char letra_convertida, letra_original;
    const int DISTANCIA_MAY_MIN = 'a' - 'A';
    Tipo_letra tipo_letra;

    cout << "\nIntroduzca una letra  --> ";
    cin >> letra_original;


    if ((letra_original >= 'A') && (letra_original <= 'Z')){
        tipo_letra = Tipo_letra::mayuscula;
        letra_convertida = letra_original + DISTANCIA_MAY_MIN;
    }
    else if ((letra_original >= 'a') && (letra_original <= 'z')){
        tipo_letra = Tipo_letra::minuscula;
        letra_convertida = letra_original - DISTANCIA_MAY_MIN;
    }
    else {
        tipo_letra = Tipo_letra::no_alfabetico;
    }

    if (tipo_letra == Tipo_letra::no_alfabetico){
        cout << "\n El carácter no era una letra \n";
    } 
    else {
        cout << "\nEl carácter " << letra_original
        << " una vez convertido es: " << letra_convertida << "\n";
    }
}