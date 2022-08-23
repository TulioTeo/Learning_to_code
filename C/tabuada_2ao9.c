/*
* Programa que imprime as tabuadas do 2 ao 9
* Túlio Teodoro
* Estudo dos conceitos da lógica de programação
* Agosto/2022
*/
#include <stdio.h>

int main()
{
    int k, i, j;

    for(k = 0; k <= 1; k++) //É executado 2 vezes, uma para o primeiro bloco (2 a 5) e outra para o segundo bloco (6 ao 9)
    {
        printf("\n");
        for(i = 1; i <= 4; i++) //Imprime os títulos
            printf("TABUADA DO %3d   ", i+4*k+1);
        printf("\n");

        for(i = 1; i <= 9; i++) //Controla o multiplicando
        {
            for(j = 2+4*k; j <= 5+4*k; j++) //controla o multiplicador
                printf("%3d X%3d = %3d   ", j, i, j*i);
            printf("\n");
        }
    }

    printf("\n\nPressione qualquer tecla para continuar.");
    scanf("%c");
    return 0;
}