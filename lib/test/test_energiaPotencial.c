//Energia potencial
#include<stdio.h>
#include "../src/energiaPotencial.c"
/**
* @brief calculate potencial energy
* @param masa first param
* @param altura second param
* @returns potencial energy
*/
double energiaPotencial(double masa, double altura); //Declaración de la funcion

int main(){ //Funcion principal
	
	double masa, altura, resultado; //Declaracion de variables
	
	printf("Energia Cinetica.\n"); 
	
	printf("Ingresa el valor de la masa (en kilogramos): "); //Solicitud de datos
	scanf("%lf", &masa); //Se escanea lo ingresado y se guarda en la direccion de memoria
	printf("Ingresa la altura (en metros): "); //Solicitud de datos
	scanf("%lf", &altura); //Se escanea lo ingresado y se guarda en la direccion de memoria
	
	printf("\nLa energia potencial es: %.2lf", energiaPotencial(masa, altura)); //Impresion del resultado
	
	return 0; //Se termina el programa
	
}
