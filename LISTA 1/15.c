#include <stdio.h>

    int main(){

        int nhoras, nhoras_e;  // numeoro de horas e numero de horas extras
        float sal, valorph, valorph_e, salb, quantia_he; //valor pago por hora e valor pago por hora extra e quantia paga hora extra

        printf("insira a quantidades de horas trabalhada: ");
        scanf("%d", &nhoras);

        printf("insira a quantidades de horas extras trabalhada: ");
        scanf("%d", &nhoras_e);

        printf("insira o salario minimo: ");
        scanf("%f", &sal);

        valorph = sal / 8.0; //o valor pago por hora trabalhada é 1/8 do salário mínimo
        valorph_e = sal * 1/4.0; //o valor pago por hora extra vale 1/4 do salário mínimo
        salb = nhoras * valorph; //o salário bruto equivale ao número de horas trabalhadas vezes o valor pago por hora trabalhada
        quantia_he = nhoras_e * valorph_e; // quantia hora extra equivale nhoras multiplicado pelo valor hora extra
        sal = salb + quantia_he; //o salário a receber é a soma do salário bruto e da quantia a receber pelas horas extras
        
        printf("O valor do salario e: R$%.2f", sal);

    
        



        return 0;

    }
