#include <iostream>
using namespace std;

/*
a). Implementar la función mostrar_suma_digitos(numero) que, dado un número
entero como argumento, imprima en pantalla la suma de sus dígitos. ¿Qué valor
retorna esta función?

b). Escribir un programa que solicite al usuario el ingreso de un número entero, y que
utilizando la función del ejercicio anterior, muestre en pantalla un mensaje que
informe al usuario la suma de los dígitos del número ingresado.
*/

void mostrar_suma_digitos(int numero){
    int suma = 0;

    while(numero != 0){
        suma += numero % 10;
        numero /= 10;
    }

    cout << "La suma de los digitos es: " << suma << endl;
}

int main(){
    int numero;

    cout << "Ingrese un numero: ";
    cin >> numero;

    mostrar_suma_digitos(numero);

    return 0;
}