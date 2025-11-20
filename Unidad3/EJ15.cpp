#include <iostream>
using namespace std;

/*
Identificar los errores, si los hay, de las siguientes declaraciones de arreglos. Para
aquellos que son correctos especificar: la cantidad de elementos ocupados y los valores
almacenados.

int a[4] = {8, 7, 6, 4, 3}; --> Incorrecto a es de tamaño=4 y se intentan almacenar 5 elementos

int b[] = {8, 7, 6, 4}; -->  Correcta

const int MAX = 4;
char c[MAX]; --> Correcta, se declara un arreglo de tamaño 4

long d[5]; --> Correcta

¿Qué salida produce el siguiente código?
*/
int main(){
    int i, arreglo[10];
    for (i = 0; i < 10; i++)
        arreglo[i] = 2*i;
        //[2*0, 2*1, 2*2, 2*3, 2*4, 2*5, 2*6, 2*7, 2*8, 2*9]
    for (i = 0; i < 10; i++)
        cout << arreglo[i] << " ";
        //0 2 4 6 8 10 12 14 16 18
        cout << endl;
    for (i = 0; i <= 10; i = i + 2)
        cout << arreglo[i] << " ";
        //0 4 8 12 16 y basura en la ultima iteracion ya que arreglo[10] no existe
}
