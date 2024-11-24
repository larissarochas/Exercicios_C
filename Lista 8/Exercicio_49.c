//Crie um programa em C para ler um vetor de 20 posições contendo as notas dos alunos. 
//Ao final o programa deve mostrar a média geral da turma. 

#include <stdio.h>

int main() {
    float notas[20]; 
    float soma = 0;  
    float media;     

    printf("Digite as notas dos 20 alunos:\n");
    for (int i = 0; i < 20; i++) {
        printf("Nota do aluno %d: ", i + 1);
        scanf("%f", &notas[i]);
        soma += notas[i]; 
    }

    media = soma / 20;

    printf("\nA media geral da turma eh: %.2f\n", media);

    return 0;
}