/*
* Programa para cálculo da média aritmética com laço for
* Túlio Teodoro
* Estudo dos conceitos da lógica de programação
* Agosto/2022
*/ 
#include <stdio.h>

int main()
{
    int index;
    float totalSoma;

    printf("Programa para calculo da media de 4 notas\n\n");

    for(index = 0; index < 4; index++)
    {
        float nota; // Variável de bloco
        printf("Digite a nota %d: ", index + 1);
        scanf("%f", &nota);
        totalSoma += nota;
    }

    printf("\nMedia = %.2f", totalSoma / 4);

    printf("\n\nPressione qualquer tecla para continuar.");
    scanf("%c");
    return 0;
}