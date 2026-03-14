/*
Ejercicio 3: Tabla de multiplicar repetitiva
Autor: Carla Curay 
Fecha: 10 de marzo del 2026
Enunciado: Elaborar un programa en C++ que muestre el siguiente menu: 
1. Mostrar el doble de un numero 
2. Mostrar el triple de un numero 
3. Salir
El programa debe repetirse hasta que el usuario elija la opcion 3. 
Si el usuario ingresa una opcion invalida, el programa debe mostrar un mensaje de error 
y volver a mostrar el menu. 
*/
#include <iostream> 
using namespace std; 
int main ()
{
    int num = 0, i = 0, opcion = 0, doble = 0, triple = 0; 
    do {
        cout << "========= MENU =========" << endl;  
    cout << "1. Mostrar el doble del numero" << endl; 
    cout << "2. Mostrar el triple del numero" << endl; 
    cout << "3. Salir del programa" << endl; 
    cout << "Seleccione la opcion que quiera ejecutar: "; 
    cin >> opcion; 

    //Evaluamos la opcion elegida 

    if(opcion == 1)
     {
        cout << "Ingrese un numero entero: ";
        cin >> num; 
        doble = num * 2; 
        cout << "El doble de " << num << " es: " << doble << endl;

     }else if (opcion == 2) { 
        cout << "Ingrese un numero entero: "; 
        cin >> num; 
        triple = num * 3; 
        cout << "El triple de " << num << " es: " << triple << endl;  

    }else if (opcion == 3) {
        cout << "Saliendo del programa..."; 
    } else {
        cout <<"ERROR: opcion invalida. Intente nuevamente" << endl;
    }
    }while(opcion != 3); 
    
    return 0; 

}