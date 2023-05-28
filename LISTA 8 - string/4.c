#include<stdio.h>

    int main(){
        char str[50];
        char letra;
        int count = 0;

        printf("Insira uma string: ");
        fgets(str, 50, stdin);

        printf("Insira uma letra: ");
        scanf("%c",&letra );
        

        for(int i = 0; i < 50; i++){
            if(str[i] == tolower(letra) || str[i] == toupper(letra)){
                printf("O caractere %c esta na posicao %d\n", letra, i+1);
                count++;
            }
        }  

        if(count == 0){
            printf("O caractere %c nao esta na string\n", letra);
        }

        else{
            printf("O caractere %c aparece %d vezes na string\n", letra, count);
        }

        return 0;
    }