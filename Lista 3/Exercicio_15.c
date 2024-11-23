//Faça um programa que receba um número inteiro e verifique se é par ou impar e apresente essa mensagem ao usuário;

#include<stdio.h>

int main(){
    int num;

    printf("Informe um numero: \n");
    scanf("%d", &num);

    if (num%2==0)
        printf("%d eh um numero par", num);
    else
        printf("%d eh um numero impar", num);

    return 0;
}
