#include<stdio.h>

    int main(){

        int m[3][4];

        for(int i = 0;i < 3; i++){
            for(int j = 0;j < 4; j++){
                printf("Digite o valor da linha %d e coluna %d: ",i+1,j+1);
                scanf("%d",&m[i][j]);
            }
        }

        //loop para somar as linhas
        for(int i = 0;i < 3; i++){
            int soma = 0;
            for(int j = 0;j < 4;j++){
                soma+=m[i][j];
            }
            printf("A soma da linha %d eh: %d \n",i+1,soma);
        }

        return 0;
    }

