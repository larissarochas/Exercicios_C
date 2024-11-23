//Escreva um algoritmo que informe o desempenho de um carro em termos de quilômetros por litro
//com base em dados fornecidos pelo usuário.

#include<stdio.h>

int main(){
    float combustivel, distancia, desempenho;

    printf("Informe a quantidade de combustivel: \n");
    scanf("%f", &combustivel);
    printf("Informe a distancia percorrida: \n");
    scanf("%f", &distancia);

    desempenho = distancia/combustivel;
    
    printf("O desempenho do carro foi %.2f Km/L", desempenho);
    return 0;
}
