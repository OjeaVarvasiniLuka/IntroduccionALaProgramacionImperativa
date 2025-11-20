#include <iostream>
using namespace std;

/*
a). Implementar la función mayuscula(cadena) que transforme una cadena pasada
por parámetro en mayúsculas.
b). Escribir un programa que solicite el ingreso por teclado de una cadena y luego
llame a la función creada en el punto anterior para informar el resultado en
pantalla.
*/

string mayuscula(string cadena){
    string cadena_mayuscula = "";
    // Recorro la cadena desde el principio hasta el final
    for(int i = 0; i < cadena.length(); i++){
        // Convierto cada caracter a mayuscula y lo agrego a la nueva cadena
        cadena_mayuscula += toupper(cadena[i]);
    }
    return cadena_mayuscula;
}

int main(){
    string cadena;

    cout << "Ingrese una cadena de texto: ";
    getline(cin, cadena);

    cout << "La cadena en mayusculas es: " << mayuscula(cadena) << endl;
    
    return 0;
}