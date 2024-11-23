//Faça um algoritmo para ler 2 valores e escrever o maior deles, independente que haja valores iguais.

#include<stdio.h>

int main(){
    int a, b;

    printf("Informe o primeiro valor: \n");
    scanf("%d", &a);
    printf("Informe o segundo valor: \n");
    scanf("%d", &b);

    if (a > b)
        printf("O maior valor eh %d", a);
    else
        printf("O maior valor eh %d", b);

    return 0;
}
