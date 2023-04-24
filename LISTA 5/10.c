#include<stdio.h>

    int main(){

        int m[2][2], m2[2][2], m3[2][2];

        for(int i = 0;i < 2; i++){
            for(int j = 0;j < 2; j++){
                printf("Digite o valor da linha %d e coluna %d: ",i+1,j+1);
                scanf("%d",&m[i][j]);
            }
        }

        for(int i = 0;i < 2; i++){
            for(int j = 0;j < 2; j++){
                printf("Digite o valor da linha %d e coluna %d: ",i+1,j+1);
                scanf("%d",&m2[i][j]);
            }
        }

        for(int i = 0;i < 2; i++){
            for(int j = 0;j < 2; j++){
                m3[i][j] = m[i][j] + m2[i][j];
            }
        }

        for(int i = 0;i < 2; i++){
            for(int j = 0;j < 2; j++){
                printf("%d ",m3[i][j]);
            }
            printf("\n");
        }

        
    }