#include <stdio.h>

double convertirACentigrados(double f)
{
    return ((f-32)/1.8);
}
int main() //funcion Principal
{
double a,ce;//declaracion de variables
printf("Ingrese los Grados Fahrenheit");//solicitud de grados Fahrenheit
scanf("%lf",&a);
ce=convertirACentigrados(a);//llamado de la funcion convertirACentigrados 
printf("Los Grados Centigrados son: %lf ",ce);//resultado de conversion
return 0;
}