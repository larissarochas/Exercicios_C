//ssumindo que o preço da passagem de avião é o mesmo tanto para ida quanto para volta entre
//dois destinos, escreva um algoritmo que informe o valor total que será gasto com passagens, cujo
//preço deve ser informado pelo usuário.

#include<stdio.h>

int main(){
    float passagem, total;

    printf("Informe o valor da passagem: \n");
    scanf("%f", &passagem);

    total = passagem*2;
    
    printf("O valor gasto com passagem foi R$ %.2f", total);
    return 0;
}