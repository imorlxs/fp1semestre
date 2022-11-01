//////////////////////////////////////////////////////////////////////////
//
// Fundamentos de Programación
// ETS Informática y Telecomunicaciones
// Universidad de Granada
// Departamento de Ciencias de la Computación e Inteligencia Artificial
// Autor: Juan Carlos Cubero
//
//////////////////////////////////////////////////////////////////////////

// Coranovirus

/*
Por todos es conocido el gran daño humano y económico que ha producido
el coranovirus ARS-CoV-2 al provocar la enfermedad denominada COVID-19.
En Argentina, la web gubernamental https://coronavirus.argentina.gob.
ar/ diseñó un test aproximado para su identificación. El código fuente estaba escrito
en JavaScript y parte de él se muestra en la siguiente figura (como puede apreciar,
Java es un lenguaje con una sintaxis similar a C++)

Suponemos que la lógica del código es correcta y por tanto identifica adecuadamente
la enfermedad del COVID-19. Sin embargo, este código tiene varios problemas
(a los pocos días de publicarlo arreglaron parte de ellos) en el sentido de
que incumple algunas normas que un buen programador ha de seguir. Uno de los
problemas más sencillos de detectar es la aparición duplicada de las comprobaciones
sobre respiratoryDisease. En cualquier caso, para simplificar el problema
nos vamos a fijar únicamente en cuatro síntomas, a saber, bodyTemperature,
difficultyBreathing, diabetes y cancer, de forma que el código anterior se
simplificaría en el siguiente:

if((bodyTemperature >= 38 && difficultyBreathing) ||
   (bodyTemperature >= 38 && difficultyBreathing && diabetes) ||
   (bodyTemperature >= 38 && difficultyBreathing && cancer) ||
   (bodyTemperature >= 38 && diabetes) ||
   (bodyTemperature >= 38 && cancer))

   cout << "Consulte autoridades locales";
else
    if (bodyTemperature >= 38)
        cout << "Cuarentena";
    else
        if (bodyTemperature < 38)
            cout << "Test negativo";
    else
        ºcout << "Test negativo";

Identifique los problemas que pueda haber y proponga una solución modificando el
código del programa que puede encontrar en el siguiente enlace:
http://decsai.ugr.es/jccubero/FP/II_CoranovirusEsbozo.cpp

Ejemplo de entrada: 37 S S S
.... Salida correcta: Test negativo
Ejemplo de entrada: 39 S N N
.... Salida correcta: Consulte autoridades locales
Ejemplo de entrada: 39 N N N
.... Salida correcta: Cuarentena en su casa
*/

#include <cctype>
#include <iostream>
using namespace std;

int main()
{
    double bodyTemperature;
    bool difficultyBreathing, diabetes, cancer;
    char opcion;

    cout << "Detección Aproximada de COVID-19\n\n\n"
         << "Introduzca la temperatura y a continuación conteste S/N a las siguientes preguntas:\n\n"
         << "- ¿Tiene deficultades para respirar?\n"
         << "- ¿Es diabético?\n"
         << "- ¿Tiene algún tipo de cáncer?\n\n";

    cin >> bodyTemperature;
    cin >> opcion;
    difficultyBreathing = toupper(opcion) == 'S';
    cin >> opcion;
    diabetes = toupper(opcion) == 'S';
    cin >> opcion;
    cancer = toupper(opcion) == 'S';

    /*
    El siguiente código es el que aparecía en la página web.
    Arréglelo
    */
    if (bodyTemperature >= 38) {
        if (difficultyBreathing || diabetes || cancer)
            cout << "Consulte autoridades locales";
        else
            cout << "Cuarentena en su casa";
    } else
        cout << "Test negativo";
    cout << "\n";
}