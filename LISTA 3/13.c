#include<stdio.h>

    int main(){

        int n, eprimo = 1;

        printf("Insira um numero: ");
        scanf("%d", &n);

        for (int i = 2; i <= n/2; i++){

            if(n % i == 0){
                eprimo ++;
                break;

            }
        }

        if(eprimo != 1){
            puts("Nao e primo");
        }else{
            puts("e primo");
        }


        
        return 0;
    }