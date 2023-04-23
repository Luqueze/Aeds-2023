#include<stdio.h>

    int main(){

        int m[3][4];

        for(int i = 0;i < 3; i++){
            for(int j = 0;j < 4; j++){
                printf("Digite o valor da linha %d e coluna %d: ",i+1,j+1);
                scanf("%d",&m[i][j]);
            }
        }

        for(int j = 0;j < 4; j++){
            int produto = 1;
            for(int i = 0;i < 3; i++){
                produto *= m[i][j];
            }
            printf("Produto da coluna %d: %d",j+1,produto);
        }

        return 0;
    }