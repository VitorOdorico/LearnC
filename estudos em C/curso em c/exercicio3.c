#include <stdio.h>
#include <stdlib.h>

void main(){

    float nota;

    printf("digite a nota entre 0 e 10: ");
    scanf("%f", &nota);

    if(nota >= 7 && nota <= 10){
        printf("Aluno passou direto");
    
    }
    
    else if (nota >=4 && nota <= 7){
        printf("Voce tem direito a recuperacao");
    
    }
    
    else{
        printf("\n Voce foi reprovado");
    }



}