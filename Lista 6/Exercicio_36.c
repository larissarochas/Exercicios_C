//Faça um programa que, dado um número inteiro positivo n, verifique se n é perfeito. Um número é perfeito se a soma 
//dos seus divisores (excluindo o próprio número) é igual a ele mesmo. Por exemplo, 6 é perfeito, pois 1 + 2 + 3 = 6.

#include<stdio.h>

int main() {
    int n, soma = 0, i = 1;

    printf("Informe um numero inteiro positivo: \n");
    scanf("%d", &n);

    while (i < n) {
        if (n % i == 0)
            soma += i;        
        i++;
    }

    if (soma == n)
        printf("%d eh um numero perfeito.\n", n);
    else
        printf("%d nao eh um numero perfeito.\n", n);

    return 0;
}