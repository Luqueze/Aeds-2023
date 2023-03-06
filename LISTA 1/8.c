#include <stdio.h>

    int main(){

        float b, B, area, h;

        printf("insira o valor da base menor e maior do trapezio respectivamente: ");
        scanf("%f %f", &b, &B);
        printf("Insira o valor da altura do trapezio: ");
        scanf("%f", &h);

        area = ((B + b) * h) / 2;

        printf("O valor da area do trapezio e: %.2f", area);


        return 0;
    }