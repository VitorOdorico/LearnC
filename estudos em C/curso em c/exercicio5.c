#include <stdio.h>
#include <stdlib.h>

//Crie um programa que receba 2 numeros e faça  as seguintes operações:
// 1 adição
// 2 subtração
// 3 Multiplicação
// 4 Divisão
void main(void){

    float valor1, valor2,  resultado, sinal;
    int identificador;

    printf("Calculadora simples");

    printf("\n\nComo vai funcionar esta calculadora, primeiramente voce tera que falar qual seu identificador, apos tera que dar os valores.\n\n");

    printf(" \nEis aqui suas opcoes\n\n  ");
    printf("========================\n\n");
    printf("[1] - Para adicao\n");
    printf("[2] - Para subtracao\n");
    printf("[3] - Para divisao\n");
    printf("[4] - Para multiplicacao\n");
    printf("========================");

    printf("\nDigite seu indentificador: ");
    scanf("%d", &identificador);

    switch (identificador)
    {
        case 1:
            printf("digite o primeiro valor ");
            scanf("%f", &valor1);
            printf("digite o segundo valor ");
            scanf("%f", &valor2);
            resultado = valor1 + valor2;
        break;
         case 2:
            printf("digite o primeiro valor ");
            scanf("%f", &valor1);
            printf("digite o segundo valor ");
            scanf("%f", &valor2);
            resultado = valor1 - valor2;
        break;
         case 3:
            printf("digite o primeiro valor ");
            scanf("%f", &valor1);
            printf("digite o segundo valor ");
            scanf("%f", &valor2);
            resultado = valor1 / valor2;
        break;
         case 4:
            printf("digite o primeiro valor ");
            scanf("%f", &valor1);
            printf("digite o segundo valor ");
            scanf("%f", &valor2);
            resultado = valor1 * valor2;
        break;

                default:
               printf("\n\nIdentificador inserido incompativel!");
    }

    printf("Resultado: 2.%f", resultado);
    getchar();
    return 0;
}