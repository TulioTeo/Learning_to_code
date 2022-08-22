#include <stdio.h>

int main()
{
    int inicializacao;
    int numero = 0;
    
    for(inicializacao = 0; inicializacao < 10; inicializacao++)
        printf("Numero = %i\n", numero += inicializacao);
    
    printf("\n\nDigite qualquer tecla para sair.");
    scanf("%c");
    return 0;
}