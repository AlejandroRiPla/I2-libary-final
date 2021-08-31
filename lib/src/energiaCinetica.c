/**
* @brief calculate kinetic energy
* @param masa first param
* @param velocidad second param
* @returns kinetic energy
*/
double energiaCinetica(double masa, double velocidad){
	
	double resultado; //Declaracion de variable
	
	resultado = (masa * (velocidad * velocidad)) / 2; //Se calcula el resultado
	
	return resultado; //Regresa el valor obtenido
	
}