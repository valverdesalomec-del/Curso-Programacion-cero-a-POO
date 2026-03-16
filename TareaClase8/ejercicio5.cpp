/*
Ejercicio 5 : Contador actualizado con referencia
Autor: Carla Curay 
Fecha: 13/03/2026

Enunciado : Desarrolla un programa que pida al usuario un número entero positivo n y luego incremente un contador
desde 0 hasta n, usando una función que actualice el valor del contador.
El programa debe mostrar el valor del contador en cada incremento.
*/

#include <iostream>
using namespace std;

// Prototipos de funciones
void leerLimite(int &n);
void incrementarContador(int &cuenta); // Paso por referencia para modificar el contador real
void mostrarEstado(int cuenta);

int main()
{
    int limite;
    int contador = 0; // Inicializamos el contador en 0

    // 1. Pedimos al usuario hasta qué número quiere contar
    leerLimite(limite);

    cout << "Iniciando contador..." << endl;

    // 2. Ciclo para incrementar y mostrar
    // Usamos un bucle while o for que se repita hasta llegar al limite
    for (int i = 0; i < limite; i++)
    {
        // Llamamos a la función para que actualice el valor del contador
        incrementarContador(contador);
        
        // Mostramos el valor actual del contador
        mostrarEstado(contador);
    }

    cout << "Proceso finalizado." << endl;

    return 0;
}

// Esta función lee el número máximo al que queremos llegar
void leerLimite(int &n)
{
    cout << "Ingrese un numero entero positivo para el limite: ";
    cin >> n;
}

// Esta función aumenta en 1 el valor de la variable original mediante referencia
void incrementarContador(int &cuenta)
{
    cuenta = cuenta + 1; // También se puede escribir como: cuenta++;
}

// Esta función solo muestra el progreso
void mostrarEstado(int cuenta)
{
    cout << "Valor actual del contador: " << cuenta << endl;
}