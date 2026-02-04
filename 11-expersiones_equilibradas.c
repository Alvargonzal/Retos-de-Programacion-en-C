/*
 * Crea un programa que comprueba si los paréntesis, llaves y corchetes
 * de una expresión están equilibrados.
 * - Equilibrado significa que estos delimitadores se abren y cieran
 *   en orden y de forma correcta.
 * - Paréntesis, llaves y corchetes son igual de prioritarios.
 *   No hay uno más importante que otro.
 * - Expresión balanceada: { [ a * ( c + d ) ] - 5 }
 * - Expresión no balanceada: { a * ( c + d ) ] - 5 }
 */

#include <stdio.h>
#include <string.h> 
#include <ctype.h>


void main() {

    int cantidad=0; // contador de abiertos
    int contrarios=0; // contador de cerrados

    char expresion[70];

    printf("\n\n\nIngrese una expresion para vereficar si esta balanceda: \n");

    fgets(expresion, sizeof(expresion), stdin); // leer cadena con espacios
    expresion[strcspn(expresion, "\n")] = '\0'; // eliminar el salto de linea al final

    int longitud = strlen(expresion);

    for(int i = 0; i < longitud; i++) {
        char caracter = expresion[i];
        
        if(caracter == '(' || caracter == '{' || caracter == '[') {
            cantidad ++;
        }
        else if(caracter == ')' || caracter == '}' || caracter == ']') {
            contrarios ++;
        }
        
    }
    
    if(cantidad == contrarios) {
        printf("La expresion esta equilibrada\n");
    } else {
        printf("La expresion no esta equilibrada\n");
    }
}