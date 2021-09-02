#include "../include/fisica.h"
/**
* @brief calcula la energia potencial
* @param masa  valor tipo double que representa la masa en kilogramo
* @param altura valor de tipo double que representa la altura en metros
* @returns regresa la energia potencial como double
*/
double energiaPotencial(double masa, double altura){
	
	double gravedad = 9.8; //Declaracion e inicializacion de variable de tipo double
	double resultado; //Declaracion de variable de tipo double
	
	resultado = masa * altura * gravedad; //Se calcula el resultado
	
	return resultado; //Regresa el resultado obtenido
	
}