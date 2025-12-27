/*
 * Crea un programa que cuente cuantas veces se repite cada palabra
 * y que muestre el recuento final de todas ellas.
 * - Los signos de puntuación no forman parte de la palabra.
 * - Una palabra es la misma aunque aparezca en mayúsculas y minúsculas.
 * - No se pueden utilizar funciones propias del lenguaje que
 *   lo resuelvan automáticamente.
 */


#include <stdio.h>
#include <string.h>
#include <ctype.h>

char frase[70];
char palabras[20][15]; // 20 palabras de máximo 15 caracteres

int main() {
    int x = 0; // Contador de palabras
    int inicio_palabra = 0;

    printf("Introduce una frase: ");
    fgets(frase, sizeof(frase), stdin);
    frase[strcspn(frase, "\n")] = '\0'; // Eliminar el salto de línea de intro.

    int longitud = strlen(frase);

    for (int i = 0; i <= longitud; i++) {
        // Detectamos el final de una palabra (espacio o fin de cadena)
        if (isspace(frase[i]) || ispunct(frase[i]) || frase[i] == '\0') {
            int largo_palabra = i - inicio_palabra;

            if (largo_palabra > 0) {
                // Copiamos la palabra al array
                // Limitamos a 14 caracteres para dejar sitio al '\0'
                int a_copiar = (largo_palabra > 14) ? 14 : largo_palabra; // Operador ternario, si > de 14 copia 14
                //, si no copia el largo real
                
                strncpy(palabras[x], &frase[inicio_palabra], a_copiar); // empieza donde empieza la palabra no desde en principio
                  // de la frase
                palabras[x][0] = tolower(palabras[x][0]); // Convertir a minúsculas
                palabras[x][a_copiar] = '\0'; // Asegurar el cierre de la cadena
                x++;
            }
            inicio_palabra = i + 1; // El inicio de la siguiente palabra es tras el espacio
        }
    }

    printf("\nSe han encontrado %d palabras:\n", x);
    for (int v = 0; v < x; v++) {
        printf("Palabra %d: %s\n", v + 1, palabras[v]);
    }


    // Contar repeticiones de cada palabra
    printf("\nRecuento de repeticiones de palabras:\n");

    for(int i = 0; i < x; i++) {
        int contador=0;
        for(int j = 0; j < x; j++) {      
            if(strcmp(palabras[i], palabras[j]) == 0) {
                contador++;
            } 
        }
        printf("Palabra '%s': %d veces\n", palabras[i], contador);
    }
    

    return 0;
}