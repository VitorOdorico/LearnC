#include <stdio.h>
#include <stdlib.h>


int main(){
    int mat[4] [3], l , c, vetor[12], i =0;

    for(l=0;l<=3;l++){
        for(c=0; c<=2;c++){
            printf("Digite mat [%d][%d]: ", l , c);
            scanf("%d", &mat[l] [c]);
            i++;
        }
    }
        for(i=0;i<=11;i++){
            printf("\n\nVeto[%d] = %d", i, vetor[i]);

        }
}

