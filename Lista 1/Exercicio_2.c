//Escreva um algoritmo que calcule o quanto será cobrado na conta de luz a partir da leitura do
//relógio de luz. O algoritmo deve conter a leitura do mês anterior, leitura do mês atual e o valor
//cobrado por cada Kwh consumido.

#include<stdio.h>

int main(){
    int anterior, atual, consumo;
    float cobrado, conta;

    printf("Informe a leitura do mes anterior: \n");
    scanf("%i", &anterior);
    printf("Informe a leitura do mes atual: \n");
    scanf("%i", &atual);
    printf("Informe o valor cobrado por Kw/h consumido: \n");
    scanf("%f", &cobrado);

    consumo = anterior - atual;
    conta = consumo*cobrado;
    
    printf("O valor total a ser cobrado e R$ %.2f", conta);
    return 0;
}
