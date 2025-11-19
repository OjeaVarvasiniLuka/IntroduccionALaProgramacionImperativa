#include <iostream>
using namespace std;

/*
a). Implementar la función promedio_de_edades(edad1, edad2, edad3).

b). Escribir un programa que solicite el ingreso por teclado de tres edades y luego
llame a la función creada en el punto anterior. Finalmente, informar el resultado
en pantalla.
*/

float promedio_de_edades(int edad1, int edad2, int edad3){
    return (edad1 + edad2 + edad3) / 3.0;
}

int main(){
    int edad1, edad2, edad3;

    cout << "Ingrese la primera edad: ";
    cin >> edad1;
    cout << "Ingrese la segunda edad: ";
    cin >> edad2;
    cout << "Ingrese la tercera edad: ";
    cin >> edad3;

    cout << "El promedio de las edades es: " << promedio_de_edades(edad1, edad2, edad3) << endl;

    return 0;
}