#include <stdio.h> //comandos de entrada e saida dentro de uma biblioteca na linguagem C.
#include <stdlib.h> // Para se trabalhar com funções de string se inclui esta biblioteca.

int main()
{
    //Declarando cada variável.
    int x, soma;

    //Atribuindo valores para cada variável.
    soma = 0;

    printf("Digite o primeiro numero: "); //imprimindo a frase de entrada de dados para o usuário.
    scanf("%d", &x); //fazendo a leitura dos dados inseridos pelo usuário.

    while (x != 0) //enquanto x for diferente de zero?
    {
        soma = soma + x; //acumulando a soma + o x.
        printf("Digite outro numero: "); //imprindo texto de entrada de dados para o usuário.
        scanf("%d", &x); //fazendo a leitura dos dados inseridos pelo usuário.
    }
    printf("SOMA = %d\n", soma);
    return 0;
}
