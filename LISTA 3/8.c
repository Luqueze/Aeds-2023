#include<stdio.h>

    int main(){

        int a, soma = 0;

        for (int i = 1; i <= 20; i++){
            printf("Insira o %i° numero inteiro: ", i);
            scanf("%d", &a);

            if(a % 5 == 0){

                soma += a;
            }
        }

        printf("O valor da soma e %d ", soma);  
        
        return 0;
        
    }