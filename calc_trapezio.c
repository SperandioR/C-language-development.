#include <stdio.h> //comandos de entrada e saida dentro de uma biblioteca.

// assinatura da linguagem c Inicial.
int main ()
{
    //criação das variáveis.
    double b1, b2, h, area;

    //atribuindo valores para cada variável.
    b1 = 6.0;
    b2 = 8.0;
    h = 5.0;
    area = (b1 + b2) / 2.0 * h;  //expressão aritmética.

    //impressão dos valores.
    printf("%.2lf\n", area);


    return 0;
}
