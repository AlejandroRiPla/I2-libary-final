#include "../include/lib.h"
/** @brief Convierte grados Farenghet a Centigrados
 * @param f double Grados Farenheit
 * @returns c double Grados Centigrados
 */
double convertirACentigrados(double f)
{
	double c;
	
	c=(f-32)/1.8;
	return c;
}