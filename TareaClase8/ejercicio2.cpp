/*
Ejercicio 2: Número mayor entre dos valores
Autor: Carla Curay 
Fecha: 13/03/2026 

Enunciado: Desarrolla un programa que permita ingresar dos números enteros y determine cuál de los dos es mayor.
El programa debe estar modularizado usando funciones para:
    leer los datos,
    comparar los valores,
    mostrar el resultado.
Si ambos números son iguales, el programa también debe indicarlo.
 */

 #include <iostream>
using namespace std;

// Prototipos de funciones o firmas de funciones
void leerDosNumeros(int &a, int &b); // Paso por referencia para modificar n1 y n2
void compararYMostrar(int a, int b);

int main()
{
    // Variables donde se guardarán los 2 números
    int n1, n2;

    // Llamamos a la función que lee los 2 números
    leerDosNumeros(n1, n2);

    // Llamamos a la función que compara los valores y muestra el resultado
    compararYMostrar(n1, n2);

    return 0;
}

// Esta función lee 2 números y los guarda en las variables originales usando referencias (&)
void leerDosNumeros(int &a, int &b)
{
    cout << "Ingrese el primer numero entero: ";
    cin >> a;
    cout << "Ingrese el segundo numero entero: ";
    cin >> b;
}

// Esta función recibe los 2 números, los compara y muestra quién es mayor o si son iguales
void compararYMostrar(int a, int b)
{
    cout << "--- Resultado de la Comparacion ---" << endl;
    
    if (a > b) 
    {
        cout << "El numero mayor es: " << a << endl;
    } 
    else if (b > a) 
    {
        cout << "El numero mayor es: " << b << endl;
    } 
    else 
    {
        cout << "Ambos numeros son iguales: " << a << " = " << b << endl;
    }
}