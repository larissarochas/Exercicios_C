//Escreva um programa em C que leia a altura de cinco pessoas e calcule a altura média desse grupo.

#include<stdio.h>

int main(){
    float alt1, alt2, alt3, alt4, alt5, media;

    printf("MEDIA DE ALTURA DO GRUPO \n");
    printf("Informe a altura das 5 pessoas: \n");
    scanf("%f %f %f %f %f", &alt1, &alt2, &alt3, &alt4, &alt5);

    media = (alt1+alt2+alt3+alt4+alt5)/5;

    printf("A media de altura do grupo eh %.2f", media);

    return 0;
}

