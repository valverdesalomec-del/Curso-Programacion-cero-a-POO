/*
Ejercicio 2: Acumulador con for
Autor: Carla Curay
Fecha: 09 de marzo del 2026
Enunciado: Elaborar un programa en C++ que solicite al usuario 5 numeros enteros 
y calcule la suma total de esos numeros usando un bucle for.

Al final el programa debe mostras el resultado acumulado 

E/P/S: 

Entrada: 
    Cinco numeros enteros ingresados por el usuario. 
Proceso: 
    Inicializar una variable suma en 0
    Repetir 5 veces: 
        pedir un numero 
        leer el numero 
        sumar ese valor acumulado
    Al final, mostrar la suma total 
Salida: 
La suma total de los 5 numeros ingresados 
*/

#include <iostream>
using namespace std; 

int main (){
    //declaramos las variables necesarias 
    int  i = 0, numero = 0, suma = 0; 

    //Inicializamos el acumulador en 0 
    //suma = 0; 

    //Usamos for porque ya sabemos cuantas veces se repetira el proceso
    for (i = 1 ; i <= 5; i++){ //++ significa que aumenta de uno en uno 
        //Pedimos cada numero al usuario 
        cout <<"Ingrese el numero " << i << ": ";
        cin >> numero; 

        //Acumulamos el numero ingresado en la suma total
        suma= suma + numero; 
    }
    //Mostrar la suma final 
    cout << "La suma total es "<< suma << endl; 
    return 0; 
}