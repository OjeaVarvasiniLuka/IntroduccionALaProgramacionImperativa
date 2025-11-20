#include <iostream>
using namespace std;

/*
Sin utilizar la computadora, indicar qué valores se imprimirían en cada caso. Luego
verificar compilando y ejecutando cada uno.
*/

void funcion(int a, int & y, int & z) {
    // a=5, y=2, z=2
    int b = 1;  //b es local a la funcion
    y = y+1;    // y=3, entonces a=3
    z = z+a;    // z=3+5=8, entonces a=8
    b = 4;      // b=4, no afecta la variable b declarada en main
}
int main() {
    int a = 2;
    int b = 3;
    funcion(a+b, a, a);
    cout << "Variable a:" << a << endl;
    //Se imprime 8
    cout << "Variable b:" << b << endl;
    //Se imprime 3
    return 0;
}

/*
¿Qué cambiaría si en la función se reemplazara el nombre del parámetro a por el nombre x? Es decir:
void funcion(int x, int & y, int & z) {
    int b = 1;
    y = y+1;
    z = z+x;
    b = 4;
}
No cambiaria nada, el comportamiento del programa seguiria siendo el mismo.
*/