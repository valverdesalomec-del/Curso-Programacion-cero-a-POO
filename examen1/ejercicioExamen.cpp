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
    cout << "1. Registrar estudiantes y notas"; 
    cout << "3. Mostrar promedio general"<< endl; 
    cout << "4. Mostrar nota mayor y nota menor"<< endl; 
    cout << "5. Mostrar aprobados y reprobados" << endl; 
    cout << "6. Buscar estudiante por nombre" << endl; 
    cout << "7. Salir" << endl; 
    cout << "Seleccione una opcion: ";
    cin >> op; 

    return op; 
}

//REGISTRO DE DATOS 
void registrar(string nombres[], float notas[], int &n) {
    do {
        cout << "Ingrese cantidad de estudiantes (1-20): ";
        cin >> n;
    } while(n < 1 || n > 20);

    for(int i = 0; i < n; i++) {
        cout << "Nombre del estudiante " << i+1 << ": ";
        cin >> nombres[i];

        while(nombres[i] == "") {
            cout << "Nombre invalido. Ingrese nuevamente: ";
            cin >> nombres[i];
        }

        do {
            cout << "Nota (0-20): ";
            cin >> notas[i];
        } while(notas[i] < 0 || notas[i] > 20);
    }
}

//LISTADO 
void mostrarListado(string nombres[], float notas[], int n) {
    if(n == 0) {
        cout << "No hay estudiantes registrados" << endl; 
        return;
    }

    for(int i = 0; i < n; i++) {
        cout << i+1 << ". " << nombres[i] << " - " << notas[i] << endl;
    }
}

// PROMEDIO 
float calcularPromedio(float notas[], int n) {
    float suma = 0;

    for(int i = 0; i < n; i++) {
        suma += notas[i];
    }

    return suma / n;
}

//MOSTRAR MAYOR Y MENOR 
void mayorMenor(string nombres[], float notas[], int n) {
    if(n == 0) {
        cout << "No hay estudiantes registrados"<< endl; 
        return;
    }

    float mayor = notas[0], menor = notas[0];
    string nomMayor = nombres[0], nomMenor = nombres[0];

    for(int i = 1; i < n; i++) {
        if(notas[i] > mayor) {
            mayor = notas[i];
            nomMayor = nombres[i];
        }
        if(notas[i] < menor) {
            menor = notas[i];
            nomMenor = nombres[i];
        }
    }

    cout << "Nota mayor: " << mayor << " - " << nomMayor << endl;
    cout << "Nota menor: " << menor << " - " << nomMenor << endl;
}

//APROBADOS Y REPROBADOS 
void aprobadosReprobados(float notas[], int n) {
    if(n == 0) {
        cout << "No hay estudiantes registrados"<< endl; 
        return;
    }

    int aprobados = 0, reprobados = 0;

    for(int i = 0; i < n; i++) {
        if(notas[i] >= 14) {
            aprobados++;
        } else {
            reprobados++;
        }
    }

    cout << "Aprobados: " << aprobados << endl;
    cout << "Reprobados: " << reprobados << endl;
}

//BUSCAR ESTUDIANTE

void buscarEstudiante(string nombres[], float notas[], int n) {
    if(n == 0) {
        cout << "No hay estudiantes registrados"<< endl;
        return;
    }

    string buscado;
    bool encontrado = false;

    cout << "Ingrese nombre a buscar: ";
    cin >> buscado;

    for(int i = 0; i < n; i++) {
        if(nombres[i] == buscado) {
            cout << "Nombre: " << nombres[i] << endl;
            cout << "Nota: " << notas[i] << endl;

            if(notas[i] >= 14)
                cout << "Estado: Aprobado"<< endl; 
            else
                cout << "Estado: Reprobado"<< endl; 

            encontrado = true;
            break;
        }
    }

    if(!encontrado) {
        cout << "Estudiante no encontrado"<< endl; 
    }
}