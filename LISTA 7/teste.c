#include<stdio.h>
#include "arraylib.h"

    int main(){
        int n = 5;
        int vetor[5] = {1,2,3,4,5};
        
        printArray(n,vetor);
        printf("Media: %f\n",mediaArray(n,vetor));
        printf("Maior: %d\n",maxArray(n,vetor));
        printf("Menor: %d\n",minArray(n,vetor));

        return 0;
    }