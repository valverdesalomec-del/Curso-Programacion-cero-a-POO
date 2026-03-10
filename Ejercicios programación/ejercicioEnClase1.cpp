/* 
Ejercicio 1
Autor: Carla Curay 
Fecha: 06 de marzo del 2026 

Enunciado: Suma de dos enteros (I/O)
pida dos numeros enteros y muestre la suma de dichos numeros 
*/

#include <iostream>
using namespace std; 

int main ()
{
    //Declarar 
    int numero1 = 0, numero2 =0, suma=0;
    cout <<"Ingrese el primer numero: ";
    cin >> numero1;
    cout <<"Ingrese el segundo numero: ";
    cin >> numero2;

    // Proceso

    suma= numero1 + numero2;

    //Resultado 

    cout<< "suma = " << suma << endl;

    return 0; 
}
