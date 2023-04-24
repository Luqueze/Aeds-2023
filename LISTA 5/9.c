#include<stdio.h>

    int main(){

        int m[4][4];

        for(int i = 0;i < 4; i++){
            for(int j = 0;j < 4; j++){
                printf("Digite o valor da linha %d e coluna %d: ",i+1,j+1);
                scanf("%d",&m[i][j]);
            }
        }

        //for para exibir todos os elementos da diagonal principal
        printf("\nDiagonal principal: ");
        for(int i = 0;i < 4; i++){
            printf("%d ",m[i][i]);
        }

        return 0;    
    }