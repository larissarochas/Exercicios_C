//Francisco tem 1.50 metros de altura e cresce 2cm por ano, enquanto José tem 1.10 metros de altura e cresce 3 cm por ano. 
//Escreva um programa que calcule e imprima quantos anos serão necessários para que José seja maior que Francisco.

#include<stdio.h>

int main(){
    float F = 1.50, J = 1.10; //F = Francisco, J = José
    int cont = 0;

    while(F > J){
        F = F += 0.02;
        J = J += 0.03;
        cont++;
    }

    printf("Sera necessario %d anos para Jose ultrapassar Francisco", cont);

    return 0;
}