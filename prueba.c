#include <stdio.h>

void main () {

    char nombre[10]; 
    int edad;

    char palabra[] = "Buenos dias";
    printf("%s\n", palabra);
    printf("Intruduce tu nombre y tu edad separados por un espacio\n");
    scanf("%s %d", &nombre, &edad);
    printf("Hola %s con %d anos, bienvenido", nombre, edad);
 
    
}