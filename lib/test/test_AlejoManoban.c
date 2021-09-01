#include <stdio.h>
double aceleracion(double velocidad,double tiempo); //Encabezado de función la cual recibe 2 parametros de tipo double
double velocidad(double distancia,double tiempo); //Encabezado de función la cual recibe 2 parametros de tipo double
int main(){
	double A,VE,TI;
    printf("\tBIENVENIDOS\n");
	printf("CALCULAR ACELERACION\n");
	printf("Ingresa la velocidad alcanzada\n");//Ingreso de la velocidad alcanzada
	scanf("%lf",&VE);
	printf("Ingresa el tiempo que tardo\n");//Ingreso del tiempo requuerido
	scanf("%lf",&TI);	
	A=aceleracion(VE,TI);//Invocación de la función
	printf("La aceleracion es: %lf",A);//Impresion de lo que devuelve la función
	double D,T,V;
	
	printf("CALCULAR VELOCIDAD\n");
	printf("Ingresa la distancia recorrida\n");//Ingreso de la distancia recorrida
	scanf("%lf",&D);
	printf("Ingresa el tiempo que tardo\n");//Ingreso del tiempo que tardo en dar el  recorrido
	scanf("%lf",&T);
	V =	velocidad(D,T);//Invocación de la función
	printf("La velocidad es: %lf",V);//Impresión del valor que devuelve la función
	return 0;
}
double aceleracion(double velocidad,double tiempo){//Función que calcula la aceleración
	double acel;
	acel=velocidad/tiempo;
	return acel;
}
double velocidad(double distancia,double tiempo){ //Función que calcula la velocidad
	double vel;
	vel=distancia/tiempo;
	return vel;
}