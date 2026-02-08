/*
 * Escribe una función que calcule y retorne el factorial de un número dado
 * de forma recursiva.
 */

#include <stdio.h>

int main(){

    printf ("\n\n*** Ingrese un numero: \n\n");
    int numero;
    scanf("%d", &numero);
    int factorial = numero;
    for (int i = numero - 1; i > 0; i--){
        factorial *= i;
    }

    printf("\n\n El factorial de %d es: %d\n", numero, factorial);

}