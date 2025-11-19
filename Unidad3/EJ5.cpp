#include <iostream>
using namespace std;

/*
a). Implementar la función cantidad_vocales(cadena), la cual debe informar la
cantidad de vocales sin tilde que contiene la cadena pasada por parámetro,
independientemente si son minúsculas o mayúsculas.
b). Escribir un programa que solicite el ingreso por teclado de una cadena y luego
llame a la función creada en el punto anterior. Finalmente, informar el resultado
en pantalla.
*/

int cantidad_vocales(string cadena){
    int contador = 0;
    for(int i = 0; i < cadena.length(); i++){
        char letra = tolower(cadena[i]);
        if(letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u'){
            contador++;
        }
    }
    return contador;

}
int main(){
    string cadena;

    cout << "Ingrese una cadena de texto: ";
    getline(cin, cadena);

    cout << "La cantidad de vocales en la cadena es: " << cantidad_vocales(cadena) << endl;

    return 0;

}