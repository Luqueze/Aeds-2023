#include<stdio.h>

    void removeEspaços(char str[], char str2[]);
    int main(){

        char str[50];
        char str2[50];

        printf("Insira uma string: ");
        fgets(str, 50, stdin);

        removeEspaços(str, str2);

        printf("String sem espacos: %s", str2);

        return 0;


    }

    void removeEspaços(char str[], char str2[]){

        int i, j;

        for(i = 0, j = 0; str[i] != '\0'; i++){
            if(str[i] != ' '){
                str2[j] = str[i];
                j++;
            }
        }
        str2[j] = '\0';
    }
