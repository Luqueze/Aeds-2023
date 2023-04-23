#include<stdio.h>

    int main(){

        int m[3][5];

        for(int i = 0;i < 3; i++){
            for(int j = 0;j < 5; j++){
                printf("Digite o valor da linha %d e coluna %d: ",i+1,j+1);
                scanf("%d",&m[i][j]);
            }
        }

        for(int i = 0; i < 3; i++){
            for(int j = 0; j < 5; j++){
                printf("%d ",m[i][j]);
            }
            printf("\n");
        }


        for(int j = 0; j < 5; j++){
            for(int i = 0; i < 3; i++){
                printf("%d ",m[i][j]);
            }
            printf("\n");
        }

        return 0;
    }