/*
* Programa que verifica se um número é positivo ou negativo
* Túlio Teodoro
* Estudo dos conceitos da lógica de programação
* 01/09/2022
*/
#include <stdio.h>

int main()
{
    int numero;

    printf("Insira um numero: ");
    scanf("%d", &numero);

    if(numero > 0)
        printf("\nO numero %d e positivo.", numero);
    else    
        printf("\nO numero %d e negativo.", numero);
    
    printf("\n\nPressione qualquer tecla para continuar.");
    scanf("%c");
    return 0;
}