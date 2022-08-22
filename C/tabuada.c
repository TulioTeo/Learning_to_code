#include <stdio.h>

int main()
{
    int numero, index;

    printf("******Tabuada******\n\n");
    printf("Insira um numero para se exibido sua tabuada: ");
    scanf("%i", &numero);

    for(index = 0; index <= 10; index++)
        printf("%i x %i = %i\n", index, numero, index * numero);

    printf("\n\nDigite qualquer tecla para continuar.");
    scanf("%c");
    return 0;
}