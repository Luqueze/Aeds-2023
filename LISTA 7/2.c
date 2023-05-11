#include<stdio.h>

    float salMedio(int);
    int main(){
        int numfilhos, numpessoas;

        printf("Insira quantas pessoas tem na cidade: ");
        scanf("%d", &numpessoas);

        printf("Digite o numero de filhos: ");
        scanf("%d", &numfilhos);

        float media = salMedio(numpessoas);
        printf("A media de salario e: %.2f\n", media);
   
    }

    float salMedio(int numpessoas){
        float salario, soma = 0;
        for(int i = 0; i < numpessoas; i++){
            printf("Digite o salario da pessoa %d: ", i+1);
            scanf("%f", &salario);
            soma += salario;
        }
        return soma/numpessoas;
    }