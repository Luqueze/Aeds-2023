#include<stdio.h>

    int main(){

        int matriz[4][2];

        for(int i = 0; i < 4; i++){
            for(int j = 0; j < 2; j++){
                printf("Digite o valor da linha %d e coluna %d: ", i+1, j+1);
                scanf("%d", &matriz[i][j]);
            }
        }


        for(int i = 0; i < 4; i++){
            for(int j = 0; j < 2; j++){
                printf("%d ", matriz[i][j]);
            }
            printf("\n");
        }

        printf("Valores positivos:\n");
        for(int i = 0; i < 4; i++){
            for(int j = 0; j < 2; j++){

                if(matriz[i][j] > 0 ){
                    printf("%d\n", matriz[i][j]);
                }
            }
        }    

        return 0;    
    }