//Energia cinetica
#include<stdio.h> 
#include "../src/energiaCinetica.c"
/**
* @brief calcula la energia cinetica
* @param masa valor tipo double que representa la masa en kilogramo
* @param velocidad valor de tipo double que representa la velocidad en metros/segundos
* @returns regresa el valor de la energia cinetica como double
*/
double energiaCinetica(double masa, double velocidad); //Declaración de la funcion

int main(){ //Funcion principal
	
	double masa, velocidad; //Declaracion de variables
	
	printf("Energia Cinetica.\n");
	
	printf("Ingresa la masa(en kilogramos): "); //Solicitud de datos
	scanf("%lf", &masa); //Se escanea lo ingresado y se guarda en la direccion de memoria
	printf("Ingresa la velocidad(en metros/segundos): "); //Solicitud de datos
	scanf("%lf", &velocidad); //Se escanea lo ingresado y se guarda en la direccion de memoria
	
	printf("\nLa energia cinetica es: %.2lf", energiaCinetica(masa, velocidad)); //Impresion del resultado
	
	return 0; //Se termina el programa
	
}
