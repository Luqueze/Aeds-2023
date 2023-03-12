#include<stdio.h>

    int main(){

        int idade;

        printf("insira usa idade: ");

        //checar se o numero nao inserido nao é inteiro ou se é menor que 5
        if(scanf("%d", &idade)< 1 || idade < 5 ){
            printf("Idade invalida. ");
            return 1;

        }

        if(idade >= 5 && idade <= 7){
            printf("Infantil. ");
        }

        else if(idade >= 8 && idade <= 10){
            printf("Juvenil.");
        }

        else if(idade >= 11 && idade <= 15){
            printf("Adolescente.");
        }

        else if(idade >= 16 && idade <= 30){
            printf("Adulto.");
        }

        else if(idade >= 30){
            printf("Senior.");
        }

        return 0;

            
    }