#include "../include/fisica.h"
/** @brief Convierte grados Farenghet a Centigrados
 * @param f double Grados Farenheit
 * @returns c double Grados Centigrados
 */
double convertirACentigrados(double f)
{
	return ((f-32)/1.8);
}