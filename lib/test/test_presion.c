#include <stdlib.h>
#include <stdio.h>

/** @brief Calcula la presion ejercida sobre cuerpo en N/m^2
 *  @param fuerza Fuerza normal en Newtons (N)
 *  @param area Áre de la superficie en m^2
 *  @returns double fuerza/area en N/m^2
 */
double presion(double fuerza, double area)
{
    return fuerza/area;
}

//Funcion principal
int main(){
double f, a,res;
//Pide datos
printf("Calcula la presion\nIntroduce la fuerza: ");
scanf("%lf", &f);
printf(" \nIntroduce el area: ");
scanf("%lf", &a);
//Llama a la funcion
res = presion(f, a);
//Muestra resultados
printf("presion = %lf N/m^2", res);
   return 0;
}