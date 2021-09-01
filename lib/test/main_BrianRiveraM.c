#include "../include/fisica.h"
#include<stdio.h>

int main(){

    double masa, altura, resultado;
	
	printf("Energia Potencial.\n"); 
	
	printf("Ingresa el valor de la masa(en kilogramos): ");
	scanf("%lf", &masa); 
	printf("Ingresa la altura(en metros): "); 
	scanf("%lf", &altura); 
	
	printf("La energia potencial es: %.2lf", energiaPotencial(masa, altura)); 
	
    double velo, masa1; 
	
	printf("\n\nEnergia Cinetica.\n");
	
	printf("Ingresa la masa(en kilogramos): "); 
	scanf("%lf", &masa1); 
	printf("Ingresa la velocidad(en metros/segundos): "); 
	scanf("%lf", &velo); 
	
	printf("La energia cinetica es: %.2lf", energiaCinetica(masa1, velo));
	
    printf("\n\nAceleracion\n");

    double tiempo, velo1;

    printf("Ingresa la velocidad(en metros/segundos): "); 
	scanf("%lf", &velo1); 
	printf("Ingresa el tiempo(en segundos): "); 
	scanf("%lf", &tiempo); 

    printf("La aceleracion es: %.2lf", aceleracion(velo1, tiempo));
    
    printf("\n\nConversion a centigrados\n");

    double fahrenheit;

    printf("Ingresa los grados a convertir en fahrenheit: ");
    scanf("%lf", &fahrenheit);

    printf("Los grados en fahrenheit es: %.2lf", convertirACentigrados(fahrenheit));

    printf("\n\nConversion a fahrenheit\n");

    double celsius;

    printf("Ingresa los grados a convertir a centigrados: ");
    scanf("%lf", &celsius);

    printf("Los grados en centigrados es: %.2lf", convertirACentigrados(celsius));

    printf("\n\nDensidad\n");

    double volumen, masaa;

    printf("Ingresa la masa(en kilogramos): ");
    scanf("%lf", &masaa);
    printf("Ingresa el volumen(en metros^3): ");
    scanf("%lf", &volumen);

    printf("La densidad es: %.2lf", densidad(masaa, volumen));

    printf("\n\nPresion\n");

    double fuerza, area;

    printf("Ingresa la fuerza(en newtons): ");
    scanf("%lf", &fuerza);
    printf("Ingrese el area(en metros^2): ");
    scanf("%lf", &area);

    printf("La densidad es: %.2lf", presion(fuerza, area));

    printf("\n\nVelocidad\n");

    double distancia, tiempo1;

    printf("Ingresa la distancia(en metros): ");
    scanf("%lf", &distancia);
    printf("Ingresa el tiempo(en segundos): ");
    scanf("%lf", tiempo1);

    printf("La velocidad es: %.2lf", velocidad(distancia, tiempo));
    
    return 0;
}