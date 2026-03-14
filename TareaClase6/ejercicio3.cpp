/*
Ejercicio 3: Tabla de multiplicar repetitiva
Autor: Carla Curay 
Fecha: 10 de marzo del 2026
Enunciado: Elaborar un programa en C++ que solicite al usuario un numero entero y muestre su tabla de 
multiplicar del 1 al 10. Al final, el programa debe mostrar un mensaje indicando que la tabla fue generada correctamente. 
*/
#include <iostream>
using namespace std; 
int main(){
    int numero = 0, i =0; 
    cout << "Ingrese un numero entero: "; 
    cin >> numero; 
    //Mostramos la tabla del 1 al 10 usando un for 
    for(i = 1; i <= 10; i++) {
        cout << numero << "x" << i << " = " << numero * i << endl; 
        }
 cout << "La tabla fue generada con exito."; 

 return 0; 
}

 