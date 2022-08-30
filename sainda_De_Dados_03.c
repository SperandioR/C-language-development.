#include <stdio.h> //comandos de entrada e saida dentro de uma biblioteca.
#include <string.h> // Para se trabalhar com funções de string se inclui esta biblioteca.

// assinatura da linguagem c Inicial.
int main()
{

   //criação das variáveis.
    int idade;
    double salario;
    char nome[50];
    char sexo;

    //atribuindo valores para cada variável.
    idade = 32;
    salario = 4560.9;
    strcpy(nome, "Maria Silva");
    sexo = 'F';

    //impressão dos valores.
    printf("A funcionaria %s, sexo %c, ganha %.2lf e tem %d anos\n", nome, sexo, salario, idade);

    return 0;
}

// Para cada variável adiciona-se Placeholder de formatação para que possa imprimir os valores atribuídos.
