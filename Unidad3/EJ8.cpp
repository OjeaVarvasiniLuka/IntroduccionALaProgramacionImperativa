#include <iostream>
using namespace std;

/*
a). Implementar la función invertir_cadena(cadena) que muestre una cadena pasada
por parámetro en orden inverso.
b). Escribir un programa que solicite el ingreso por teclado de una cadena y luego
llame a la función creada en el punto anterior para informar el resultado en
pantalla.
*/
int invertir_cadena(string cadena){
    string cadena_invertida = "";
    // Recorro la cadena desde el final hasta el principio
    for(int i = cadena.length() - 1; i >= 0; i--){
        //en cadenas se puede usar el operador += para concatenar
        cadena_invertida += cadena[i];
        //Aunque tambien se puede hacer cadena_invertida = cadena_invertida + cadena[i];
    }
    cout << "La cadena invertida es: " << cadena_invertida << endl;
    return 0;
}

int main(){
    string cadena;
    cout << "Ingrese una cadena de texto: ";
    getline(cin, cadena);
    invertir_cadena(cadena);
}