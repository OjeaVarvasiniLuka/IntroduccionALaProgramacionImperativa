#include <iostream>
using namespace std;

/*
Escribir un programa que imprima el menú mostrado a continuación y solicite al usuario
elegir una opción, la cual se debe ejecutar para luego volver a mostrar el menú repetidas
veces, hasta que el usuario decida salir:

‘A’: Invertir número.
‘B’: Sumatoria de dígitos.
‘C’: Decir si son múltiplos.
‘D’: Salir.

Dependiendo del carácter ingresado por el usuario, realizar la acción indicada en el
menú: A: leer un número e invertir sus dígitos para luego imprimirlo en orden inverso; B:
solicitar un número e imprimir la suma de sus dígitos; C: solicitar el ingreso de dos
números y decir si el primero es múltiplo del segundo; D: terminar el programa.
Si el usuario ingresa un carácter que no es la opción D, se debe ejecutar lo que
corresponda y volver a mostrar el menú para permitirle elegir otra opción. Si el carácter
ingresado por el usuario no es A, B, C ni D, mostrarle un mensaje de error y continuar
mostrándole el menú y solicitando una opción hasta que ingrese una que sea válida.
Implementar las funciones que considere necesarias.
*/
int invertir_numero(){
    int numero, numero_invertido = 0;

    cout << "Ingrese un numero para invertir: ";
    cin >> numero;

    while(numero != 0){
        numero_invertido = numero_invertido * 10 + numero % 10;
        numero /= 10;
    }
    return numero_invertido;
}

int sumatoria_digitos(){
    int numero, suma = 0;

    cout << "Ingrese un numero para operar: ";
    cin >> numero;

    while(numero != 0){
        suma += numero % 10;
        numero /= 10;
    }
    return suma;
}

bool son_multiplos(){
    int num1, num2;

    cout << "Debera ingresar dos numeros para verificar si son multiplos." << endl;

    cout << "Ingrese el primer numero: ";
    cin >> num1;

    cout << "Ingrese el segundo numero: ";
    cin >> num2;

    if(num1 % num2 == 0 || num2 % num1 == 0){
        return true;
    }
    return false;
}

int main(){
    char opcion;
    int resultado;

    do{
        cout << "Menu de opciones:" << endl;
        cout << "A: Invertir numero." << endl;
        cout << "B: Sumatoria de digitos." << endl;
        cout << "C: Decir si son multiplos." << endl;
        cout << "D: Salir." << endl;
        cout << "Ingrese una opcion (A, B, C, D): ";
        cin >> opcion;

        switch (toupper(opcion)){
            case 'A':
                resultado = invertir_numero();
                cout <<  "El numero invertido es: " << resultado << endl;
                break;
            case 'B':
                resultado = sumatoria_digitos();
                cout << "La sumatoria de los digitos es: " << resultado << endl;
                break;
            case 'C':
                if(son_multiplos()){
                    cout << "Los numeros son multiplos." << endl;
                }else{
                    cout << "Los numeros no son multiplos." << endl;
                }
                break;
            default:
                cout << "Opcion no valida. Por favor ingrese A, B, C o D." << endl;
                break;
        }
    }while (toupper(opcion) != 'D');
    
}