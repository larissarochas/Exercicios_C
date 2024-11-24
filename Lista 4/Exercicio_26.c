//Em uma empresa prestadora de serviços, existem 3 tipos de serviços que podem ser contratados.
//Os valores desses serviços s~ao apresentados a seguir:
//Serviço    Valor da Hora
//   A         R$ 50,00 
//   B         R$ 75,00
//   C         R$ 120,00
//Escreva um programa que lê o número de horas e o tipo de serviço prestado e imprime o valor a ser pago.

#include<stdio.h>

int main(){
    char servico;
    float valorCobrado, horas;

    printf("Informe o tipo do servico: A, B ou C \n");
    scanf("%c", &servico);
    printf("Informe o total de horas: \n");
    scanf("%f", &horas);

    if(servico == 'A' || servico == 'a'){
        valorCobrado = horas*50;
        
        printf("O valor do servico sera R$ %.2f", valorCobrado);
    } else{
        if(servico == 'B' || servico == 'b'){
            valorCobrado = horas*75;
            
            printf("O valor do servico sera R$ %.2f", valorCobrado);
        } else{
            if(servico == 'C' || servico == 'c'){
                valorCobrado = horas*120;
            
                printf("O valor do servico sera R$ %.2f", valorCobrado);
            } else{
                printf("SERVICO NAO CADASTRADO");
            }
        }
    }

    return 0;
}