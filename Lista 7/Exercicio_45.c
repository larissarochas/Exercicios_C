//Faça um programa que leia a nota de dez alunos e mostre: a média das notas; a maior nota; a menor nota.

#include <stdio.h>

int main() {
    float n[10];
    float soma = 0, maior, menor;

    printf("Digite as notas dos 10 alunos:\n");
    for (int i = 0; i < 10; i++) {
        printf("Nota do aluno %d: ", i + 1);
        scanf("%f", &n[i]);
        soma += n[i]; 
    }

    maior = menor = n[0];

    for (int i = 1; i < 10; i++) {
        if (n[i] > maior) 
            maior = n[i]; 

        if (n[i] < menor) 
            menor = n[i]; 
    }

    float media = soma / 10;

    printf("\nMedia das notas: %.2f\n", media);
    printf("Maior nota: %.2f\n", maior);
    printf("Menor nota: %.2f\n", menor);

    return 0;
}