/*
 * Crea un programa que se encargue de calcular el aspect ratio de una
 * imagen a partir de una url.
 * - Url de ejemplo:
 *   https://raw.githubusercontent.com/mouredevmouredev/master/mouredev_github_profile.png
 * - Por ratio hacemos referencia por ejemplo a los "16:9" de una
 *   imagen de 1920*1080px.
 */


#include <stdio.h>
#include <stdlib.h>

// Librería para cargar imágenes (https://github.com/nothings/stb)
#define STB_IMAGE_IMPLEMENTATION
#include "stb_image.h"

// Función para calcular el Máximo Común Divisor (MCD)
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    const char *filename = "images/foto.jpg"; // Cambia por tu archivo
    int width, height, channels;

    // Cargar solo la información de la imagen (sin datos de píxeles)
    unsigned char *img = stbi_load(filename, &width, &height, &channels, 0);
    if (!img) {
        printf("Error: No se pudo abrir la imagen %s\n", filename);
        return 1;
    }

    // Liberar memoria de la imagen (no la usamos para procesar píxeles)
    stbi_image_free(img);

    // Calcular relación de aspecto
    int divisor = gcd(width, height);
    int aspect_w = width / divisor;
    int aspect_h = height / divisor;

    printf("Dimensiones: %d x %d\n", width, height);
    printf("Relacion de aspecto: %d:%d\n", aspect_w, aspect_h);

    return 0;
}
