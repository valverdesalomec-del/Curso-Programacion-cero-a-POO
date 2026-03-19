/*
Nombre del estudiante: Carla Curay 
Curso: Bootcamp Programacion de cero a POO
Clase: 10- Examen 1 (C++)
Fecha: 18/03/2026

Tema: Sistema de registro y análisis de notas de estudiantes 

E/P/S: 
Entrada: 
    - Cantidad de estudiantes 
    - Nombres de estudiantes 
    - Nota de cada estudiante 
Proceso: 
    - Validar datos ingresados 
    - Almacenar información en arreglos 
    - Calcular promedio general 
    - Buscar una nota mayor y una nota menor 
    - Mostrar reporte de aprobados y reprobados 
    - Permitir consultar un estudiante por nombre 
Salida: 
    - Listado de estudiantes y notas 
    - Promedio general 
    - Nota mayor y nota menor 
    - Cantidad de aprobados y reprobados 
    - Resultado de búsqueda por nombre 


ENUNCIADO: 
Una academia desea llevar un control básico de las notas de un grupo de estudiantes mediante un programa en C++. 
Se requiere desarrollar un sistema que permita registrar y analizar las calificaciones 
de un grupo pequeño de estudiantes usando arreglos unidimensionales y funciones.

El programa debe trabajar con un máximo de 20 estudiantes. 
Cada estudiante tendrá: 
    su nombre 
    una nota final 

La nota debe manejarse en escala de 0 a 20. 
El programa debe presentar un menú repetitivo con varias opciones para que el 
usuario pueda trabajar con la información registrada.
*/
#include <iostream>
#include <string>
using namespace std; 

//FIRMAS DE FUNCIONES 
void registrar(string nombres[], float notas[], int &n);
void mostrarListado(string nombres[], float notas[], int n);
float calcularPromedio(float notas[], int n);
void mayorMenor(string nombres[], float notas[], int n);
void aprobadosReprobados(float notas[], int n);
void buscarEstudiante(string nombres[], float notas[], int n);
int menu();

int main() {
    string nombres[20];
    float notas[20]; 
    int n = 0;
    int opcion; 
    do{
        opcion = menu();
        switch (opcion) {
            case 1: 
                registrar(nombres, notas, n);
                break; 

            case 2: 
                mostrarListado (nombres, notas, n); 
                break; 
            case 3: 
            if (n == 0){
                cout <<"No hay estudiantes registrados";
            }else {
                    cout <<"Promedio: " << calcularPromedio(notas, n)<< endl; 
                }
                break; 

            case 4: 
                mayorMenor(nombres, notas, n);
                break;
            
            case 5: 
                aprobadosReprobados(notas, n); 
                break; 

            case 6: 
                buscarEstudiante(nombres, notas, n);
             break;

            case 7: 
                cout <<"Saliendo del programa..."; 
                break; 

            default:
            cout <<"Opcion invalida"; 
        }
    }while (opcion != 7);

    return 0; 
}

//MENU 

int menu(){
    int op; 
    cout <<"====== MENU ======" << endl; 
    cout << ""
}
