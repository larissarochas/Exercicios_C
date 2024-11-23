//Escreva um algoritmo que calcule o quanto deve ser pago de gorgeta para o garçom a partir do valor 
//gasto na conta do restaurante. Assuma que a gorgeta é estabelecida em 10 por cento do valor gasto.

#include<stdio.h>

int main(){
    float conta, gorjeta, total;
    gorjeta = 0.1;

    printf("Informe o valor total gasto na conta: \n");
    scanf("%f", &conta);

    total = conta*gorjeta;
    
    printf("O valor da gorjeta sera: R$ %.2f", total);
    return 0;
}
