#include <iostream>
using namespace std;

/*
Escribí un programa que solicite el ingreso de números enteros, finalizando luego de
leer un número para el cual la suma de sus dígitos sea menor que 10 o mayor que 50.
Informar la cantidad de números impares leídos. Utilizá las funciones es_par(número)(EJ1) y
suma_dígitos(número)(EJ2) implementadas anteriormente.
*/

int es_par(int numero){
    if (numero % 2 == 0){
        return 1;
    }else{
        return 0;
    }
}

int suma_digitos(int numero){
    int suma = 0;

    while(numero != 0){
        suma += numero % 10;
        numero /= 10;
    }

    return suma;
}

int main(){
    int numero, suma, impares=0;77
    

    do{
        cout << "Ingrese un numero entero: ";
        cin >> numero;
        suma = suma_digitos(numero);

        if (es_par(numero) == 0){
            impares++;
        }

    } while (suma >= 10 && suma <= 50);

    cout << "La cantidad de numeros impares leidos es: " << impares << endl;
}

