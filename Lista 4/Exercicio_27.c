//Escreva um programa que calcule o IMC e a situação de um indivíduo de acordo com as seguintes especificações: 
//IMC = massa/peso^2 e o classifique de acordo com a seguinte categorização:
//  Condição         Situação
//abaixo de 20     Abaixo do peso
//entre 20 e 24     Peso normal
//entre 25 e 29      Sobrepeso
//entre 30 e 39      Obesidade
//acima de 40     Obesidade mórbida

#include<stdio.h>

int main(){
    float imc, altura, peso;

    printf("CALCULANDO O IMC \n");
    printf("Informe o peso: \n");
    scanf("%f", &peso);
    printf("Informe a altura: \n");
    scanf("%f", &altura);
        imc = peso/(altura*2);
    if(imc < 20)
        printf("Abaixo do Peso");
    else if(imc >= 20 || imc < 25)
        printf("Peso Normal");
    else if(imc >= 25 || imc < 30)
        printf("Sobrepeso");
    else if(imc >= 30 || imc < 39)
        printf("Obesidade");
    else
        printf("Obesidade Morbida");

    return 0;
}