#include <stdlib.h>
#include <stdio.h>

/** @brief Calcula la densidad de un cuerpo en kg/m^3
 *  @param masa Masa de un cuerpo en kg 
 *  @param volumen  Volumen de un cuerpo en m^3
 *  @returns double masa/volumen en kg/m^3
 */
double densidad(double masa, double volumen)
{
    return masa/volumen;
}

//Funcion principal
int main(){
double m, v,res;
//Pide datos
printf("Calcula la densidad\nIntroduce la masa: ");
scanf("%lf", &m);
printf(" \nIntroduce el volumen: ");
scanf("%lf", &v);
//Llama a la funcion 
res = densidad(m, v);
//Muestra el resultado
printf("presion = %lf N/m^2", res);
   return 0;
}