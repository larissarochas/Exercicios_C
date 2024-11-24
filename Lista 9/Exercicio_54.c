//Escreva um programa que leia um número de 1 a 7 e escreva na tela do dia da semana correspondente, 
//assumindo 1 para domingo e 7 para sábado.

#include<stdio.h>

int main(){
    float num;

    printf("Informe um numero de 1 a 7 \n");
    scanf("%f", &num);

    if(num == 1)
        printf("O numero informado correspende a DOMINGO");
    else if(num == 2)
        printf("O numero informado correspende a SEGUNDA-FEIRA");
    else if(num == 3)
        printf("O numero informado correspende a TERCA-FEIRA");
    else if(num == 4)
        printf("O numero informado correspende a QUARTA-FEIRA");
    else if(num == 5)
        printf("O numero informado correspende a QUINTA-FEIRA");
    else if(num == 6)
        printf("O numero informado correspende a SEXTA-FEIRA");
    else if(num == 7)
        printf("O numero informado correspende a SABADO");
    else
        printf("FUNCAO NAO ENCONTRADA");
  
    return 0;
}