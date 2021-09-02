#include "../include/fisica.h"
/** @brief Calcula la división entre 2 double de 64-bit sin signo para obtener la velocidad
 *  @param distancia Dato de tipo double, representa la distancia en metros
 *  @param tiempo Dato de tipo double, representa el tiempo en segundos
 *  @returns "vel" Valor de tipo double que contiene el cálculo de (distancia/tiempo)
 */     
double velocidad(double distancia,double tiempo){
	double vel;
	vel=distancia/tiempo;
	return vel;
}