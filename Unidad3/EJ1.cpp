#include <iostream>
using namespace std;
/*
Escribir la función es_par(numero) que determine si el número entero que recibe
a través del parámetro “numero” es o no es par. La función deberá retornar 1 si
“numero” efectivamente es par y 0 en caso contrario.
*/

int es_par(int numero){
    if (numero % 2 == 0){
        return 1;
    }else{
        return 0;
    }
}

int main(){
    int numero;

    cout << "Ingrese un numero: ";
    cin >> numero;

    if (es_par(numero) == 1){
        cout << "El numero " << numero << " es Par" << endl;
    }else{
        cout << "El numero " << numero << " es impar" << endl;
    }   

    return 0;
}