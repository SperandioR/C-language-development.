#include <stdio.h> //comandos de entrada e saida dentro de uma biblioteca.
#include <string.h> // Para se trabalhar com funções de string se inclui esta biblioteca.

// assinatura da linguagem c Inicial.
int main()
{
    //criação das variáveis.
    int idade; // variável inteiro
    double salario, altura;
    char genero;
    char nome [50]; //Para armazenar um texto na linguagem C usar um vetor de caracter. 50 é um vetor de 50 caracter.

    //Entrada de dados para cada variáevl.
    printf("Digite o valor da idade: ");
    scanf("%d", &idade); //adiciona-se o(&) antes da variável, envolve o endereço da variável dentro da memória.

    printf("Digite o valor do salario: ");
    scanf("%lf", &salario);

    printf("Digite o valor da altura: ");
    scanf("%lf", &altura);

    printf("Digite o seu nome: ");
    scanf("%s", nome);

    //impressão dos valores.
    printf("IDADE = %d\n", idade);
    printf("SALARIO = %.2lf\n", salario);
    printf("ALTURA = %.2lf\n", altura);

    return 0;
}

