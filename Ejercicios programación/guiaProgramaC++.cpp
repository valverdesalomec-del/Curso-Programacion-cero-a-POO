/*
PLANTILLA Y GUIA BASE PARA TODO PROGRAMA EN C++

Autor: Carla Curay
Fecha: 06 de marzo del 2026

Plantilla para copiar siempre

#include<iostream>
#include<string>  //(opcional, solo si se usa texto)

using namespace std;

int main(){
 1) Declarar variables
 2) Pedir datos al usuario (entrada)
 3) Procesar (calculos, operaciones,etc)
 4) Mostrar resultados (salida)

return 0;
}


Explicacion de cada parte de la plantilla;

1. #include<iostream>:
    Esto le da al programa la capacidad de usar funciones de entrada y salida, como cout
    para mostrar el mensaje en pantala y cin para recibir datos del usuario.

2. using namespace std; :
  Esto es para no escribir std:: antes de cada funcion de la biblioteca estandar, como cout cin. Es 
  una forma para simplificar el codigo.

3. int main (){...}:
  Main es la puerta de entrada. Es la funcion principal que se ejecuta cuando el programa comienza. Todo
el codigo que quieras ejecutar debe estar dentro dd esta funcion.

4. Declaración de variables; aqui es donde se definen las variables que se van a usar en el prgrama. Ejm
   int edad, string nombre, etc.

5. cout <<"texto"; :
  Esto imprime en pantalla el texto que se encuentra entre comillas.
  Es la forma de mostrar el mensaje al usuario. 
  Pensemos en que es la salida.

6. cin >> variable; :
 Esto es para recibir datos del usuario. El programa se detiene y espera a que el usuario ingrese un valor
 que luego se almacena en la variable. Esto es la entrada del programa 

7. endl : 
 Es un salto de linea (como Enter)

 8. Procesamiento: 
  Aqui es donde se realizan los calculos u operaciones necesarias para obtener el resultado deseado. Por ejemplo
  si quieres sumar dos numeros, aqui es donde lo hariamos: Resultado= numero1+ numero2;

9. return 0; : 
 Esto nos indica que el programa ha terminado correctamente, Es una forma de decirle al sistema que todo ha salido bien 

10. {}(llaves) : 
 Marcan el bloque de codigo (inicio y el fin).

11. ; (punto y coma) : 
 Señala al programa que termina una instruccion y si falta, da un error.

12. // comentario:
 Comentario de una linea (no se va a ejecutar).

13. /*... /* : 
 Comentario de varias lineas 

Tipos de datos basicos

int: enteros (5,120.-3)

float/double: decimales (3.14, 12.5)

char: un caracter ("A")

string: texto ("Hola") (requiere #include<string>)

bool: verdader y falso (true,false)

Operadores lógicos (para las reglas)

&& AND : ambas condiciones deben cumplirse 
|| OR : se cumple una u otra condicion 
! NOT : es la negacion 

ejemplo de validacion tipica: 
if (edad>= 0 && edad<=120){
  cout << "Edad valida" << endl; 
}else}
  cout << "Edad invalida" <<endl; 
}
*/
