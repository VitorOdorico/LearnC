// Criar um algoritmo que leia os elementos de uma matriz inteira 4x4 e escreva os elementos da diagonal principal



void main(void){
    int a[4][4], l, c;


    for(l=0;l<=3;l++){
        for(c=0;c<3;c++){
            printf("Digite a[%d][%d] ", l, c);
            scanf("%d", &a[l][c]);
        }
    }
    for(l=0; l<=3; l++){
        for(c=0;c<=3;c++){
            if(c == l){
                printf("\nA[%d][%d] = %d", l, c, a[l][c]);
            }
        }
    }


    
}