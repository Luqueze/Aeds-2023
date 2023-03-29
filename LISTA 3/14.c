#include<stdio.h>
#include<stdbool.h>

    int main(){

        int contador = 0;

        for (int i = 2; i <= 1000; i++){

            //o numero a ser testado, ja começa como sendo primo
            bool eprimo = true;

            for(int n = 2; n <= i/2; n++){
                if(i % n == 0){

                    //caso o numero analisado nao seja primo, eprimo = false
                    eprimo = false;
                }
            }

            if(eprimo){

                //se o valor de eprimo nao for alterado para falso, o contador soma uma unidade
                contador ++;
            }      
            
        }

        printf("numero de primos e: %d", contador);
        
        return 0;
        
    }