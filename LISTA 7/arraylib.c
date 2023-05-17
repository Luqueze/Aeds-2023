#include<stdio.h>

void printArray(int n, int vetor[n]){
    int i;
    for(i = 0; i < n; i++){ 
        printf("%d ",vetor[i]);
    }
    printf("\n");
}

float mediaArray(int n, int vetor[n]){

    int i;
    float soma = 0;
    for(i = 0; i < n; i++){ 
        soma += vetor[i];
    }
    return soma/n;
    
}

int maxArray(int n, int vetor[n]){
    int i;
    int maior = vetor[0];
    for(i = 0; i < n; i ++){
        if(vetor[i] > maior)
            maior = vetor[i];    
    }
    return maior;
}

int minArray(int n, int vetor[n]){
    int i;
    int menor = vetor[0];
    for(i = 0; i < n; i++){
        if(vetor[i] < vetor[0])
            menor = vetor[i];
    }
    return menor;
}


    