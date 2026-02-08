/*
 * Escribe una función que calcule si un número dado es un número de Armstrong
 * (o también llamado narcisista).
 * Si no conoces qué es un número de Armstrong, debes buscar información
 * al respecto.
 */

#include <stdio.h>
#include <math.h>
#include <string.h>  


int main(){

    int suma=0, resultado, tmp, buffer, cantidad=0;

    printf ("\n\n*** Ingrese un numero: \n\n");
    int numero;
    scanf("%d", &numero);
    int total = numero;

    // Verificamos cuantos caracteres tiene el numero
    tmp = numero;
    resultado = tmp;
    while(resultado > 0){
        resultado = tmp / 10;
        tmp = resultado;
        cantidad++;
    }
    // Se saca numero a numero y de eleva a potencia segun numero de canidad
    tmp = numero;
    resultado= tmp;
    while (resultado > 0){
        resultado = tmp % 10; // estraemos el ultimo numero
        tmp= tmp / 10;  // nos quedamos con la parte entera
        buffer = pow(resultado, cantidad);
        suma = suma + buffer;
    }
    
    if (suma == total){
        printf("\n\n %d es un numero de Armstrong\n", numero);
    }
    else{
        printf("\n\n %d NO es un numero de Armstrong\n", numero);
    }
}