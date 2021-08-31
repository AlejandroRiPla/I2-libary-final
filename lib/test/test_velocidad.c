#include <stdio.h>

double velocidad(double distancia,double tiempo); //distancia/tiempo


int main(){
	double D,T,V;
	printf("BIENVENIDOS\n");
	printf("CALCULAR VELOCIDAD\n");
	printf("Ingresa la distancia recorrida\n");
	scanf("%lf",&D);
	printf("Ingresa el tiempo que tardo\n");
	scanf("%lf",&T);
	V =	velocidad(D,T);
	printf("La velocidad es: %lf",V);
	return 0;
}

double velocidad(double distancia,double tiempo){
	double vel;
	vel=distancia/tiempo;
	return vel;
}