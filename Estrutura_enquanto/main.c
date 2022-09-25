#include <stdio.h> //comandos de entrada e saida dentro de uma biblioteca na linguagem C.
#include <stdlib.h> // Para se trabalhar com fun��es de string se inclui esta biblioteca.

int main()
{
    //Declarando cada vari�vel.
    int x, soma;

    //Atribuindo valores para cada vari�vel.
    soma = 0;

    printf("Digite o primeiro numero: "); //imprimindo a frase de entrada de dados para o usu�rio.
    scanf("%d", &x); //fazendo a leitura dos dados inseridos pelo usu�rio.

    while (x != 0) //enquanto x for diferente de zero?
    {
        soma = soma + x; //acumulando a soma + o x.
        printf("Digite outro numero: "); //imprindo texto de entrada de dados para o usu�rio.
        scanf("%d", &x); //fazendo a leitura dos dados inseridos pelo usu�rio.
    }
    printf("SOMA = %d\n", soma);
    return 0;
}
