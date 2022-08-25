/*
* Calculadora simples de 4 operações
* Mostra casos sem break em switch
* Túlio Teodoro
* Estudo dos conceitos da lógica de programação
* Agosto/2022
*/ 
#include <stdio.h>
#include <conio.h>

int main()
{
    char continuar = 's';

    while (continuar == 's')
    {
        float n1, n2;
        char operador;

        printf("\nCalculadora simples de 4 operacoes\n\n");
        printf("Operadores validos:\n[+] Para soma.\n[-] Para subtracao.\n[x ou *] Para multiplicacao.\n[/] Para divisao.\n\n");
        printf("Digite nesta ordem: numero operador numero:");
        scanf("%f%c%f", &n1, &operador, &n2);

        if (n1 == 0.0) break;

        switch (operador)
        {
        case '+':
            printf("\n%.2f\n\n", n1 + n2);
            break;
        case '-':
            printf("\n%.2f\n\n", n1 - n2);
            break;
        case '*':  
        case 'x':
            printf("\n%.2f\n\n", n1 * n2);
            break;
        case '/':
            printf("\n%.2f\n\n", n1 / n2);
            break;         
        default:
            printf("Operador desconhecido.");
        }

        printf("Quer realizar um novo calculo? (s/n)");
        continuar = getch();
    }
    
    printf("\n\nPressione qualquer tecla para continuar.\n");
    scanf("%c");    
}