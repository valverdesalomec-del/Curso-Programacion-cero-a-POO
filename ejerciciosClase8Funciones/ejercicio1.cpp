/*
Ejercicio 1: 
Autor: Carla Curay
Fecha: 13/03/2026
Enunciado: Desarrollar un programa en C++ que permita ingresar 4 numeros enteros. El programa debe utilizar funciones:
    1. Leer los 4 numeros
    2. Calcular la suma de los 4 numeros
    3. Calcular el promedio 
    4. Mostrar los resultados
El objetivo es comprender como dividir el problema en varias funciones con tareas claras 

E/P/S: 
Entrada: 
    cuatro numeros enteros ingresados por el usuario 
    
Proceso: 
    leer los 4 numeros 
    calcular la suma 
    calcular el promedio 
    mostrar resultados en pantalla 
    
Salida: 
    la suma de los 4 numeros 
    el promedio de los 4 numeros 
    


PLANTILLA
Funcion con retorno: 
    tipo nombreFuncion(parametros){
        instrucciones
        return resultado;
    }   
        
Funcion void: 
    void nombreFuncion (parametros){
        instrucciones
        }
        
PSEUDOCODIGO

definir n1,n2,n3,n3, suma Como Entero 
definir promedio Como Real 

leer los 4 numeros 
calcular la suma 
calcular promedio 
mostrar suma y promedio 

VERSION MODULARIZACION 

Funcion leerCuatroNumeros(...)
Funcion CalcularSuma(...)
Funcion CalcularPromedio(...)
Funcion MostrarResultados


Inicio: 
    leerCuatroNumeros
    suma = calcularSuma
    promedio = calcularPromedio(suma)
    mostrarResultados(suma.promedio)  
    Fin
    */

#include <iostream>
using namespace std;

// Propotipos de funciones o firmas de funciones
void leerCuatroNumeros(int &a, int &b, int &c, int &d);
int calcularSuma(int a, int b, int c, int d);
double calcularPromedio(int suma); // un tipo de dato que permite declarar numeros decimales
void mostrarResultados(int suma, double promedio);

int main()
{
    // Variables donde se guardaran los numeros
    int n1, n2, n3, n4;

    // Variables para resultados
    int suma;
    double promedio;

    // Llamamos a la funcion que lee los 4 numeros
    leerCuatroNumeros(n1, n2, n3, n4);

    // Llamos a la funcion que calcula la suma
    suma = calcularSuma(n1, n2, n3, n4);

    // Llamamos a la funcion que calcule el promedio
    promedio = calcularPromedio(suma);

    // Mostramos los resultados
    mostrarResultados(suma, promedio);

    return 0;
}

// Esta funcion lee 4 numeros y los guarda en las variable originales
void leerCuatroNumeros(int &a, int &b, int &c, int &d)
{
    cout << "Ingrese 4 numeros enteros: ";
    cin >> a >> b >> c >> d;
}

// Esta funcion recibe 4 numeros y devuelve la suma
int calcularSuma(int a, int b, int c, int d)
{
    return a + b + c + d;
}

// Esta funcion recibe la suma y devuelve el promedio
double calcularPromedio(int suma)
{
    return suma / 4.0; // en c++ cuando usamos el double necesitamos
    // explicitamente decirle que tiene que usar los decimales para que no se los coma
}

// Esta funcion solo muestra resultados, por eso es void.
void mostrarResultados(int suma, double promedio)
{
    cout << "Resultados:" << endl;
    cout << "Suma: " << suma << endl;
    cout << "Promedio: " << promedio << endl;
}