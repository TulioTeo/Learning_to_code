/*
* Programa que conta caracteres em uma frase usando laço while
* Túlio Teodoro
* Estudo dos conceitos da lógica de programação
* Agosto/2022
*/ 
#include <stdio.h>
#include <conio.h>

int main()
{
    int cont = 0;

    printf("Digite qualquer palavra/frase que sera contado o numero de caracteres apos pressionar enter.\n");

    while(getche() != '\r') // Enquanto não enter
        cont++;
    
    printf("\nO numero de caracteres e %d\n", cont);

    printf("\n\nPressione qualquer tecla para continuar.");
    scanf("%c");
    return 0;
}