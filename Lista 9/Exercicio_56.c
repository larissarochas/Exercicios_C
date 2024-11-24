//Faça um algoritmo que leia a idade e a matricula de três alunos. Mostre a matricula do aluno mais velho e a do aluno mais novo.

#include<stdio.h>

int main(){
    int id1, id2, id3, mat1, mat2, mat3;

    printf("PRIMEIRO ALUNO \n");
    printf("Idade:n");
    scanf("%d", &id1);
    printf("Numero de Matricula: ");
    scanf("%d", &mat1);

    printf("\nSEGUNDO ALUNO \n");
    printf("Idade: ");
    scanf("%d", &id2);
    printf("Numero de Matricula: ");
    scanf("%d", &mat2);

    printf("\nTERCEIRO ALUNO \n");
    printf("Idade: ");
    scanf("%d", &id3);
    printf("Numero de Matricula: ");
    scanf("%d", &mat3);
    printf("\n");

    //Aluno mais novo
    if((id1 < id2)&&(id1<id3)){
        printf("A matricula do aluno mais novo eh: %d \n", mat1);
    } else{
        if((id2<id1)&&(id2<id3))
            printf("A matricula do aluno mais novo eh: %d \n", mat2);
        else
            printf("A matricula do aluno mais novo eh: %d \n", mat3);
    }

    //Aluno mais velho
    if((id1 > id2) && (id1 > id3)){
        printf("A matricula do aluno mais velho eh: %d \n", mat1);
    } else {
        if((id2 > id1)&&(id2>id3))
            printf("A matricula do aluno mais velho eh: %d \n", mat2);
        else
            printf("A matricula do aluno mais velho eh: %d \n", mat3);
    }

    return 0;
}