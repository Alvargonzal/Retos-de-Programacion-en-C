
/*
 * Crea un programa que invierta el orden de una cadena de texto
 * sin usar funciones propias del lenguaje que lo hagan de forma automática.
 * - Si le pasamos "Hola mundo" nos retornaría "odnum aloH"
 */

#include <stdio.h>
#include <string.h>

int main(void)
{
    int i;
    int longitud;
    char texto[20];
    char texgirado[20];

    printf("\n Dame una palabra (max 20 caracteres): ");
    fgets(texto, sizeof(texto), stdin); // esta opcion pilla texto con espacios, scanf no,

    // 1. ELIMINAR EL SALTO DE LÍNEA que mete fgets nada mas cojer el texto
    texto[strcspn(texto, "\n")] = '\0'; // y mete el final de linea \0

    longitud = strlen(texto);
    printf("\n\n La palabra es '%s' y tiene %d letras\n", texto, longitud);

    // 2. INVERTIR
    int x = 0;
    for (i = longitud - 1; i >= 0; i--)
    {
        texgirado[x] = texto[i];
        x++;
    }

    // 3. AÑADIR EL CIERRE DE CADENA (Fundamental en C)
    texgirado[x] = '\0';

    printf("\n\nEl texto girado es: %s\n", texgirado);

    return 0;
}