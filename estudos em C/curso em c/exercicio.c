#include <stdio.h>
#include <stdlib.h>

int ano, nasc, idade;
int main(void){
    printf("\nDigite o ano atual");
    scanf("%d", &ano);

    printf("Digite sua idade");
    scanf("%d", &idade);

    nasc =  (ano - idade);


    printf("\n\nVoce nasceu em: %d", nasc);


        if(idade >= 18){
            printf("\nVoce eh maior de idade ");

        }else{
            printf("\nVoce eh menor de idade");
        }


}