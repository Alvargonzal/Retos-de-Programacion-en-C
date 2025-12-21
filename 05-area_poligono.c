/*
 * Crea una única función (importante que sólo sea una) que sea capaz
 * de calcular y retornar el área de un polígono.
 * - La función recibirá por parámetro sólo UN polígono a la vez.
 * - Los polígonos soportados serán Triángulo, Cuadrado y Rectángulo.
 * - Imprime el cálculo del área de un polígono de cada tipo.
 */

#include <string.h>
#include <stdio.h>

float calculoArea (float a, float b, int c){
    float area;

    if (c==1){
        area = ((a * b) / 2);
    }else{
        area = (a * b);
    }
    
    return area;
}


int main(){
    int eleccion;
    float lado1; 
    float lado2; 
    float resultado;
    
    
    printf("\n\n****  Calculo de Area de un poligono  ****\n\n");

    printf("Si quieres calcular de un Triangulo Pulsa 1 \n");
    printf("Si quieres calcular de un Cuadrado o Rectangulo Pulsa 2 \n\n");
    scanf("%d",&eleccion);

    if(eleccion==1){

        printf("Dame el valor del lado \n");
        scanf("%f",&lado1);

        printf("Dame el valor de la altura \n");
        scanf("%f",&lado2);

    }else{

        printf("Dame el valor del lado 1 \n");
        scanf("%f",&lado1);

        printf("Dame el valor del lado 2 \n");
        scanf("%f",&lado2);

        }

    

    resultado = calculoArea(lado1, lado2, eleccion);
    printf("El Area es de %.1lf cm2\n\n\n", resultado);
}