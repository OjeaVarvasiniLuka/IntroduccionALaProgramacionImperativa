#include <iostream>
using namespace std;

/*
17) Escribir una función que reciba un arreglo de números enteros y devuelva la suma de
los elementos que son pares.
*/

int sumarPares(int arr[], int tamano){
    int suma = 0;

    for(int i = 0; i < tamano; i++){
        if(arr[i] % 2 == 0){
            suma += arr[i];
        }
    }

    return suma;
}
/*
18) Escribir una función que reciba un arreglo de enteros y devuelva el promedio de los
elementos que se encuentren en posiciones impares del arreglo.
*/
int promedioPosicionesImpares(int arr[], int tamano){
    float suma = 0;
    for(int i = 0; i < tamano; i++){
        if(i % 2 != 0){
            suma += arr[i];
        }
    }

    return suma / tamano;
}

/*
19)
Ordenamiento de números:
a). Desarrolla una función que ordena en forma ascendente los elementos de un
arreglo de 10 números enteros.
Por ejemplo, el arreglo con los elementos [2,5,1,4,4,8,12,9,7,11] quedaría
ordenado como [1,2,4,4,5,7,8,9,11,12]
b). ¿Qué debería modificar del algoritmo anterior para que los ordene en orden
descendente?
Se deberia cambiar la condicion del if de "arr[j] > arr[j + 1]" a "arr[j] < arr[j + 1]"
*/
void ordenamientoAscendente(int arr[], int tamano){
    //Este primer for recorre todo el arreglo
    for(int i = 0; i < tamano - 1; i++){
        //Este segundo for recorre el arreglo desde el inicio hasta el elemento no ordenado
        for(int j = 0; j < tamano - i - 1; j++){
            //Si el elemento actual es mayor que el siguiente, estan desordenados
            if(arr[j] > arr[j + 1]){
                //Los ordenamos
                //Primero guardamos el valor de arr[j] en una variable temporal
                //Ej [..., 5, 1, ...] temp = 5
                //Ej [..., arr[j], arr[j+1], ...]
                int temp = arr[j];
                //Luego asignamos el valor de arr[j + 1] a arr[j]
                //Ej [..., 1, 1, ...]
                arr[j] = arr[j + 1];
                //Finalmente asignamos el valor guardado en temp a arr[j + 1]
                //Ej [..., 1, 5, ...]
                arr[j + 1] = temp;
            }
        }
    }
}

/*
20). Eliminar duplicados: crear una función que elimine los elementos duplicados de un
arreglo de N números enteros, dejando una única ocurrencia de cada número.
*/

void eliminarDuplicados(int arr[], int tamano){
    int nuevoTamano = tamano;

    //Este for recorre todo el arreglo
    for(int i = 0; i < nuevoTamano; i++){
        //Este for compara el elemento actual con los siguientes
        for(int j = i + 1; j < nuevoTamano; j++){
            //Si encuentra un duplicado
            if(arr[i] == arr[j]){
                //Desplazar los elementos a la izquierda
                //Ej: [2, 3, 4, 3, 5] -> [2, 3, 4, 5]
                for(int k = j; k < nuevoTamano - 1; k++){
                    arr[k] = arr[k + 1];
                }
                //Reducir el tamaño del arreglo
                nuevoTamano--;
                //Decrementar j para revisar el nuevo elemento en la posicion j
                j--;
            }
        }
    }

    //Imprimir el arreglo sin duplicados
    cout << "Arreglo sin duplicados: ";
    for(int i = 0; i < nuevoTamano; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}