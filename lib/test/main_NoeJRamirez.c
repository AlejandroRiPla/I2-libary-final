#include <stdio.h>
#include "..\include\fisica.h"
int main()
{
    double a,b,d;
    
    printf ("Para calcular la Aceleracion Ingrese la Velocidad ");
    scanf("%lf",&a);
    printf ("Ahora ingrese el Tiempo ");
    scanf("%lf",&b);
    d=aceleracion(a,b);
    printf("La Aceleracion es: %lf \n",d);
    printf("_____________________________________________________\n");
    printf ("\nPara calcular la Densidad Ingrese la Masa ");
    scanf("%lf",&a);
    printf ("Ahora ingrese el Volumen ");
    scanf("%lf",&b);
    d=densidad(a,b);
    printf("La Dencidad es: %lf\n",d);
    printf("_____________________________________________________\n");
    printf ("\nPara pasar a grados Centigrados Ingrese primero los grados Fahrenheit ");
    scanf("%lf",&a);
    d=convertirACentigrados(a);
    printf("Los grados Centigrados son: %lf\n",d);
    printf("_____________________________________________________\n");
    printf ("\nPara pasar a grados Fahrenheit Ingrese primero los grados Centigrados ");
    scanf("%lf",&a);
    d=convertirAFahrenheit(a);
    printf("Los grados Fahrenheit son: %lf\n",d);
    printf("_____________________________________________________\n");
    printf ("\nPara calcular la energia Cinetica ingrese la Masa ");
    scanf("%lf",&a);
    printf ("Ahora ingrese el Velocidad ");
    scanf("%lf",&b);
    d=energiaCinetica(a,b);
    printf("La energia Cinetica es: %lf\n",d);
    printf("_____________________________________________________\n");
    printf ("\nPara calcular la energia Potencial ingrese la Masa ");
    scanf("%lf",&a);
    printf ("Ahora ingrese la Altura ");
    scanf("%lf",&b);
    d=energiaPotencial(a,b);
    printf("La energia Potencial es: %lf\n",d);
    
    return 0;
}