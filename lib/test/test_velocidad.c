#include <stdio.h>

double velocidad(double distancia,double tiempo); //Encabezado de función la cual recibe 2 parametros de tipo double
int main(){
	double D,T,V;
	printf("BIENVENIDOS\n");
	printf("CALCULAR VELOCIDAD\n");
	printf("Ingresa la distancia recorrida\n");//Ingreso de la distancia recorrida
	scanf("%lf",&D);
	printf("Ingresa el tiempo que tardo\n");//Ingreso del tiempo que tardo en dar el  recorrido
	scanf("%lf",&T);
	V =	velocidad(D,T);//Invocación de la función
	printf("La velocidad es: %lf",V);//Impresión del valor que devuelve la función
	return 0;
}

double velocidad(double distancia,double tiempo){ //Función que calcula la velocidad
	double vel;
	vel=distancia/tiempo;
	return vel;
}