#include <stdio.h>
double aceleracion(double velocidad,double tiempo); //velocidad/tiempo

int main(){
	double A,VE,TI;
	printf("CALCULAR ACELERACION\n");
	printf("Ingresa la velocidad alcanzada\n");
	scanf("%lf",&VE);
	printf("Ingresa el tiempo que tardo\n");
	scanf("%lf",&TI);	
	A=aceleracion(VE,TI);
	printf("La aceleracion es: %lf",A);
}
double aceleracion(double velocidad,double tiempo){
	double acel;
	acel=velocidad/tiempo;
	return acel;
}