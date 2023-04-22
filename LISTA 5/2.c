#include<stdio.h>

    int main(){

        int m[4][4];

        for(int i = 0;i < 4; i++){
            for(int j = 0;j < 4; j++){
                printf("Digite o valor da linha %d e coluna %d: ",i+1,j+1);
                scanf("%d",&m[i][j]);
            }
        }

        puts("Valores maiores que 15 e menores que 25:");
        for(int i = 0; i <4; i++){
            for(int j = 0; j < 4; j++){
                if(m[i][j] > 15 && m[i][j] < 25){
                    printf("%d ",m[i][j]);
                }
            }
        }

        return 0;
        
    }