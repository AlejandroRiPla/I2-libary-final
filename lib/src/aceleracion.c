/** @brief Calcula la divison entre 2 double de 64-bit sin signo para obtener la aceleracion
 *  @param velocidad Divisor
 *  @param tiempo dividendo
 *  @returns acel Valor de tipo double que contiene el calculo de velocidad/tiempo
 */
double aceleracion(double velocidad,double tiempo){
	double acel;
	acel=velocidad/tiempo;
	return acel;
}