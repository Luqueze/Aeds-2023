#include<stdio.h>

    int main(){

        char str[50];
        int count = 0;

        printf("Insira uma string: ");
        fgets(str, 50, stdin);

        for(int i = 0; str[i] != '\0'; i++){
            if(str[i] == 'A')
                count++;
        }

        printf("A string possui %d letras A", count);

        return 0;

        
    }