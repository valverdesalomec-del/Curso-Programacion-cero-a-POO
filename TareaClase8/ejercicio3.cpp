/*
Ejercicio 3: Area de un rectangulo
Autor: Carla Curay 
Fecha: 13/03/2026

Enunciado: Desarrolla un programa que permita ingresar la base y la altura de un rectángulo.
Usa funciones para:
    leer los datos,
    calcular el área,
    mostrar el resultado.
El programa debe trabajar con valores reales si el usuario ingresa decimal.
*/
#include <iostream>
using namespace std;

// Prototipos de funciones o firmas de funciones
void leerDimensiones(double &base, double &altura); // Paso por referencia para modificar las variables del main
double calcularArea(double base, double altura);    // Devuelve un valor real (double)
void mostrarResultado(double area);

int main()
{
    // Variables para la base y la altura (tipo double para permitir decimales)
    double b, h;
    
    // Variable para el resultado del área
    double areaTotal;

    // Llamamos a la función que lee los datos
    leerDimensiones(b, h);

    // Llamamos a la función que calcula el área (base * altura)
    areaTotal = calcularArea(b, h);

    // Mostramos el resultado final
    mostrarResultado(areaTotal);

    return 0;
}

// Esta función lee los datos y los guarda en las variables originales usando referencias (&)
void leerDimensiones(double &base, double &altura)
{
    cout << "Ingrese la base del rectangulo: ";
    cin >> base;
    cout << "Ingrese la altura del rectangulo: ";
    cin >> altura;
}

// Esta función recibe base y altura y devuelve el producto de ambas
double calcularArea(double base, double altura)
{
    return base * altura;
}

// Esta función recibe el área calculada y la imprime en pantalla
void mostrarResultado(double area)
{
    cout << "--- Calculo del Area ---" << endl;
    cout << "El area del rectangulo es: " << area << endl;
}