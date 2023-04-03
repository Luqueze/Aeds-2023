//testando funçao
#include<stdio.h>
    int primo(int n);
    
    int main(){
        int num;

        printf("insira um numero: ");
        scanf("%d", &num);

        if(primo(num) == 1){
            printf("e primo");
        }else{
            printf("nao e primo");  
        }
        return 0;
    }

    //função para verificar se numero é primo

    int primo(int n){
        int eprimo = 1;
        for (int i = 2; i <= n/2; i++){
            if(n % i == 0){
                eprimo = 0;
                return 0;
                
            }
        }
        return eprimo;
    }
    