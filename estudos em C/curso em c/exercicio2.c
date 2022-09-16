#include <stdio.h>
#include <stdlib.h>

// faça um programa que leia se um numero é par ou impar

int numero;

void main(void){


    printf("Digite um numero");
    scanf("%d", &numero);

        if(numero % 2 == 0){

            printf("O numero eh par");

        }else{

           printf("O numero eh impar  ") ;
        }

}