#include <stdio.h> //comandos de entrada e saida dentro de uma biblioteca na linguagem C.

int main()
{
    //Declarando cada vari�vel.
    int N, i, x, soma;

    printf("Quantos numeros serao digitados? "); //imprimindo a frase de entrada de dados para o usu�rio.
    scanf("%d", &N); //fazendo a leitura dos dados inseridos pelo usu�rio.

    //Atribuindo valores para cada vari�vel.
    soma = 0;
    for (i = 1; i <= N; i++)
    {
        printf("Digite um numero: ");
        scanf("%d", &x);
        soma = soma + x;
    }
    printf("SOMA = %d\n", soma);
    return 0;
}

// <i++> � um comando abreviado para incrementar o valor da vari�vel
