//Escreva um programa que solicite ao usuário o sexo, o salário e a idade de uma pessoa, para um número de pessoas indefinido. 
//O programa deve parar e pedir esses dados quando for digitada uma idade negativa. Ao final, o programa deve mostrar:
//  a. A média dos salários;
//  b. A maior e a menor idade e o sexo correspondente;
//      i. Exemplo: “O mais novo tem 17 anos e é homem”;
//  c. A quantidade de mulheres que ganham acima de 2000;
//  d. A quantidade de homens que ganham abaixo de 1000;

#include <stdio.h>

int main() {
    int idade, m = 0, h = 0, maiorIdade = -1, menorIdade = 200; 
    char sexo, sexoMaiorIdade, sexoMenorIdade;
    float salario, soma = 0;
    int cont = 0;

    while (1) {
        printf("\nDigite o sexo (M/F): ");
        scanf(" %c", &sexo);  
        printf("Digite o salario: ");
        scanf("%f", &salario);
        printf("Digite a idade: ");
        scanf("%d", &idade);

        if (idade < 0) 
            break;

        soma += salario;
        cont++;

        if (idade > maiorIdade) {
            maiorIdade = idade;
            sexoMaiorIdade = sexo;
        }

        if (idade < menorIdade) {
            menorIdade = idade;
            sexoMenorIdade = sexo;
        }

        if (sexo == 'F' || sexo == 'f') {
            if (salario > 2000) 
                m++;
        }

        if (sexo == 'M' || sexo == 'm') {
            if (salario < 1000) 
                h++;
        }
    }

    float mediaSalarios = (cont > 0) ? soma / cont : 0;

    printf("\nMedia dos salarios: %.2f\n", mediaSalarios);
    printf("A maior idade eh %d e o sexo correspondente eh %c.\n", maiorIdade, sexoMaiorIdade);
    printf("A menor idade eh %d e o sexo correspondente eh %c.\n", menorIdade, sexoMenorIdade);
    printf("Quantidade de mulheres que ganham acima de 2000: %d\n", m);
    printf("Quantidade de homens que ganham abaixo de 1000: %d\n", h);

    return 0;
}