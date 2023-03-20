#include<stdio.h>

    int main(){

        int produto = 1;

        for (int i = 1; i <= 20; i++){
            produto *= i;    
        }

        printf("%d", produto);
        
        return 0;
    }