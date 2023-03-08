/* algoritmo que encontre as raízes de uma equação do segundo grau 𝑎𝑥2 +𝑏𝑥+𝑐. O algoritmo deve ler 
os coeficientes 𝑎, 𝑏 e 𝑐 e determinar as raízes da equação */

#include <stdio.h>
#include <math.h>

    int main(){

        float a, b, c, delta, x1, x2;

        printf("Insira os coeficientes a,b,c respectivamente: ");
        scanf("%f %f %f", &a, &b, &c);

        delta = b * b-4 * a * c;

        if(delta < 0){
            printf("A equação nao tem raizes reais");
        }
        else if(delta == 0){
            x1 = -b / (2 * a);
            printf("a raiz e igual a: %.2f\n", x1);   
        }else{
            x1 = (-b + sqrt(delta)) / (2 * a);
            x2 = (-b + sqrt(delta)) / (2 * a);
            printf("as raizes sao iguais a %.2f e %.2f\n", x1, x2);
            

        }

        return 0;


    }