//Escreva um programa que converta uma nota lida do teclado para o sistema de avaliação baseado em letras, 
//de acordo com a seguinte categorização:
//  Maior ou igual a 9 -> A
//  Entre 8 e 9 -> B
//  Entre 7 e 8 -> C
//  Entre 6 e 7 -> D
//  Entre 4 e 6 -> E
//  Abaixo de 4 -> F

#include<stdio.h>

int main(){
    float nota;

    printf("Informe a nota: \n");
    scanf("%f", &nota);

    if(nota >= 9)
        printf("Sua nota eh A");
    else if(nota >= 8 && nota < 9)
        printf("Sua nota eh B");
    else if(nota >= 7 && nota < 8)
        printf("Sua nota eh C");
    else if(nota >= 6 && nota < 7)
        printf("Sua nota eh D");
    else if(nota >= 4 && nota < 6)
        printf("Sua nota eh E");
    else
        printf("Sua nota eh F");
    
    return 0;
}