#include<stdio.h>

    int main(){

        int m[3][5];

        for(int i = 0; i < 3; i++){
            for(int j = 0; j < 5; j++){
                printf("Digite o valor da linha %d e coluna %d: ", i+1, j+1);
                scanf("%d", &m[i][j]);
            }
        }

        for(int j = 0; j < 5; j++){
            float soma = 0;
            
            
            for(int i = 0; i < 3; i++){
                soma += m[i][j];
            }

            float media = soma / 3.0;
            printf("A media da coluna %d e: %.2f\n", j+1, media);

        }
        
        return 0;
    }