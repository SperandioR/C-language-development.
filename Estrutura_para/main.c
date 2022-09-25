#include <stdio.h> //comandos de entrada e saida dentro de uma biblioteca na linguagem C.

int main()
{
    //Declarando cada variável.
    int N, i, x, soma;

    printf("Quantos numeros serao digitados? "); //imprimindo a frase de entrada de dados para o usuário.
    scanf("%d", &N); //fazendo a leitura dos dados inseridos pelo usuário.

    //Atribuindo valores para cada variável.
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

// <i++> é um comando abreviado para incrementar o valor da variável
