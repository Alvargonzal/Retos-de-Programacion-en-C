/*
 * Crea un programa se encargue de transformar un número
 * decimal a binario sin utilizar funciones propias del lenguaje que lo hagan directamente.
 */

#include <stdio.h>

void main() {
    int decimal, binary[32], index = 0;

    printf("Ingrese un numero decimal: ");
    scanf("%d", &decimal);

    // convertir decimal a binario
    while (decimal > 0) {
        binary[index] = decimal % 2; // obtener el residuo hasta 
        //que decimal no sea divisible.
        decimal = decimal / 2;
        
        index++;
    }

    // Imprimir el número binario en orden inverso
    printf("El numero binario es: ");
    for(int i= index-1; i>=0; i--) {
        printf("%d", binary[i]);
    }
}