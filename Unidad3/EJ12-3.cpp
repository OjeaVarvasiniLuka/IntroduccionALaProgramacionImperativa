#include <iostream>
using namespace std;

/*
Sin utilizar la computadora, indicar qué valores se imprimirían en cada caso. Luego
verificar compilando y ejecutando cada uno.
*/

int sumatoriaPares(int numero) {
    int suma = 0;
    while (numero != 0) {
        if ((numero%10)%2 == 0) {
            suma += numero%10;
        }
        numero = numero/10;
    }
    return suma;
}
void alterarNumero(int a, int & b, int c) {
    //a=4, b=90210, c=2, b es referencia a numero de main
    a = sumatoriaPares(c);  //a=2
    b = a;  //b=2 cambia la variable numero tambien
}

int main() {
    int i = 4;
    int numero = 90210;
    alterarNumero(i, numero, sumatoriaPares(numero));
    cout << "Numero: " << numero << endl;
    //Imprime 2
    cout << "Variable i: " << i << endl;
    //Imprime 4
    return 0;
}