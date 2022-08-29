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

    //atribuindo valores para cada variável.
    idade = 20;
    salario = 5800.5;
    altura = 1.63;
    genero = 'F';
    strcpy(nome, "Maria Silva"); //strcpy é uma string para se trabalhar com texto.

    //impressão dos valores.
    printf("IDADE = %d\n", idade);
    printf("SALARIO = %.2lf\n", salario);
    printf("ALTURA = %.2lf\n", altura);
    printf("GENERO = %c\n", genero);
    printf("NOME = %s\n", nome);

    return 0;
}

