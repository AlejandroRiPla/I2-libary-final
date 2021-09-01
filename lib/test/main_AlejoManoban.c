#include "../include/fisica.h"
#include <stdio.h>
int main(){
    printf("\tBIENVENIDOS\n");
	double A,VE,TI;
	printf("\nCALCULAR ACELERACION\n");
	printf("Ingresa la velocidad alcanzada\n");
	scanf("%lf",&VE);
	printf("Ingresa el tiempo que tardo\n");
	scanf("%lf",&TI);	
	A=aceleracion(VE,TI);
	printf("La aceleracion es: %lf",A);
printf("\n/////////////////////////////////////////////////////////////\n");	
    double D,T,V;
    printf("\n");
   
	printf("\nCALCULAR VELOCIDAD\n");
	printf("Ingresa la distancia recorrida\n");
	scanf("%lf",&D);
	printf("Ingresa el tiempo que tardo\n");
	scanf("%lf",&T);
	V=velocidad(D,T);
	printf("La velocidad es: %lf",V);               
printf("\n/////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\nCONVERTIR A CENTIGRADOS\n");
    double f,c;
    printf("Ingrese los grados a convertir\n");
    scanf("%lf",&f);
    c=convertirACentigrados(f);
    printf("Los grados en Centigrados es: %lf",c);
printf("\n/////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\nCONVERTIR A FAHRENHEIT\n");
    double x,az;
    printf("Ingrese los grados a convertir\n");
    scanf("%lf",&x);
    az=convertirAFahrenheit(x);
    printf("Los grados en Fahrenheit es: %lf",az);
printf("\n/////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\nDENSIDAD\n");
    double ma,vo,de;
    printf("Ingrese el valor de la masa: \n");
    scanf("%lf",&ma);
    printf("Ingrese el volumen: \n");
    scanf("%lf",&vo);
    de=densidad(ma,vo);//masa,volumen
    printf("La densidad es de: %lf",de);
printf("\n/////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\nPRESION\n");
    double n,area,p;
    printf("Ingrese la fuerza alcanzada: \n");
    scanf("%lf",&n);
    printf("Ingrese el área: \n");
    scanf("%lf",&area);
    p=presion(n,area);//fuerza,area
    printf("La presion es de: %lf",p);
printf("\n/////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\nEnergia Potencial\n");
    double a1,b1,c1;
    printf("Ingrese la masa: \n");
    scanf("%lf",&a1);
    printf("Ingrese la altura: \n");
    scanf("%lf",&b1);
    c1=energiaPotencial(a1,b1);//masa,altura
    printf("La EnergiaPotencial  es de: %lf",c1);
	
printf("\n/////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\nEnergia Cinicetica\n");
    double d1,e1,f1;
    printf("Ingrese la masa: \n");
    scanf("%lf",&d1);
    printf("Ingrese la velocidad: \n");
    scanf("%lf",&e1);
    f1=energiaCinetica(n,area);//masa,volumen
    printf("La EnergiaCinetica es de: %lf",f1);


    return 0;
}