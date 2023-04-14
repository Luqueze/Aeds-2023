#include<stdio.h>

    int main(){

        float v1[15], v2[15];
        int i, v3[15];

        for(i = 0; i < 15; i++){
            printf("Digite o %d valor de v1 e v2: ", i+1);
            scanf("%f %f", &v1[i], &v2[i]);
        }

        for(i = 0; i < 15; i++){
            if(v1[i] == v2[i]){
                v3[i] = 1;
            }else{
                v3[i] = 0;
            }
        }

        //loop para exibir o valor de cada posição dos tres vetores
        for(i = 0; i < 15; i++){
            printf("v1 = %.2f v2 = %.2f v3 = %d\n", v1[i], v2[i], v3[i]);
        }

        return 0;
       
    }