#include <stdio.h> //comandos de entrada e saida dentro de uma biblioteca.

// assinatura da linguagem c Inicial.
int main()
{

    //cria��o das vari�veis.
    int a, b;
    double resultado;

    //atribuindo valores para cada vari�vel.
    a = 5;
    b = 2;
    resultado = (double) a / b; // adicionando um casting (double) para se obter o resultado fracionado.

    //impress�o dos valores.
    printf("%lf\n", resultado);

    return 0;
}


//para calcular uma divis�o fracionada partindo de um n�mero inteiro � preciso adicionar um casting na frente do calculo de divis�o.
//converter a vari�vel double dividindo por um n�mero inteiro vai dar um resultado (double).
