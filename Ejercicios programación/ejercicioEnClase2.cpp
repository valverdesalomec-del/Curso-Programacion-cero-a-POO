/* 
Ejercicio 1
Autor: Carla Curay 
Fecha: 06 de marzo del 2026 

Enunciado: Pida la base y la altura en enteros para calcular el area de un rectangulo
*/

#include <iostream>
using namespace std;
int main (){
    int base=0 , altura=0, area=0;
    cout << "Ingrese la base: " << endl; 
    cin >> base;
    cout << "Ingrese la altura: " << endl;  
    cin >> altura; 
    area = base * altura; 
    cout <<"Area= " << area << endl;
    return 0; 
}
