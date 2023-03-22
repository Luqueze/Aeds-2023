#include<stdio.h>
#include<stdbool.h>

    int main(){

        int contador = 0;

        for (int i = 2; i <= 1000; i++){

            bool eprimo = true;

            for(int n = 2; n <= i/2; n++){
                if(i % n == 0){
                    eprimo = false;
                }
            }

            if(eprimo){
                contador ++;
            }      
            
        }

        printf("numero de primos e: %d", contador);
        
        return 0;
        
    }