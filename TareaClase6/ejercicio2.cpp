/*
Ejercicio 2: Suma de 5 enteros
Autor: Carla Curay 
Fecha: 10 de marzo del 2026
Enunciado:
*/
#include <iostream>
using namespace std; 

int main (){
    // declaramos las variables necesarias 
    int i = 0, numero = 0, suma = 0; 

    // Usamos for porque ya sabemos cuantas veces se repetira el proceso
    for (i = 1 ; i <= 5; i++){ 
        // Pedimos cada numero al usuario 
        cout <<"Ingrese el numero " << i << ": ";
        cin >> numero; 

        // Acumulamos el numero ingresado en la suma total
        suma = suma + numero; 
    }

    // Mostrar la suma final 
    cout << "La suma total es: " << suma << endl;

    // Mostrar cuantos numeros se ingresaron
    cout << "Cantidad de numeros ingresados: 5" << endl;

    return 0; 
}