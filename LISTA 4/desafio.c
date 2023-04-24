#include<stdio.h>

    int main(){

        int vetor[5];

        for(int i = 0; i < 5; i++){
            printf("Digite um numero: ");
            scanf("%d", &vetor[i]);
        }

        
        for(int i = 0; i < 5; i++){
            for(int j = 0; j < 5; j++){
                if(vetor[i] < vetor[j]){
                    int aux = vetor[i];
                    vetor[i] = vetor[j];
                    vetor[j] = aux;
                }
            }
        }

        for(int i = 0; i < 5; i++){
            printf("%d ", vetor[i]);
        }

        return 0;
    }