/* 
Ejercicio 1
Autor: Carla Curay 
Fecha: 06 de marzo del 2026 

Enunciado: Pida la temperatura en grados celsius y conviertalos en grados fahrenheit. 

*/ 
#include <iostream>
using namespace std; 
int main ()
 {
    //Declarar 
    float celsius, fahrenheit; 
    //Entrada 
    cout <<"Ingrese la temperatura en grados celsius: " << endl; 
    cin >> celsius; 

    //Proceso
    fahrenheit= (celsius* 9/5)+32; 

    //Salida 
    cout << "La temperatura en grados fahrenheit es: " << fahrenheit << endl; 
    return 0; 
} 
