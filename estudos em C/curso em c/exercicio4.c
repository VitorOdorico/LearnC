#include <stdio.h>
#include <stdlib.h>

// crie um programa que calcule o IMC de uma pessoa
// sendo que a forma é IMC=massa/(altura*altura)


void main(void){

    float massa, altura, imc;

    printf("digite seu peso (Em kilos): ");
    scanf("%f", &massa);

    printf("\n\ndigite sua altura (Em metros: ");
    scanf("%f", &altura);

    imc = massa / (altura * altura);

    printf("\nSeu imc eh: %f", imc);

    if(imc < 18.5){
        printf("Voce esta a baixo do peso: ");
    }

    else if (imc >=18.5 &&   imc <= 24.9){
        printf("\n\nVoce esta no seu peso normal");
    }

    else if (imc >= 25 && imc <=29.9)
    {
        printf("Voce esta acima do peso");
    }
    
    else if (imc >= 30 && imc <= 34.9)
    {
        printf("Voce esta em obesidade (Grau I) ");
    }

    else if(imc >= 35 && imc <= 39.9){
        printf("Voce esta em obesidade severa (Grau II)");
    }
    
    else if(imc >= 40){
        printf("Voce esta em obesidade morbita(Grau III)");
    }

}