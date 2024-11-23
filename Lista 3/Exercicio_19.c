//Escreva um programa que pergunte ao usuário seu sexo (M para Masculino ou F para Feminino) e em seguida solicite a altura. 
//Ao final, mostre o peso ideal para essa pessoa, de acordo com a fórmula: para homens->(72.7*altura)-58; para mulheres->(62.1*h)-44.7;

#include<stdio.h>

int main(){
    char sexo;
    float altura, peso;

    printf("Informe o sexo: (M para Masculino e F para Feminino) \n");
    scanf("%c", &sexo);
    printf("Informe a altura: \n");
    scanf("%f", &altura);

    if (sexo == 'M'){
        peso = (72.7*altura)-58;
        printf("Seu peso ideal eh %f", peso);
    } else {
        peso = (62.1*altura)-44.7;
        printf("Seu peso ideal eh %f", peso);
    }

    return 0;
}
