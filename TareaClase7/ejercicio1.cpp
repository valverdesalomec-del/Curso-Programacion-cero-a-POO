/*
Ejercicio 1: Registro de Edades
Autor: Carla Curay
Fecha: 12/03/2026
Enunciado: Desarrolle un programa en C++ que permita ingresar 8 edades enteras en un arreglo. Luego, el programa debe: 
1. Mostrar todas las edades registradas junto a su posicion.
2. Pedir al usuario una edad adicional para buscar dentro del arreglo.
3. Indicar si esa edad fue encontrada o no. 
4. En caso de encontrarla, mostrar la posicion de la primera coincidencia.  

E/P/S: 
Entrada:

    8 números enteros que representan edades.
    Un número entero adicional (la edad a buscar).

Proceso:
    Leer y almacenar las 8 edades en un arreglo usando un ciclo for.
    Recorrer el arreglo para mostrar cada edad con su índice.
    Leer la edad buscada.
    Recorrer el arreglo comparando cada posición con la edad buscada.
    Si hay coincidencia y no se ha encontrado antes, marcar como "encontrado" y guardar la posición.

Salida:
    La lista de todas las edades con su posición.
    La posición de la primera coincidencia o un mensaje indicando que no se encontró.
*/
#include <iostream>
using namespace std; 

int main (){
    // Arreglo donde vamos a guardar 8 edades enteras 
    int edades[8]; 

    // Variable para recorrer el arreglo 
    int i; 

    // Variable donde guardaremos la edad que el usuario quiera buscar 
    int buscado; 

    // Variable para guardar la posicion donde se encuentra la edad 
    int posicion = -1; 

    // Variable bandera: nos ayuda a saber si encontramos la edad o no 
    bool encontrado = false; 

    // CARGA DE DATOS 
    for(i = 0; i < 8 ; i++){
        cout << "Ingrese la edad " << i + 1 << ": "; 
        cin >> edades[i]; 
    }

    cout << endl; 

    // MOSTRAR TODAS LAS EDADES (Paso 1 del ejercicio)
    cout << "--- Listado de edades registradas ---" << endl;
    for(i = 0; i < 8; i++){
        cout << "Posicion " << i << ": " << edades[i] << endl;
    }

    cout << endl;

    // Pedimos la edad que quiere buscar 
    cout << "Ingrese la edad adicional que desea buscar: "; 
    cin >> buscado; 

    // BUSQUEDA SECUENCIAL 

    // Recorremos el arreglo posicion por posicion   
    for(i = 0; i < 8; i++){
        // Comparamos si el valor guardado en la posicion es igual a la edad buscada 
        // Agregamos && encontrado == false para quedarnos solo con la primera coincidencia
        if(edades[i] == buscado && encontrado == false){
            // Si coincide, marcamos que fue encontrada
            encontrado = true; 

            // Guardamos la posicion donde la encontramos 
            posicion = i; 
        }
    }
    
    cout << endl; 

    // RESULTADO FINAL 
    // Usamos == para comparar el valor de la bandera
    if(encontrado == true){
        cout << "La edad fue encontrada en la posicion: " << posicion << endl;  
    }
    else {
        cout << "La edad no fue encontrada en el arreglo" << endl; 
    }

    return 0;
}