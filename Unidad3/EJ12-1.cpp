#include <iostream>
using namespace std;

/*
Sin utilizar la computadora, indicar qué valores se imprimirían en cada caso. Luego
verificar compilando y ejecutando cada uno.
*/

void primeraFuncion(int x) {
    x = x+8;
    cout << "Valor de x luego de la primera función:" << x << endl;
    //Se imprime 15
}
void segundaFuncion(int & x) {
    x = x+5;
    primeraFuncion(x);
    cout << "Valor de x luego de la segunda función:" << x << endl;
    //Se imprime 7
}
int main() {
    int x = 2;
    segundaFuncion(x);
    return 0;
}