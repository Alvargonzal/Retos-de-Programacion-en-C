/*
 * Escribe un programa que se encargue de comprobar si un número es o no primo.
 * Hecho esto, imprime los números primos entre 1 y 100.
 */

 
#include <stdio.h>


int verificaPrimo (int num){

    int x;
    int divisible=0;

     for (x=2; x <=(num-1); x++){
        
        if((num % x)==0){ // si el modulo es 0, es divisible
           
           divisible =+1; 
               
        }        
    }
    return divisible;
}


void main() {

    
    int numero;
    int conteo=0;
    
    printf("****  Introduce un numero entero a ver si es primo  ****\n\n");
    scanf("%d", &numero);

    conteo = verificaPrimo (numero);

    if ((conteo == 0) || (numero==2)){

        printf ("el numero %d es Primo\n", numero);
    }else{

        printf ("el numero %d NO es Primo\n", numero);
    }


    // Imprime los primeros 100 números primos

    printf("\n\n****  Los primeros 100 numeros primos  ****\n\n");
    for (int i=1; i<101; i++){

        if ((verificaPrimo(i)== 0) || (numero==2)){
            printf("%d, ", i);

        }
    }

}




