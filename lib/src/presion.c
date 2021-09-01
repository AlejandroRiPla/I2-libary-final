#include "../include/fisica.h"
/** @brief Calcula la presion ejercida sobre cuerpo en N/m^2
 *  @param fuerza Fuerza normal en Newtons (N)
 *  @param area Áre de la superficie en m^2
 *  @returns double fuerza/area en N/m^2
 */
double presion(double fuerza, double area)
{
    return fuerza/area;
}
