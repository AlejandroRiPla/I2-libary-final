#include <stdio.h>

double convertirAFahrenheit(double c)
{
    return ((c*1.8)+32);
}
int main() //funcion Principal
{
double a,fa;//declaracion de variables
printf("Ingrese los Grados Centigrados");//solicitud de grados Centigrados
scanf("%lf",&a);
fa=convertirAFahrenheit(a);//llamado de la funcion convertirAFahrenheit 
printf("Los Grados Fahrenheit son: %lf ",fa);//resultado de conversion
return 0;
}