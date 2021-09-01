#include "../include/fisica.h"
#include<stdio.h> 
double energiaCinetica(double masa, double velocidad); //Declaración de la funcion
double energiaPotencial(double masa, double altura); //Declaracion de la funcion

int main(){ //Funcion principal
	
	double masa, velocidad; //Declaracion de variables
	
	printf("Energia Cinetica.\n");
	
	printf("Ingresa la masa(en kilogramos): "); //Solicitud de datos
	scanf("%lf", &masa); //Se escanea lo ingresado y se guarda en la direccion de memoria
	printf("Ingresa la velocidad(en metros/segundos): "); //Solicitud de datos
	scanf("%lf", &velocidad); //Se escanea lo ingresado y se guarda en la direccion de memoria
	
	printf("\nLa energia cinetica es: %.2lf", energiaCinetica(masa, velocidad)); //Impresion del resultado

    double altura, resultado; //Declaracion de variables

	//Energia potencial
	printf("Energia Potencial.\n"); 
	
	printf("Ingresa el valor de la masa (en kilogramos): "); //Solicitud de datos
	scanf("%lf", &masa); //Se escanea lo ingresado y se guarda en la direccion de memoria
	printf("Ingresa la altura (en metros): "); //Solicitud de datos
	scanf("%lf", &altura); //Se escanea lo ingresado y se guarda en la direccion de memoria
	
	printf("\nLa energia potencial es: %.2lf", energiaPotencial(masa, altura)); //Impresion del resultado
	
	return 0; //Se termina el programa
	
}

double energiaCinetica(double masa, double velocidad){
	
	double resultado; //Declaracion de variable
	
	resultado = (masa * (velocidad * velocidad)) / 2; //Se calcula el resultado
	
	return resultado; //Regresa el valor obtenido
	
}

double energiaPotencial(double masa, double altura){
	
	float gravedad = 9.8; //Declaracion e inicializacion de variable
	float resultado; //Declaracion de variable
	
	resultado = masa * altura * gravedad; //Se calcula el resultado
	
	return resultado; //Regresa el resultado obtenido
	
}
