#include <stdio.h>

double convertirACentigrados(double f)
{
    return ((f-32)/1.8);
}
double convertirAFahrenheit(double c)
{
    return ((c*1.8)+32);
}
int main() //funcion Principal
{
double a,b,ce,fa;//declaracion de variables
printf("Ingrese los Grados Fahrenheit");//solicitud de grados Fahrenheit
scanf("%lf",&a);
ce=convertirACentigrados(a);//llamado de la funcion convertirACentigrados 
printf("Los Grados Centigrados son: %lf ",ce);//resultado de conversion

printf("Ingrese los Grados Centigrados");//solicitud de grados Centigrados
scanf("%lf",&b);
fa=convertirAFahrenheit(b);//llamado de la funcion convertirAFahrenheit 
printf("Los Grados Fahrenheit son: %lf ",fa);//resultado de conversion
return 0;
}