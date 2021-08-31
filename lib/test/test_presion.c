#include <stdlib.h>
#include <stdio.h>

/** @brief Calcula la presion ejercida sobre cuerpo en N/m^2
 *  @param fuerza Normal force
 *  @param area Surface area
 *  @returns fuerza/area
 */
double presion(double fuerza, double area)
{
    return fuerza/area;
}

//Main function
int main(){
double f, a,res;
//Request data
printf("Calcula la presion\nIntroduce la fuerza: ");
scanf("%lf", &f);
printf(" \nIntroduce el area: ");
scanf("%lf", &a);
//Call the function
res = presion(f, a);
//Show result
printf("presion = %lf N/m^2", res);
   return 0;
}