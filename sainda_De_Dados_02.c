#include <stdio.h> //comandos de entrada e saida dentro de uma biblioteca.
#include <string.h> // Para se trabalhar com fun��es de string se inclui esta biblioteca.

// assinatura da linguagem c Inicial.
int main()
{
    //cria��o das vari�veis.

    double x;
    x = 2.234567;

    //impress�o dos valores.

    printf("%.2lf\n", x);  // Placeholder do double � ("%lf). Para imprimir com duas casas decimais ou mais adiciona-se o (.2 depois da %).

    return 0;
}
