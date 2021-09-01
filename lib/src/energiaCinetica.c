#include "../include/fisica.h"
/**
* @brief calcula la energia cinetica
* @param masa valor tipo double que representa la masa en kilogramo
* @param velocidad valor de tipo double que representa la velocidad en metros/segundos
* @returns regresa el valor de la energia cinetica
*/
double energiaCinetica(double masa, double velocidad){
	
	double resultado; //Declaracion de variable
	
	resultado = (masa * (velocidad * velocidad)) / 2; //Se calcula el resultado
	
	return resultado; //Regresa el valor obtenido
	
}