#include<stdio.h>
/** @brief combierte grados Farenghet a Centigrados
 * @param c grados Farengheit
 * @returns f grados Centigrados
 */
float FarCent(float c)
{
	double c;
	
	c=(c-32)/1.8;
	return c;
}