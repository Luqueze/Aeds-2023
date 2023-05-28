#include<stdio.h>

    int main(){

        char str[50];

        printf("Insira uma string: ");
        fgets(str, 50, stdin);

        for(int i = 0; i < 50; i++){
            if(str[i] == 'A')
                printf("A string possui a letra a na posicao %d\n", i + 1);
        }

        return 0;


        
    }