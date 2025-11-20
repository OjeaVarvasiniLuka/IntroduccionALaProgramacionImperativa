#include <iostream>
using namespace std;

/*
Escribe un programa en C++ que simule la gestión de una cuenta bancaria. El
programa debe permitir al usuario realizar las siguientes operaciones:
● Ingresar un monto a la cuenta.
● Retirar un monto de la cuenta.
● Mostrar el saldo actual de la cuenta.
Requisitos:
● Utiliza una variable global para almacenar el saldo total de la cuenta.
● Implementa funciones con variables locales para realizar cada una de las
operaciones mencionadas.
● Asegúrate de manejar adecuadamente los casos donde no hay fondos suficientes
para realizar un retiro.
*/
float saldo = 0.0;

void ingresarMonto(){
    float monto;

    cout << "Ingrese el monto a ingresar: $";
    cin >> monto;

    saldo += monto;
    cout << "Monto ingresado con exito" << endl;
}

void retirarMonto(){
    float monto;

    cout << "Ingrese el monto a retirar: $";
    cin >> monto;

    if(monto > saldo){
        cout << "Fondos insuficientes. Saldo actual: $" << saldo << endl;
    }else{
        saldo -= monto;
        cout << "Monto retirado con exito" << endl;
    }
}

void mostrarSaldo(){
    cout << "Saldo actual: $" << saldo << endl;
}

int main(){
    int opcion;

    do{
        cout << "Menu de opciones:" << endl;
        cout << "1. Ingresar monto" << endl;
        cout << "2. Retirar monto" << endl;
        cout << "3. Mostrar saldo" << endl;
        cout << "0. Salir" << endl;

        cout << "Seleccione una opcion: ";
        cin >> opcion;

        switch (opcion){
            case 0:
                break;

            case 1:
                ingresarMonto();
                break;

            case 2:
                retirarMonto();
                break;

            case 3:
                mostrarSaldo();
                break;
                
            default:
                cout << "Opcion invalida, por favos selecciona una del Menu." << endl;
                break;
        }
    }while (opcion != 0);

    cout << endl;
    cout << "Gracias por usar el sistema bancario." << endl;
    return 0;
}