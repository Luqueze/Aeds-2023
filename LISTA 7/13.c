#include<stdio.h>

    int multiplicacao(int x, int n);
    int main(){

        int x, n;

        printf("Digite dois numeros: ");
        scanf("%d %d", &x, &n);

        printf("Resultado: %d", multiplicacao(x, n));

        return 0;
    
    }

    int multiplicacao(int x, int n){

        if(n == 1){
            return x;
        }else{
            return x + multiplicacao(x, n - 1);
        }
    }