#include <stdio.h> //comandos de entrada e saida dentro de uma biblioteca.
#include <string.h> // Para se trabalhar com funções de string se inclui esta biblioteca.

// assinatura da linguagem c Inicial.
int main()
{
    //criação das variáveis.

    double x;
    x = 2.234567;

    //impressão dos valores.

    printf("%.2lf\n", x);  // Placeholder do double é ("%lf). Para imprimir com duas casas decimais ou mais adiciona-se o (.2 depois da %).

    return 0;
}
