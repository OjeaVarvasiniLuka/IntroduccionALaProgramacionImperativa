#include <iostream>
using namespace std;
/*
Implementar la función suma_digitos(numero) que, dado un número entero
como argumento, retorne la suma de sus dígitos. Por ejemplo, si el argumento de
la función es 438, deberá retornar 15 (pues 4+3+8=15).
*/
int suma_digitos(int numero){
    int suma = 0;

    while(numero != 0){
        suma += numero % 10;
        numero /= 10;
    }

    return suma;
}

int main(){
    int numero;

    cout << "Ingrese un numero: ";
    cin >> numero;

    cout << "La suma de los digitos de " << numero << " es: " << suma_digitos(numero) << endl;

    return 0;
}