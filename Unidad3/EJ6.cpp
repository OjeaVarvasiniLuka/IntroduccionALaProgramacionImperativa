#include <iostream>
using namespace std;

/*
a). Implementá la función maximo(num_1, num_2) que calcule y retorne el máximo
entre num_1 y num_2, ambos positivos.
b). Luego, usá esa función para implementar un programa que solicite la lectura de 5
números que sean positivos, en caso de ingresar uno negativo volver a solicitar un
nuevo número, e informe el máximo número leído.
*/

int maximo(int num_1, int num_2) {
    if (num_1 > num_2) {
        return num_1;
    } else {
        return num_2;
    }
    //Si no ingreso en ningun condicional, singnifica que son iguales, entonces retorno uno de ellos
    return num_1;
}

int main(){
    int num1=0 , num2=0, contador=0;
    cout << "Ingrese un numero positivo: ";
    cin >> num1;

    while(contador<4 && num1 >= 0 && num2 >= 0){
        cout << "Ingrese un numero positivo: ";
        cin >> num2;
        num1 = maximo(num1, num2);
        contador++;
    }

    cout << "El maximo numero ingresado es: " << num1 << endl;
    
    return 0;
}
