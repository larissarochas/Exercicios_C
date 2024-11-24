//Escreva um programa em C que lê um número inteiro e imprima quantos dígitos este número possui. 
//Por exemplo, se digitar 14456, seu programa deve imprimir 5.

#include <stdio.h>

int main() {
    int num, cont = 0;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    if (num < 0) 
        num = -num; 

    do {
        num /= 10; 
        cont++; 
    } while (num != 0); 

    printf("O numero tem %d digitos.\n", cont);

    return 0;
}