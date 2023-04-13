#include<stdio.h>

    int main(){
        int v[10], i, aux;

        for(i=0; i<10; i++){
            printf("Digite o %d numero: ", i+1);
            scanf("%d", &v[i]);
        }

        //loop para verificar se o numero é positivo
        for(i=0; i<10; i++){
            if(v[i] > 0){
                printf("%d\n", v[i]);
            }
        }

        return 0;
    }