#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese_Brazil");

    int num1, num2, num3;

    printf("\nPrograma que recebe 3 números inteiros e colocam em ordem crescente.\n");
    printf("Digite o primeiro número: ");
    scanf("%i",&num1);
    printf("\nDigite o segundo número: ");
    scanf("%i",&num2);
    printf("\nDigite o terceiro número: ");
    scanf("%i",&num3);

    if(num1 <= num2 && num2 <= num3)
    {
        printf("A ordem crescente é: %i, %i, %i", num1, num2, num3); 
    }
    else if(num1 <= num3 && num3 <= num2)
    {
        printf("A ordem crescente é: %i, %i, %i", num1, num3, num2); 
    }
    else if(num2 <= num1 && num1 <= num3)
    {
        printf("A ordem crescente é: %i, %i, %i", num2, num1, num3);
    }
    else if(num2 <= num3 && num3 <= num1)
    {
        printf("A ordem crescente é: %i, %i, %i", num2, num3, num1);
    }
    else if(num3 <= num1 && num1 <= num2)
    {
        printf("A ordem crescente é: %i, %i, %i", num3, num1, num2);
    }
    else //num3 <= num2 && num2 <= num1
    {
        printf("\nA ordem crescente é: %i, %i, %i", num3, num2, num1);
    }

    printf("\n\nPressione qualquer tecla para continuar.\n");
    scanf("%c");

    return 0;
}