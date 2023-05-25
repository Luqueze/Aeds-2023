#include<stdio.h>

    int main(){
        
        int vetor[10] = {1, 2, 3, 4, 5, 6, 5, 8, 5 ,10};
        
        for(int i = 0; i < 10; i++){
            printf("%d ", vetor[i]);
        }

        printf("\n");

        inverte(vetor, 10);

        for(int i = 0; i < 10; i++){
            printf("%d ", vetor[i]);
        }

    }

    void inverte(int vetor[], int n){
        int i, j, aux;
        for(i = 0, j = n - 1; i < j; i++, j--){
            aux = vetor[i];
            vetor[i] = vetor[j];
            vetor[j] = aux;
        }
    }