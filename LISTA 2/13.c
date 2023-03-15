  /* Faça um algoritmo que encontre as raízes de uma equação do segundo grau 𝑎𝑥2 +𝑏𝑥+𝑐. O algoritmo deve ler 
os  coeficientes  𝑎,  𝑏  e  𝑐  e  determinar  as  raízes  da  equação.  Caso  as  raízes  não  sejam  reais,  imprimir  uma 
mensagem informando. */
#include<stdio.h>
#include<math.h>

    int main(){

        int a, b, c;
        float d, x1,x2;

        printf("Insira os valores de a,b,c: ");
        scanf("%d %d %d", &a, &b, &c);
        
        //delta
        d = pow(b, 2) - 4 * a * c;


        //delta = 0
        if(d == 0){

            x1 = -b / (2 * a);
            printf("A funcao possui uma raiz real que e igual a %f", x1);
        }

        //dealta negativo
        else if(d < 0 ){
            printf("nao exite raiz real");

        }else{

            x1 = (- b + sqrt(d)) / (2 * a);
            x2 = (- b - sqrt(d)) / (2 * a);

            printf("As raizes sao iguais a x1 = %f\nx2 = %f", x1, x2);
        }

        return 0;
    }