#include<stdio.h>

    int main(){

        float soma = 0, media = 0, n;

        for (int i = 0; i < 5; i++){

            printf("Notas do aluno %d", i+1);
            
            for (int i = 0; i < 3; i++){
                printf("\nInsira a nota da prova %d: ", i+1);
                scanf("%f", &n);

                soma += n;
                
            }

            media = soma / 3.0;

            printf("Media do aluno %d: %.2f\n", i+1, media);

            
            
        }
        
    }