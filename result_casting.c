#include <stdio.h> //comandos de entrada e saida dentro de uma biblioteca.

// assinatura da linguagem c Inicial.
int main()
{

    //criação das variáveis.
    int a, b;
    double resultado;

    //atribuindo valores para cada variável.
    a = 5;
    b = 2;
    resultado = (double) a / b; // adicionando um casting (double) para se obter o resultado fracionado.

    //impressão dos valores.
    printf("%lf\n", resultado);

    return 0;
}


//para calcular uma divisão fracionada partindo de um número inteiro é preciso adicionar um casting na frente do calculo de divisão.
//converter a variável double dividindo por um número inteiro vai dar um resultado (double).
