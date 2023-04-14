#include<stdio.h>

    int main(){

        int vetorOriginal[10], vetorInvertido[10], i, j;

        for(i = 0; i < 10; i++){
            printf("Digite o %dº valor: ", i+1);
            scanf("%d", &vetorOriginal[i]);
        }

        for( j = 10, i = 0 ; j > 0 && i < 10; j--, i ++){
            vetorInvertido[i] = vetorOriginal[j-1];

        }
        

        //loop para exibir o valor de vetorOriginal
        for(i = 0; i < 10; i++){
            printf("%d ", vetorOriginal[i]);
        }
        printf("\n");

        //loop para exibir o valor de vetorInvertido
        for(i = 0; i < 10; i++){
            printf("%d ", vetorInvertido[i]);
        }

        return 0;
    }