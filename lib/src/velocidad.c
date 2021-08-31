/** @brief Calcula la divison entre 2 double de 64-bit sin signo para obtener la velocidad
 *  @param distancia Divisor
 *  @param tiempo dividendo
 *  @returns vel valor de tipo double que contiene el calculo de distancia/tiempo
 */     
double velocidad(double distancia,double tiempo){
	double vel;
	vel=distancia/tiempo;
	return vel;
}