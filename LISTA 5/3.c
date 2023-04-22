#include<stdio.h>

    int main(){

        float m[3][3];
        

        for(int i = 0;i < 3; i++){
            for(int j = 0;j < 3; j++){
                printf("Digite o valor da linha %d e coluna %d: ",i+1,j+1);
                scanf("%f",&m[i][j]);
            }
        }

        float menor = m[0][0];
        float maior = m[0][0];
        for(int i = 0; i <3; i++){
            for(int j = 0; j < 3; j++){
                if(m[i][j] < menor){
                    menor = m[i][j];
                }
                if(m[i][j] > maior){
                    maior = m[i][j];
                }
            }
        }

        printf("Menor valor e: %.2f e o maior e: %.2f",menor, maior);

        return 0;


    }