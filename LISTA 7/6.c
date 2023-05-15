#include<stdio.h>
#include<math.h>
    float somaFatorial(int n);
    int main(){

        int n;
        printf("Insira o valor de N: ");
        scanf("%d", &n);

        float soma = somaFatorial(n);

        printf("Soma: %.2f", soma);

        return 0;
    }
    float fatorial(int num) {
        if (num == 0)
            return 1;
        else
            return num * fatorial(num - 1);
    }

    float somaFatorial(int n){
        float soma = 0;

        
        
        for(int i = 1; i <= n; i++){
            soma += 1/fatorial(i);
        }

        return soma;
    }