#include <stdio.h>

int main()
{
    //Declarando cada vari�vel.
    int hora;
    printf("Digite uma hora do dia: "); //imprimindo frase para o usu�rio digitar algum dado.
    scanf("%d", &hora); //fazendo a leitura dos dados inseridos pelo usu�rio.

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
