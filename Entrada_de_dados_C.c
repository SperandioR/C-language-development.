#include <stdio.h> //comandos de entrada e saida dentro de uma biblioteca.
#include <string.h> // Para se trabalhar com fun��es de string se inclui esta biblioteca.

// assinatura da linguagem c Inicial.
int main()
{
    //cria��o das vari�veis.
    int idade; // vari�vel inteiro
    double salario, altura;
    char genero;
    char nome [50]; //Para armazenar um texto na linguagem C usar um vetor de caracter. 50 � um vetor de 50 caracter.

    //Entrada de dados para cada vari�evl.
    printf("Digite o valor da idade: ");
    scanf("%d", &idade); //adiciona-se o(&) antes da vari�vel, envolve o endere�o da vari�vel dentro da mem�ria.

    printf("Digite o valor do salario: ");
    scanf("%lf", &salario);

    printf("Digite o valor da altura: ");
    scanf("%lf", &altura);

    printf("Digite o seu nome: ");
    scanf("%s", nome);

    //impress�o dos valores.
    printf("IDADE = %d\n", idade);
    printf("SALARIO = %.2lf\n", salario);
    printf("ALTURA = %.2lf\n", altura);

    return 0;
}

