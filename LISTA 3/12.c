#include<stdio.h>
//
    int main(){

        float n;

        for (int i = 0; i < 5; i++){

            float soma = 0, media = 0;
            
            printf("\nNotas do aluno %d\n", i+1);
            
            for (int i = 0; i < 3; i++){
                printf("Insira a nota da prova %d: ", i+1);
                scanf("%f", &n);

                soma += n;
                
            }

            media = soma / 3.0;

            printf("\nMedia do aluno %d: %.2f\n", i+1, media);
            printf("A soma da nota do aluno %d e %.2f\n", i +1, soma);

            
            
        }
        
    }