#include <iostream>
using namespace std;

/*
16) Escribir un programa que solicite cinco números enteros, los almacene en un arreglo
y luego calcule y muestre en pantalla el promedio de esos números.
*/

int main(){
    int numeros[5];
    float suma = 0;
    float promedio;

    cout << "Ingrese cinco numeros enteros:" << endl;
    for(int i = 0; i < 5; i++){
        cout << "Numero " << (i+1) << ": ";
        cin >> numeros[i];
        suma += numeros[i];
    }

    promedio = suma / 5;

    cout << "El promedio de los numeros ingresados es: " << promedio << endl;

    return 0;
}