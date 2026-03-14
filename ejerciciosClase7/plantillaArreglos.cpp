/* 
Se guarda la idea de que: 
        El arreglo guarda datos.
        El indice nos indica la posicion en la que estamos.
        El for nos ayuda a movernos para todas las posiciones.
    Plantilla General 

    #include <iostream>
    using namespace std;

    int main (){
        int datos [5] //Arreglo de 5 enteros
        int i;        //Variable para recorrer las posiciones 
         
        //Cargar los datos 
        for(i = 0; i < 5; i++){       //i+=2  para que suba de dos en dos 
            cin >> datos[i];          //Pide los datos al usuario para cada posicion 
        }  

        //Impresion de datos 
        for(i = 0; i < 5; i++){      //Muestra los datos que almacenamos 
            cout << datos [i] << endl;     
        }       
    return 0;
     }




Tenemos varios aspectos importantes: 
    int datos[5]: significa que estamos creando un arreglo de 5 espacios para guardar enteros 

    datos[0], datos [1], datos [2]... : son las posiciones del arreglo 

    El for empieza en i = 0 porque en C++ el primer indice siempre es 0 

    Mientras i < 5, seguimos recorriendo el arreglo 

    En la carga usamos cin >> datos [i] porque vamos guardando un valor en cada posicion 

    En la impresion usamos cou << datos[i] porque vamos mostrando el valor guardado. 
*/