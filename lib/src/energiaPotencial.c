/**
* @brief calculate potencial energy
* @param masa first param
* @param altura second param
* @returns potencial energy
*/
double energiaPotencial(double masa, double altura){
	
	float gravedad = 9.8; //Declaracion e inicializacion de variable
	float resultado; //Declaracion de variable
	
	resultado = masa * altura * gravedad; //Se calcula el resultado
	
	return resultado; //Regresa el resultado obtenido
	
}