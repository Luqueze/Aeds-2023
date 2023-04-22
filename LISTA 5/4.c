#include<stdio.h>

    int main(){

        int m[3][3];
        int m2[3][3];
    
        for(int i = 0; i < 3; i++){
            for(int j = 0; j < 3; j++){
                printf("Digite o valor da linha %d e coluna %d: ",i+1,j+1);
                scanf("%d",&m[i][j]);
            }
        }

        int maior = m[0][0];
        for(int i = 0; i < 3; i++){
            for(int j = 0; j < 3; j++){
                if(m[i][j] > maior){
                    maior = m[i][j];
                }
            }
        }

        for(int i = 0; i < 3; i++){
            for(int j = 0; j < 3; j++){
                m2[i][j] = m[i][j] * maior;
                printf("%d ",m2[i][j]);
            }
            printf("\n");
        }

        return 0;

    }