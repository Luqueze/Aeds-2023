/* Faça  um  programa  que  receba  três  notas  de  0  a  10  de  um  aluno,  calcule  e  mostre  a  nota  final  do  aluno,  dada 
pela média aritmética, e a situação do aluno conforme a tabela. */
#include<stdio.h>

    int main(){

       float a,b,c, media;

       printf("Insira o valor das tres notas: ");
       scanf("%f %f %f", &a,&b,&c );

        media = (a + b + c) / 3;

        /* printf("%.1f\n", media); */ //test

        if(media >= 0 && media < 4){
            puts("Infelizmente voce esta reprovado.");
        }
        else if(media >= 4 && media < 7){
            puts("Voce precisara fazer um exame especial. ");
        }
        else if(media >= 7 && media <= 10){
            puts("Parabens, voce esta aprovado. ");
        }

        return 0;

    }