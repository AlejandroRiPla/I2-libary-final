#include <stdlib.h>
#include <stdio.h>

/** @brief Calculates the density of a body in kg/m^3
 *  @param masa Mass
 *  @param volumen  Volume
 *  @returns masa/volumen
 */
double densidad(double masa, double volumen)
{
    return masa/volumen;
}

//Main function
int main(){
double m, v,res;
//Request data
printf("Calcula la densidad\nIntroduce la masa: ");
scanf("%lf", &m);
printf(" \nIntroduce el volumen: ");
scanf("%lf", &v);
//Call the function
res = densidad(m, v);
//Show result
printf("presion = %lf N/m^2", res);
   return 0;
}