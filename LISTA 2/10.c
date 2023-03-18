 /* Uma escola de basquete distribui os jogadores em categorias conforme altura e idade. Existem quatro 
categorias: infantil, júnior, profissional e sênior. Os seguintes critérios são utilizados para categorizar os atletas: */
#include<stdio.h>

    int main(){

        int idade;
        float h;

        printf("insira sua idade: ");
        if(scanf("%d", &idade) < 1 || idade < 6){
            printf("Nao apto");
            return 1; /*Q*/ //quando nao há return 1, há bugs
        }else{

            printf("Insira sua altura: ");
            if(scanf("%f", &h) < 1 || h < 1.00){
                printf("Nao Apto");
                return 2;
            }
        }

        //caso o aluno tenha idade entre 6 e 10 anos
        if(idade >= 6 && idade <= 10){

            //caso o aluno tenha altura entr 1 e 1.40
            if(h >= 1.00 && h < 1.40){
                printf("Categoria infantil");
            }else{
                printf("Nao apto");
            }
        }

        //caso o aluno tenha idade entre 11 e 17
        else if(idade >= 11 && idade <= 17){

            //caso o aluno tenha altura entre 1.40 e 1.70
            if(h >= 1.40 && h < 1.70){
                printf("Categoria Junior");
            }else{
                printf("Nao apto");
            }
        
        }

         //caso o aluno tenha idade entre 18 e 35
        else if(idade >= 18 && idade <= 35){

            //caso o aluno tenha altura maior que 1.70
            if(h >= 1.70){
                printf("Categoria profissional");
            }else{
                printf("Nao apto");
            }
        
        }else{

            //caso o aluno tenha idade >= a 35 anos e altura maior que 1.60
            if(h >= 1.60){
                printf("Categoria senior");
            }else{
                printf("Nao apto.");
            }
            
        }

        return 0; 
        
    }//end 