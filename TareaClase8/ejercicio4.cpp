/*
Ejercicio 4 : Intercambio de dos numeros
Autor: Carla Curay 
Fecha: 13/03/2026

Enunciado:Desarrolla un programa que permita ingresar dos números enteros y luego intercambiar sus valores usando una función.
El programa debe:
    mostrar los valores antes del intercambio,
    realizar el intercambio usando una función,
    mostrar los valores después del intercambio.
*/

#include <iostream>
using namespace std;

// Prototipos de funciones
void leerNumeros(int &a, int &b);
void intercambiar(int &a, int &b); // ¡Importante! Usamos referencia para alterar los originales
void mostrarValores(int a, int b, string mensaje);

int main()
{
    // Variables para los dos números
    int n1, n2;

    // 1. Leer los datos
    leerNumeros(n1, n2);

    // 2. Mostrar valores antes del intercambio
    mostrarValores(n1, n2, "Valores antes del intercambio:");

    // 3. Realizar el intercambio usando la función
    intercambiar(n1, n2);

    // 4. Mostrar valores después del intercambio
    mostrarValores(n1, n2, "Valores despues del intercambio:");

    return 0;
}

// Función para leer los datos
void leerNumeros(int &a, int &b)
{
    cout << "Ingrese el primer numero (n1): ";
    cin >> a;
    cout << "Ingrese el segundo numero (n2): ";
    cin >> b;
}

// Función que realiza el intercambio usando una variable auxiliar
void intercambiar(int &a, int &b)
{
    int auxiliar; // Variable temporal para no perder el valor de 'a'
    
    auxiliar = a;  // Guardamos el valor de a en el "frasco" auxiliar
    a = b;         // Metemos el valor de b en a
    b = auxiliar;  // Metemos lo que guardamos en el auxiliar dentro de b
}

// Función para mostrar los resultados con un mensaje personalizado
void mostrarValores(int a, int b, string mensaje)
{
    cout << "------------------------------------" << endl;
    cout << mensaje << endl;
    cout << "n1 = " << a << endl;
    cout << "n2 = " << b << endl;
}