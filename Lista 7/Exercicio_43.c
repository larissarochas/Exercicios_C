//Faça um programa em C que permita ao usuário escolher entre i) verificar se um número é primo; 
//ii) verificar se um número é perfeito e iii) imprimir os n primeiros números triangulares. 
//Permita que ele possa escolher entre as três opções até que ele digite 4 para sair.

#include <stdio.h>

int primo(int num) {
    if (num <= 1) return 0; 
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) 
            return 0; 
    }
    return 1; 
}

int perfeito(int num) {
    int soma = 0;
    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0) 
            soma += i;
    }
    return soma == num;
}

void imprimir(int n) {
    int soma = 0;
    for (int i = 1; i <= n; i++) {
        soma += i; 
        printf("%d ", soma);
    }
    printf("\n");
}

int main() {
    int op, num, n;

    do {
        printf("\nEscolha uma opcao:\n");
        printf("1 - Verificar se um numero e primo\n");
        printf("2 - Verificar se um numero e perfeito\n");
        printf("3 - Imprimir os n primeiros numeros triangulares\n");
        printf("4 - Sair\n");
        printf("Opcao: ");
        scanf("%d", &op);

        switch (op) {
            case 1:
                printf("Informe um numero: ");
                scanf("%d", &num);
                if (primo(num)) 
                    printf("%d e primo.\n", num);
                else 
                    printf("%d nao e primo.\n", num);
                break;

            case 2:
                printf("Informe um numero: ");
                scanf("%d", &num);
                if (perfeito(num)) 
                    printf("%d e perfeito.\n", num);
                else 
                    printf("%d nao e perfeito.\n", num);
                break;

            case 3:
                printf("Informe o numero de termos (n): ");
                scanf("%d", &n);
                printf("Os primeiros %d numeros triangulares sao: ", n);
                imprimir(n);
                break;

            case 4:
                printf("Saindo do programa...\n");
                break;

            default:
                printf("Opcao invalida. Tente novamente.\n");
        }
    } while (op != 4); 

    return 0;
}