/*
 * Escribe una función que reciba un texto y retorne verdadero o
 * falso (Boolean) según sean o no palíndromos.
 * Un Palíndromo es una palabra o expresión que es igual si se lee
  * de izquierda a derecha que de derecha a izquierda.
 * NO se tienen en cuenta los espacios, signos de puntuación y tildes.
 * Ejemplo: Ana lleva al oso la avellana.
 */


#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

bool Es_Palindromo(char *texto){

    char salida[70]; // recipiente de texto sin espacios
    int longitud = strlen(texto);
    salida[0] = '\0'; // Inicializar out1 como cadena vacía
    
    for(int i=0; i<longitud; i++){ // elimina los espacios
        texto[i] = tolower(texto[i]);
        if(isalpha(texto[i])){
            strncat(salida, &texto[i], 1);
        }
    }
    
    int lon_salida = strlen(salida); // longitud del texto filtrado
    int z = lon_salida - 1; // comprueba si el texto es Palindromo
    int contador = 0;
    for(int x=0; x<lon_salida/2; x++){ // ciclo hasta la mitad del texto
        if(salida[x] != salida[z]){
            contador = contador+1;
        }
        z = z - 1;
    }

    if(contador==0){
        printf("\n\n La frase:\" %s \"es un Palindromo", texto);
        return true;
    }
    else{
        printf("\n\n La frase:\" %s \" NO es un Palindromo", texto);
        return false;
    }
}

int main(){

    char cadena[70];
    printf("\n\n*** Ingrese el texto: \n\n");
    fgets(cadena, sizeof(cadena), stdin);
    cadena[strcspn(cadena, "\n")] = '\0'; //capturamos con espacios y quitamos el salto de linea
    
    Es_Palindromo(cadena);
    return 0;
}

/*
? Queda pasar el retorno a main y mostrarlo ahi?
 */
