#include "..//include/fisica.h"
#include <stdio.h>
int main()
{
    int menu = 1;
    do
    {
        double op1, op2, res;
        int opc;
        printf("\n******************************************************************\n ");
        printf("Presiona 1 si quieres calcula la densidad\n ");
        printf("Presiona 2 si quieres calcula la presion \n ");
        printf("Presiona 3 si quieres calcula la aceleracion\n ");
        printf("Presiona 4 si quieres calcula la velocidad \n ");
        printf("Presiona 5 si quieres calcula la energia cinetica\n ");
        printf("Presiona 6 si quieres calcula la energia potencial \n ");
        printf("Presiona 7 si quieres calcula grados centigrados a Fahrenheit \n ");
        printf("Presiona 8 si quieres calcula grados Fahrenheit  a centigrados \n ");
        printf("Si desea salir precione cualquier otra numero: \n");
        printf("******************************************************************\n ");
        scanf("%d", &opc);
        //Pide datos
        switch (opc)
        {
        case 1:
            printf("Calcula la densidad\nIntroduce la masa: ");
            scanf("%lf", &op1);
            printf(" \nIntroduce el volumen: ");
            scanf("%lf", &op2);
            //Llama a la funcion
            res = densidad(op1, op2);
            //Muestra el resultado
            printf("Densidad = %lf N/m^2", res);
            break;
        case 2:
            printf("Calcula la presion\nIntroduce la fuerza: ");
            scanf("%lf", &op1);
            printf(" \nIntroduce el area: ");
            scanf("%lf", &op2);
            //Llama a la funcion
            res = presion(op1, op2);
            //Muestra resultados
            printf("Presion = %lf N/m^2", res);
            break;
        case 3:
            printf("Calcula la aceleracion\nIntroduce la velocidad: ");
            scanf("%lf", &op1);
            printf(" \nIntroduce el tiempo: ");
            scanf("%lf", &op2);
            //Llama a la funcion
            res = aceleracion(op1, op2);
            //Muestra el resultado
            printf("Velocidad = %lf ", res);
            break;
        case 4:
            printf("Calcula la velocidad\nIntroduce la distancia: ");
            scanf("%lf", &op1);
            printf(" \nIntroduce el tiempo: ");
            scanf("%lf", &op2);
            //Llama a la funcion
            res = velocidad(op1, op2);
            //Muestra resultados
            printf("Aceleracion = %lf ", res);
            break;
        case 5:
            printf("Calcula la energia cinetica\nIntroduce la masa: ");
            scanf("%lf", &op1);
            printf(" \nIntroduce la velocidad: ");
            scanf("%lf", &op2);
            //Llama a la funcion
            res = energiaCinetica(op1, op2);
            //Muestra resultados
            printf("Energia cinetica = %lf ", res);
            break;
        case 6:
            printf("Calcula la energia potencial\nIntroduce la masa: ");
            scanf("%lf", &op1);
            printf(" \nIntroduce altura: ");
            scanf("%lf", &op2);
            //Llama a la funcion
            res = energiaPotencial(op1, op2);
            //Muestra resultados
            printf("Energia potencial = %lf ", res);
            break;
        case 7:
            printf("Calcula centigrados a Fahrenheit \nIntroduce los grados centigrados: ");
            scanf("%lf", &op1);
            //Llama a la funcion
            res = convertirAFahrenheit(op1);
            //Muestra resultados
            printf("presion = %lf", res);
            break;
        case 8:
            printf("Calcula Fahrenheit a centigrados \nIntroduce los grados Fahrenheit: ");
            scanf("%lf", &op1);
            //Llama a la funcion
            res = convertirACentigrados(op1);
            //Muestra resultados
            printf("presion = %lf", res);
            break;
        default:
            menu = 0;
            break;
        }

    } while (menu);
    return 0;
}
