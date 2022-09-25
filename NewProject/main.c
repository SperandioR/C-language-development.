#include <stdio.h>//comandos de entrada e saida dentro de uma biblioteca na linguagem C.

int main()
{
    //Declarando cada variável.
    int hora;
    printf("Digite uma hora do dia: "); //imprimindo frase para o usuário digitar algum dado.
    scanf("%d", &hora); //fazendo a leitura dos dados inseridos pelo usuário.

    if (hora < 12) //<se> a hora for menor do que 12?!
    {
        printf("Bom dia!\n");//imprimindo na tela (Bom dia).
    }
    else//<senao>...
    {
        printf("Boa tarde!\n");// sera imprimido na tela (Boa tarde).
    }
    return 0;
}
