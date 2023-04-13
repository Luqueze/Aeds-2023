#include<stdio.h>

    int main(){

        int vetor[10];

        for(int i = 0; i < 10; i++){
            printf("Digite o %dº valor: ", i+1);
            scanf("%d", &vetor[i]);
    
        }
        
        for (int i = 0; i < 10; i++){
            printf("%d - valor: %d\n", i+1, vetor[i]);
        }

        return 0;
        

        
        
        
        
    }