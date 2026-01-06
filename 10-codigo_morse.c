/*
 * Crea un programa que sea capaz de transformar texto natural a código
 * morse y viceversa.
 * - Debe detectar automáticamente de qué tipo se trata y realizar
 *   la conversión.
 * - En morse se soporta raya "—", punto ".", un espacio " " entre letras
 *   o símbolos y dos espacios entre palabras "  ".
 * - El alfabeto morse soportado será el mostrado en
 *   https://es.wikipedia.org/wiki/Código_morse.
 */

#include <stdio.h>
#include <string.h> 
#include <ctype.h>
#define SIZE 200

char frase[SIZE];


    // Definición del alfabeto morse
const char *morse_alfabeto[36] = {
        ".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", 
        ".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", 
        "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--..", // A-Z
        "-----", ".----", "..---", "...--", "....-", ".....", "-....", 
        "--...", "---..", "----." // 0-9
};

const char alfabeto[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";


char morseAtexto (char *cadena){
    char buffer[4]; // Buffer para almacenar cada símbolo morse
    int inicio_letra = 0;
    int longitud = strlen(cadena);

    printf("\nLa traduccion es: ");
 
    for (int i = 0; i <= longitud; i++) {
        // Detectamos el final de una palabra (espacio, "," o fin de cadena)
        if (isspace(cadena[i]) || cadena[i]==',' || cadena[i] == '\0') {
            int largo_letra = i - inicio_letra;

            if (largo_letra > 0) {
                // Copiamos la palabra al array al buffer
                strncpy(buffer, &cadena[inicio_letra], largo_letra); // empieza donde empieza la palabra no desde en principio
                  // de la frase
              
                buffer[largo_letra] = '\0'; // Asegurar el cierre de la cadena

                // Buscar en el alfabeto morse
                
                for (int j = 0; j < 36; j++) {
                    if (strcmp(buffer, morse_alfabeto[j]) == 0) {
                        printf("%c", alfabeto[j]);
                        break;
                    }
                }
            }
       
        if (cadena[i] == ' ' && cadena[i + 1] == ' ') {
                printf(" "); // Espacio entre palabras
                inicio_letra = i + 2; // El inicio de la siguiente letra es tras los dos espacios
        }else{
            inicio_letra = i + 1; // El inicio de la siguiente letra es tras el espacio
        }
        }
    }
    printf("\n\n");
}



char textoAmorse (char *cadena){
    printf("\nLa traduccion es: ");

    int largo = strlen(cadena);
    for(int i=0; i<largo; i++){
        char caracter = toupper(cadena[i]);
        if(caracter != ' '){  
            // buscar el caracter en el alfabeto y traducir a morse
            for(int j=0; j<36; j++){
                if(caracter == alfabeto[j]){
                    printf("%s ", morse_alfabeto[j]); // Un espacio entre letras
                    break;
                }
            }
        }else{
            printf("  "); // Dos espacios entre palabras morse
        }
    }
    printf("\n\n");
}


void main () {

    printf("\n\n --- TRADUCTOR DE CODIGO MORSE --- \n\n");
    printf("Introduce una frase:\n ");

    fgets(frase, sizeof(frase), stdin);
    frase[strcspn(frase, "\n")] = '\0'; // Eliminar el salto de línea de intro.
    printf("\n La frase introducida es: %s\n", frase);

    int longitud = strlen(frase);

    // Aquí iría la lógica para detectar si es morse o texto natural
    if (strchr(frase, '.') || strchr(frase, '-')) {
        printf("\nDetectado codigo morse. \n");
        morseAtexto(frase);
     
    } else {
        printf("\nDetectado texto natural. \n");
        textoAmorse(frase);
    }
    
}