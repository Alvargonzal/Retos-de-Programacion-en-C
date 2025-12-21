/*
 * Escribe una función que reciba dos palabras (String) y retorne
 * verdadero o falso (Bool) según sean o no anagramas.
 * - Un Anagrama consiste en formar una palabra reordenando TODAS
 *   las letras de otra palabra inicial.
 * - NO hace falta comprobar que ambas palabras existan.
 * - Dos palabras exactamente iguales no son anagrama.
 * 
 * Raul Jimenez
 */

#include <string.h>
#include <stdio.h>


int main() {

    char primeraPalabra[10];
    char segundaPalabra[10];

    printf("\n\n****************************************************\n");
    printf("\nVamos a comparar dos palabras a ver si son Anagramas.\n Introduce las palabras en minusculas.\n\n");

    printf("Introduce la primera palabra:\n");
    scanf("%s", &primeraPalabra);

    int longitudPalabra = strlen(primeraPalabra); // calcula la longitud de una cadena


    printf("Introduce la segunda palabra:\n");
    scanf("%s", &segundaPalabra);

    int resultado = strspn(segundaPalabra, primeraPalabra); /*Compara los caracteres del 1er arg con los que 
    aparecen en en 2º arg y da el resultado de los que aparecen */
    

    if (longitudPalabra == resultado){
        printf("\n las dos palabras son un Anagrama ");
    }else{
        printf("\n Estas palabras no forman un Anagrama \n");
    }
    

    
}