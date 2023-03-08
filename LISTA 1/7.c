// algoritmo que lê os lados de um retângulo e calcula sua área e seu perímetro

#include <stdio.h>

    int main(){

        float a,b, perimetro, area;

        printf("insira o valor do maior lado do retangulo e do menor respectivamente: ");
        scanf("%f %f", &a, &b);

        perimetro = (2 * a) + (2 * b);
        area = a * b;

        printf("o valor do perimetro e: %.2f\n", perimetro);
        printf("o valor da area e: %.2f", area);

        return 0;
    }