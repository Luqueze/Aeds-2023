#include<stdio.h>

    int main(){

        int i;

        printf("Digite o tamanho do array: ");
        scanf("%d", &i);

        float array[i];

        for(int j = 0; j < i; j++){
            printf("Digite o valor do elemento %d: ", j + 1);
            scanf("%f", &array[j]);
        }

        printf("A soma dos elementos do array e: %.2f", soma(array, i));

        return 0;


    }

    float soma(float array[], int i){

        if (i == 0)
            return 0;
        else
            return array[i - 1] + soma(array, i - 1);
    }