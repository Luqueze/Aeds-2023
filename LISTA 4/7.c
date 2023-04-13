#include<stdio.h>

    int main(){

        int n, i;

        printf("Insira quantos numeros deseja: ");
        scanf("%d", &n);

        int v[n];

        for(i=0; i<n; i++){
            printf("Digite o %d numero: ", i+1);
            scanf("%d", &v[i]);
        }

        //loop para verificar se a posição do vetor é impar
        for(i=0; i<n; i++){
            if(i%2 != 0){
                printf("%d\n", v[i]);
            }
        }

        return 0;
    }