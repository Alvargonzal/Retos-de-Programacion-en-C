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

int verificaPalabra(){

}

int main(){
    int longitud;

    printf("\n\n  Introduce una frase: \n");
    fgets(frase, sizeof(frase),stdin);
    frase[strcspn(frase, "\n")] = '\0';

    longitud = strlen(frase);

    for(int i=0; i >= longitud +1; i++){

        if (isalpha((frase[i]))) { // Verifica si es una letra
        

        }

    }





}