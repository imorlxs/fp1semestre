/*
Indique cuál sería el resultado de las siguientes operaciones:

int salario_base;
int salario_final;
int incremento;

salario_base = 1000;
salario_final = salario_base;

incremento = 200;
salario_final = salario_final + incremento;

salario_base = 3500;

cout << "\nSalario base: " << salario_base;
cout << "\nSalario final: " << salario_final;

Responda razonadamente a la siguiente pregunta: ¿El hecho de realizar la
asignación salario_final = salario_base; hace que ambas variables estén
ligadas durante todo el programa y que cualquier modificación posterior de
salario_base afecte a salario_final ?
*/

//////////////////////////////////////////
//// RESPUESTA
//// El resultado sería: Salario base: 3500 y Salario final: 1200.
////
//// No, al realizar la asignación la variable salario_final toma el valor que tenia
//// salario_base al momento de ejecutar la línea. Las modificaciones que le hagamos
//// posteriormente no afectarán a salario_final, a no ser que volvamos a realizar la
//// asignación.
//////////////////////////////////////////