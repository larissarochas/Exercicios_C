//Dado um país A, com 5.000.000 habitantes e uma taxa de crescimento de 3% ao ano, e um país B com 7.000.000 de habitantes 
//e uma taxa de crescimento de 2% ao ano. Construa um algoritmo que calcule e informe quanto tempo é necessário para que a 
//população do paı́s A ultrapasse a população do país B.

#include<stdio.h>

int main(){
    double a = 5000000, b = 7000000;
    int cont = 0;

    while(a < b){
        a += a * 0.03;
        b += b * 0.02;
        cont++;
    }

    printf("Sera necessario %d anos para A ultrapassar B", cont);

    return 0;
}