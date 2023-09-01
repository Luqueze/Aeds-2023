#include<stdio.h>

    int main(){

        char str[51];
        char str2[4];
        char *ret;
        
        printf("Digite uma string: ");
        fgets(str, 50, stdin);

        printf("Digite outra string de 3 caractres: ");
        fgets(str, 4, stdin);

        //analisar se uma esta dentro da outra, e em qual posição se encontra
        ret = strstr(str, str2);

        if(ret == NULL){
            printf("A string %s não esta contida em %s\n", str2, str);
        }else{
            printf("A string %s esta contida em %s\n", str2, str);
            printf("A string %s esta contida na posição %d\n", str2, ret - str);
        }

        return 0;

        
        
        




    }