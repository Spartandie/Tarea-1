#include<stdio.h>

//"Escriba las lineas de C para generar un tipo complejo"
typedef struct _complex complex;
struct _complex
{
    int a;
    int b;
};
//"Escriba las lineas de C para un tipo Alumno: nombre, no_cuenta, semestre, carrera"
struct Alumno
{
    char nombre[50];
    int no_cuenta;
    int semestre;
    char carrera[20];
};
//"Escriba las lineas de C para un tipo de dato nodo que apunta al siguiente"
typedef struct _node node;
struct _node{
    int d;
    node *next;
};
//"Escriba una estructura en c generar una matriz de apuntadores"
struct matrixap
{
    int *ap[4][5];
};
//"Escriba el código en C para generar un arreglo entero de apuntadores
struct main
{
    int *ap[5];
};
int main()
{
    //"Escriba el código en C para representar un apuntador a nodo"
    node *ap;
    /*"Suponiendo que int a; int *b= &b; y a se almacena en la direccion 100 y
    guarda el valor 3, qué dirección tiene b, cual es el valor apuntado y la dirección apuntada"
    */
   //No entendi profe :(
   //"Escriba las líenas de c para representar un apuntador a un complejo"
    complex *ap2;
    
}