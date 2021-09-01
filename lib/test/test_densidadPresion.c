#include <stdlib.h>
#include <stdio.h>

/** @brief Calcula la densidad de un cuerpo en kg/m^3
 *  @param masa Masa de un cuerpo en kg 
 *  @param volumen  Volumen de un cuerpo en m^3
 *  @returns double masa/volumen en kg/m^3
 */
double densidad(double masa, double volumen)
{
    return masa / volumen;
}
/** @brief Calcula la presion ejercida sobre cuerpo en N/m^2
 *  @param fuerza Fuerza normal en Newtons (N)
 *  @param area Áre de la superficie en m^2
 *  @returns double fuerza/area en N/m^2
 */
double presion(double fuerza, double area)
{
    return fuerza / area;
}

//Funcion principal
int main()
{
    double m, v, res, f, a;
    int opc;
    printf("Presiona 1 si quieres calcula la densidad\n ");
    printf("Presiona 2 si quieres calcula la presion \n ");
    scanf("%d", &opc);
    //Pide datos
    switch (opc)
    {
    case 1:
        printf("Calcula la densidad\nIntroduce la masa: ");
        scanf("%lf", &m);
        printf(" \nIntroduce el volumen: ");
        scanf("%lf", &v);
        //Llama a la funcion
        res = densidad(m, v);
        //Muestra el resultado
        printf("presion = %lf N/m^2", res);
        break;
    case 2:
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
}