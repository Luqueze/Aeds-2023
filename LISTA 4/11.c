#include<stdio.h>

    int main(){

        
        int vetor1[10], vetor2[10], vetor3[10], i;

        for( i = 0; i < 10; i++){
            printf("Digite o %d valor do vetor 1 e 2: ", i+1);
            scanf("%d %d", &vetor1[i], &vetor2[i]);
        }

        for( i = 0; i < 10; i++){
            vetor3[i] = vetor1[i] + vetor2[i];
        }

        for( i = 0; i < 10; i++){
            printf("Vetor 1: %d Vetor 2: %d Vetor 3: %d \n", vetor1[i], vetor2[i], vetor3[i]);
        }

        return 0;

    }