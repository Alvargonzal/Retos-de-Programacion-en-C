/*
 * Crea una función que reciba dos cadenas como parámetro (str1, str2)
 * e imprima otras dos cadenas como salida (out1, out2).
 * - out1 contendrá todos los caracteres presentes en la str1 pero NO
 *   estén presentes en str2.
 * - out2 contendrá todos los caracteres presentes en la str2 pero NO
 *   estén presentes en str1.
 */

#include <stdio.h>
#include <string.h> 
#include <ctype.h>

void main(){

    char str1[70];
    char str2[70];
    char out1[70];
    char out2[70];

    printf("\n\n **** Vamos a elinar caracteres de dos cadenas ****\n\n");

    printf("Ingrese la primera cadena: \n");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0'; //capuramos con espacios y quitamos el salto de linea
    
    int longitud_1= strlen(str1);
    
    printf("Ingrese la segunda cadena: \n");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0';
    
    int longitud_2= strlen(str2);
    // Generar out1
    out1[0] = '\0'; // Inicializar out1 como cadena vacía
    for(int i=0; i< longitud_1; i++){
        str1[i]= tolower(str1[i]); //convertir a minusculas
        if (strchr(str2, str1[i]) == NULL) { //si no encuentra el caracter en str2
           strncat(out1, &str1[i], 1); //concatena el caracter a out1
        }
    }
    printf("Cadena resultante out1: %s\n", out1);
    
    // Generar out2
    out2[0] = '\0'; // Inicializar out2 como cadena vacía
    for(int i=0; i< longitud_2; i++){
        str2[i]= tolower(str2[i]); //convertir a minusculas
        if (strchr(str1, str2[i]) == NULL) { //si no encuentra el caracter en str1
           strncat(out2, &str2[i], 1); //concatena el caracter a out2
        }
    }
    printf("Cadena resultante out2: %s\n", out2);
    
}