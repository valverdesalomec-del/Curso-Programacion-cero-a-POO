/*
Ejercicio 4 con switch
Autor: Carla Curay 
Fecha: 10/03/2026
Enunciado:  Elaborar un programa en C++ que muestre el siguiente menu: 
1. Mostrar el doble de un numero 
2. Mostrar el triple de un numero 
3. Salir
El programa debe repetirse hasta que el usuario elija la opcion 3. 
Si el usuario ingresa una opcion invalida, el programa debe mostrar un mensaje de error 
y volver a mostrar el menu. +

Utilizar switch.
*/
#include <iostream>
using namespace std; 
int main (){
    int num = 0, opcion = 0, resultado = 0; 

    do {
        cout << "\n========= MENU =========" << endl;  
        cout << "1. Mostrar el doble del numero" << endl; 
        cout << "2. Mostrar el triple del numero" << endl; 
        cout << "3. Salir del programa" << endl; 
        cout << "Seleccione la opcion que quiera ejecutar: "; 
        cin >> opcion; 

        // Evaluamos la opcion elegida con switch
        switch (opcion) {
            case 1:
                cout << "Ingrese un numero entero: ";
                cin >> num; 
                resultado = num * 2; 
                cout << "El doble de " << num << " es: " << resultado << endl;
                break; 

            case 2:
                cout << "Ingrese un numero entero: "; 
                cin >> num; 
                resultado = num * 3; 
                cout << "El triple de " << num << " es: " << resultado << endl;  
                break;

            case 3:
                cout << "Saliendo del programa..." << endl; 
                break;

            default:
                cout << "ERROR: opcion invalida. Intente nuevamente" << endl;
                break;
        }

    } while (opcion != 3); 

    return 0;
}