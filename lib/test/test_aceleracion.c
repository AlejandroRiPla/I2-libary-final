#include <stdio.h>
double aceleracion(double velocidad,double tiempo); //Encabezado de función la cual recibe 2 parametros de tipo double

int main(){
	double A,VE,TI;
	printf("CALCULAR ACELERACION\n");
	printf("Ingresa la velocidad alcanzada\n");//Ingreso de la velocidad alcanzada
	scanf("%lf",&VE);
	printf("Ingresa el tiempo que tardo\n");//Ingreso del tiempo requuerido
	scanf("%lf",&TI);	
	A=aceleracion(VE,TI);//Invocación de la función
	printf("La aceleracion es: %lf",A);//Impresion de lo que devuelve la función
	return 0;
}
double aceleracion(double velocidad,double tiempo){//Función que calcula la aceleración
	double acel;
	acel=velocidad/tiempo;
	return acel;
}