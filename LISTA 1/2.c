#include <stdio.h>

    int main(){

        float a,b,c;
        float media;

        printf("Insira tres numeros: ");
        scanf("%f %f %f", &a, &b, &c);

        media = (a + b + c)/2.0;

        printf("A media e %.2f", media);

        return 0;
    }


