/* 
Ejercicio 1: Numeros pares hasta N
Autor: Carla Curay 
Fecha: 10 de marzo del 2026
Enunciado: Elaborar un programa en C++ que solicita al usuario un numero entero positivo N y muestre en pantalla 
todos los numeros pares desde 1 hasta la N. Si el usuario ingresa un valor menor o igual a 0, el programa debe mostrar
un mensaje de error. 
*/

#include <iostream> 
using namespace std; 
int main ()
{
    //Declaramos las variables 
    int n = 0, i = 1; 

    cout <<"Ingrese un numero entero positivo: ";
    cin >> n; 

    //Validamos 
    while (n <= 0) {
        cout << "ERROR: el numero debe ser mayor a 0. Ingrese nuevamente: "; 
        cin >> n;
    }
    while (i <= n) {
        if (i % 2 == 0) {
            cout << i << endl;
        }
        i = i + 1;
    }
    cout <<"Fin del programa..."; 
    return 0;
}