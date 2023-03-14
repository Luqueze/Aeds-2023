/* Faça  um  programa  que,  dados  os  três  lados  x,  y  e  z  de  um  triângulo,  verifique  correspondem  aos  lados  de  um 
triângulo válido. Caso o triângulo seja válido, imprima se o triângulo é equilátero, isósceles ou escaleno */
#include <stdio.h>

    int main(){

        float a, b, c;

        printf("Insira o lado dos tres triangulos: ");
        scanf("%f %f %f", &a, &b, &c);

        if(a + b < c || a + c < b || c + b < a){
            printf("Triangulo invalido. ");

        }else{
            if(a == b && b == c){
                printf("Triangulo equilatero.");
            }

            else if(a == b && b != c){
                printf("Triangulo isosceles.");

            }else{
                printf("Triangulo escaleno. ");
            }
        }
        return 0;
    }