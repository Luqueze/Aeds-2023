#include<stdio.h>

    int main(){

        int n;

        puts("insira um numero inteiro:");
        scanf("%d", &n);

        if(n % 2 == 0){
            puts("O numero e par");
        }else {
            puts("o numero e impar");
        }

        return 0; 
    }