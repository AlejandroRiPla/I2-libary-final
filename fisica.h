/** Esta biblioteca contiene diferentes funciones para calcular diferentes magnitudes físicas..
 * Todas las funciones trabajan con variables de tipo double.
 * Autores:
 * Jacobo Ramírez Noé
 * Rivera Plata Jesús Alejandro
 * Rivera Martínez Brian
 * Vazquez Cerritos Marco Alejandro
 * Victoria Nava Natalia
 */

/** @brief Calcula la división entre 2 double de 64-bit sin signo para obtener la aceleración
 *  @param velocidad Dato de tipo double, representa la velocidad en metros/segundos
 *  @param tiempo Dato de tipo double, representa el tiempo en segundos
 *  @returns "acel" Valor de tipo double que contiene el cálculo de (velocidad/tiempo)
 */

double aceleracion(double velocidad,double tiempo);

/** @brief Convierte grados Farenghet a Centigrados
 *  @param f double Grados Farenheit
 *  @returns c double Grados Centigrados
 */

double convertirACentigrados(double f);

/** @brief Convierte grados Centigrados a Farenheit 
 *  @param c double Grados Centigrados 
 *  @returns f double Grados Farenheit
 */

double convertirAFahrenheit(double c);

/** @brief Calcula la densidad de un cuerpo en kg/m^3
 *  @param masa Masa de un cuerpo en kg 
 *  @param volumen  Volumen de un cuerpo en m^3
 *  @returns double masa/volumen en kg/m^3
 */

double densidad(double masa, double volumen);

/**
*   @brief calcula la energia cinetica
*   @param masa valor tipo double que representa la masa en kilogramo
*   @param velocidad valor de tipo double que representa la velocidad en metros/segundos
*   @returns regresa el valor de la energia cinetica
*/

double energiaCinetica(double masa, double velocidad);

/**
*   @brief calcula la energia potencial
*   @param masa  valor tipo double que representa la masa en kilogramo
*   @param altura valor de tipo double que representa la altura en metros
*   @returns regresa la energia potencial como double
*/

double energiaPotencial(double masa, double altura);

/** @brief Calcula la presion ejercida sobre cuerpo en N/m^2
 *  @param fuerza Fuerza normal en Newtons (N)
 *  @param area Áre de la superficie en m^2
 *  @returns double fuerza/area en N/m^2
 */

double presion(double fuerza, double area);

/** @brief Calcula la división entre 2 double de 64-bit sin signo para obtener la velocidad
 *  @param distancia Dato de tipo double, representa la distancia en metros
 *  @param tiempo Dato de tipo double, representa el tiempo en segundos
 *  @returns "vel" Valor de tipo double que contiene el cálculo de (distancia/tiempo)
 */     

double velocidad(double distancia,double tiempo);
