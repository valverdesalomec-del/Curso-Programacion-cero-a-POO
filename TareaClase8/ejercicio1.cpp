/*
Ejercicio 1: Suma y promedio de 3 numeros
Autor: Carla Curay 
Fecha: 13/03/2026 

Enunciado: Desarrollar un programa en C++ que permita ingresar 3 numeros enteros y que use funciones para: 
    1. Leer los numeros 
    2. Calcular la suma 
    3. Calcular el promedio
    4. Mostrar los resultados
    
E/P/S: 

Entrada: 
    Tres numeros ingresados por el usuario 
    
Proceso: 
    Calcular la suma 
    Calcular el promedio

Salida: 
    Mostrar los resultados de la suma y del promedio con un mensaje. 

*/
#include <iostream>
using namespace std;

// Prototipos de funciones o firmas de funciones
void leerTresNumeros(int &a, int &b, int &c); 
int calcularSuma(int a, int b, int c);
double calcularPromedio(int suma);
void mostrarResultados(int suma, double promedio);

int main()
{
    // Variables donde se guardaran los 3 números
    int n1, n2, n3;

    // Variables para resultados
    int suma;
    double promedio;

    // Llamamos a la funcion que lee los 3 números
    leerTresNumeros(n1, n2, n3);

    // Llamamos a la funcion que calcula la suma
    suma = calcularSuma(n1, n2, n3);

    // Llamamos a la funcion que calcule el promedio
    promedio = calcularPromedio(suma);

    // Mostramos los resultados
    mostrarResultados(suma, promedio);

    return 0;
}

// Esta función lee 3 números y los guarda en las variables originales usando referencias (&)
void leerTresNumeros(int &a, int &b, int &c)
{
    cout << "Ingrese 3 numeros enteros: ";
    cin >> a >> b >> c;
}

// Esta función recibe 3 números y devuelve la suma
int calcularSuma(int a, int b, int c)
{
    return a + b + c;
}

// Esta función recibe la suma y devuelve el promedio (dividido para 3.0)
double calcularPromedio(int suma)
{
    // Usamos 3.0 para asegurar que la división sea decimal y no entera
    return suma / 3.0;
}

// Esta función solo muestra resultados, por eso es void.
void mostrarResultados(int suma, double promedio)
{
    cout << "--- Resultados ---" << endl;
    cout << "Suma total: " << suma << endl;
    cout << "Promedio: " << promedio << endl;
}