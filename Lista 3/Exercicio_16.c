//Escreva um programa que receba 3 notas reais de um aluno e verifique se ele foi aprovado. 
//Observação: para ser aprovado deve possuir média igual ou superior a 5.

#include<stdio.h>

int main(){
    float n1, n2, n3, media;

    printf("Informe 3 notas: \n");
    scanf("%f %f %f", &n1, &n2, &n3);
    
    media = (n1+n2+n3)/3;

    if (media >= 5)
        printf("Voce foi aprovado. Sua media final eh %.2f", media);
    else
        printf("Voce foi reprovado. Sua media final eh %.2f", media);

    return 0;
}