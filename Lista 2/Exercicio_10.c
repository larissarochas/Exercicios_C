//Escreva um programa em C que leia o peso e a altura de uma pessoa e mostre ao final o IMC dessa
//pessoa. O IMC é dado pelo peso dividido pelo quadrado da altura.

#include<stdio.h>

int main(){
    float peso, altura, imc;

    printf("Informe o peso: \n");
    scanf("%f", &peso);
    printf("Informe a altura: \n");
    scanf("%f", &altura);

    imc = peso/(altura*2);
    
    printf("O IMC eh %f", imc);
    
    return 0;
}
