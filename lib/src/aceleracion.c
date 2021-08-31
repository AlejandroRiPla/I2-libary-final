/** @brief Calcula la división entre 2 double de 64-bit sin signo para obtener la aceleración
 *  @param velocidad Dato de tipo double, representa la velocidad en metros/segundos
 *  @param tiempo Dato de tipo double, representa el tiempo en segundos
 *  @returns "acel" Valor de tipo double que contiene el cálculo de (velocidad/tiempo)
 */
double aceleracion(double velocidad,double tiempo){
	double acel;
	acel=velocidad/tiempo;
	return acel;
}