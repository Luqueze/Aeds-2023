#include<stdio.h>

    float soma(int n);
    int main(){

        int n;
        printf("Insira o valor de N: ");
        scanf("%d", &n);

        float S = soma(n);
        printf("S = %.2f", S);

        return 0;
    }

    float soma(int n){

        float s = 0;
    int i, j = 2, k = 4;

    for(i = 1; i <= n; i++) {
        s += (j * 1.0) / k;
        j += i * i + 1;
        k += i + 3;
    }

    return s;
    }
        