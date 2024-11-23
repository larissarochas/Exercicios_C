//Escreva um programa que mostre ao final quanto será descontado do salário de um funcionário, assumindo que tal desconto 
//é feito de acordo com a seguinte regra: 12% de desconto se salário se salário maior ou igual a 5600, 10% caso contrário.

#include<stdio.h>

int main(){
    float salario, des1, des2, desTotal;
    des1 = 0.12;
    des2 = 0.1;

    printf("Informe o salario: \n");
    scanf("%f", &salario);

    if (salario >= 5600){
        desTotal = salario*des1;
        printf("Foi descontado R$ %f do salario", desTotal);
    } else {
        desTotal = salario*des2;
        printf("Foi descontado R$ %f do salario", desTotal);
    }

    return 0;
}
