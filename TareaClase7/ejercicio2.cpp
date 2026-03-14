/*
Ejercicio 2: Registro de cantidades vendidas
Autor: Carla Curay 
Fecha: 12/11/2026 
Enunciado: Desarrolle un programa en C++ que permita ingresar 6 cantidades enteras de productos vendidos durante el dia en 
un arreglo. El programa debe: 
1. Mostrar todas las cantidades ingresadas 
2. pedir al usuario que ingrese una cantidad especifica para buscar 
3. indicar si esa cantidad se encuentra dentro del arreglo
4. Mostrar la posicion donde aparece por primera vez, o un mensaje indicando que no fue encontrada

E/P/S: 
Entrada:
    6 números enteros que representan cantidades de productos.
    Un número entero específico para buscar.

Proceso:
    Leer y guardar las 6 cantidades en el arreglo.
    Mostrar el listado completo de las cantidades ingresadas.
    Leer el valor que el usuario desea localizar.
    Iniciar una variable bandera en false.
    Recorrer el arreglo; si el valor coincide, cambiar la bandera a true y guardar el índice.
Salida:
    El listado de cantidades para control visual.
    La ubicación del primer hallazgo o un mensaje de error si el dato no existe en el arreglo.
 */

 
#include <iostream>
using namespace std; 

int main (){
    // Arreglo para guardar 6 cantidades de productos vendidos
    int cantidades[6]; 

    // Variable para recorrer el arreglo 
    int i; 

    // Variable donde guardaremos la cantidad que el usuario desea buscar 
    int buscado; 

    // Variable para guardar la posicion de la primera coincidencia 
    int posicion = -1; 

    // Variable bandera: nos indica si encontramos la cantidad o no 
    bool encontrado = false; 

    // CARGA DE DATOS 
    cout << "--- Registro de Ventas Diarias ---" << endl; 
    for(i = 0; i < 6; i++){
        cout << "Ingrese la cantidad de productos vendidos (Venta " << i + 1 << "): "; 
        cin >> cantidades[i]; 
    }

    cout << endl; 

    // MOSTRAR TODAS LAS CANTIDADES INGRESADAS
    cout << "Listado completo de ventas registradas:" << endl;
    for(i = 0; i < 6; i++){
        cout << "Venta " << i << ": " << cantidades[i] << " unidades" << endl;
    }

    cout << endl; 

    // Pedimos al usuario la cantidad especifica para buscar 
    cout << "Ingrese la cantidad de productos que desea buscar: "; 
    cin >> buscado; 

    // BUSQUEDA SECUENCIAL 

    // Recorremos el arreglo posicion por posicion   
    for(i = 0; i < 6; i++){
        // Comparamos si el valor en la posicion es igual a la cantidad buscada 
        // && encontrado == false asegura que solo guarde la PRIMERA vez que aparece
        if(cantidades[i] == buscado && encontrado == false){
            // Si coincide, cambiamos la bandera a true
            encontrado = true; 

            // Guardamos la posicion donde aparecio por primera vez 
            posicion = i; 
        }
    }

    cout << endl; 

    // RESULTADO FINAL 
    // Verificamos si la bandera cambio a true
    if(encontrado == true){
        cout << "La cantidad " << buscado << " se encuentra en la posicion: " << posicion << endl;
    
    }
    else {
        // Mensaje indicando que no fue encontrada
        cout << "La cantidad " << buscado << " no fue encontrada en el registro." << endl; 
    }

    return 0;
}