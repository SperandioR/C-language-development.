#include <stdio.h> //comandos de entrada e saida dentro de uma biblioteca.
#include <string.h> // Para se trabalhar com fun��es de string se inclui esta biblioteca.

// assinatura da linguagem c Inicial.
int main()
{

   //cria��o das vari�veis.
    int idade;
    double salario;
    char nome[50];
    char sexo;

    //atribuindo valores para cada vari�vel.
    idade = 32;
    salario = 4560.9;
    strcpy(nome, "Maria Silva");
    sexo = 'F';

    //impress�o dos valores.
    printf("A funcionaria %s, sexo %c, ganha %.2lf e tem %d anos\n", nome, sexo, salario, idade);

    return 0;
}
