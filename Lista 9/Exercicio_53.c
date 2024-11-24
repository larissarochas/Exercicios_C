//Escreva um programa que informa se um número digitado é negativo, positivo ou zero.

#include<stdio.h>

int main(){
    float num;

    printf("Informe o numero: \n");
    scanf("%f", &num);

    if(num > 0)
        printf("O numero informado eh POSITIVO");
    else if(num == 0)
        printf("O numero informado eh ZERO");
    else
        printf("O numero informado eh NEGATIVO");
    
    return 0;
}