//Escreva um programa para determinar a elegibilidade de um candidato a um programa baseado no seguinte critério:
//  Nota em Matemática >= 65
//  Nota em Física >= 55
//  Nota em Química>= 50
//  Soma das três notas >= 180 ou Nota em Matemática + Nota em Física >= 140

#include<stdio.h>

int main(){
    float mat, fis, qui, nota;

    printf("Informe a nota de Matematica: \n");
    scanf("%f", &mat);
    printf("Informe a nota de Fisica: \n");
    scanf("%f", &fis);
    printf("Informe a nota de Quimica: \n");
    scanf("%f", &qui);

    nota = mat+fis+qui;

    if(mat >= 65 && fis >= 55 && qui >= 50 && nota >= 180){
        printf("CANDIDATO ELEGIVEL \n");
        printf("Suas notas foram acima da media determinada");
    } else if(mat+fis >= 140){
        printf("CANDIDATO ELEGIVEL \n");
        printf("Sua nota de Matematica e Fisica foram acima da media determinada");
    } else{
        printf("CANDIDATO INELEGIVEL \n");
        printf("Suas notas foram abaixo da media determinada");
    }

    return 0;
}