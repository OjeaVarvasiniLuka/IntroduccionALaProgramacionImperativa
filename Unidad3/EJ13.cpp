#include <iostream>
using namespace std;

/*
¿Qué salida produce el siguiente fragmento de código? Si genera un error, especificar
cuál es y por qué se produce. Proponer posibles soluciones.
*/
string x = "azul";
string y;

void primera(){
    cout << "Ne gusta el color" << x << endl;
}

void segunda(){
    string y = "verde";
    cout << "Me gusta el color " << y << endl;
}

int main() {
    primera();
    segunda();
    cout << "Mis colores favoritos son " << x << " y " << y << endl;
}

/*
Efectivamente, el codigo genera un error, ya que la variable "y" fue declarada
en la funcion "segunda" y no es accesible desde la funcion "main".

Algunas soluciones pueden ser:
1. Declarar la variable "y" como una variable global, fuera de cualquier funcion.
2. Pasar "y" como un parametro a la funcion "segunda" desde la funcion "main", cambiar el
tipo de retorno y guardar el dato devuelto.
3. Mover esta linea "cout << "Mis colores favoritos son " << x << " y " << y << endl;"
dentro de segunda.

Nosotros optamos por la primera opcion.
*/