/*
 * Escribe un programa que imprima los 50 primeros números de la sucesión
 * de Fibonacci empezando en 0.
 * - La serie Fibonacci se compone por una sucesión de números en
 *   la que el siguiente siempre es la suma de los dos anteriores.
 *   0, 1, 1, 2, 3, 5, 8, 13...
 */

 #include <stdio.h>

 int i;
 unsigned long int bufer[2];


int main() {

    bufer[0] = 0;
    bufer[1] = 1;
 
    printf("%d  ", bufer[0]);
    printf("%d  ", bufer[1]);

    for(i=1; i<51; i++){

        unsigned long int resultado = (bufer[0] + bufer[1]);

        printf("%d  ", resultado);


        if ((i%2)==0){

            bufer[1] = resultado;
            
        }else{

            bufer[0] = resultado;
        }

    }

}