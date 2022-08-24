/*
* Programa que testa sua capacidade de adinhar uma letra
* Túlio Teodoro
* Estudo dos conceitos da lógica de programação
* Agosto/2022
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    /* srand(time(NULL)) objetiva inicializar o gerador de números aleatórios
    com o valor da função time(NULL). Este por sua vez, é calculado
    como sendo o total de segundos passados desde 1 de janeiro de 1970
    até a data atual.
    Desta forma, a cada execução o valor da "semente" será diferente.
    */
    srand (time(NULL));

    char escolha = 's'; // s de sim
    char resposta; // resposta do usuário
    char secreto;
    int tentativas;

    while (escolha == 's')
    {
        secreto = rand() % 26 + 'a';
        tentativas = 1;
        printf("\n>>>>>>>>>>>>>>> Tente advinhar a letra! <<<<<<<<<<<<<<<\n\n");
        printf("Digite uma letra entre 'a' e 'z':\n");

        while ((resposta=getch()) != secreto)
        {
            printf("%c esta incorreto. Tente novamente.\n", resposta);
            tentativas++;
        }

        printf("%c esta correto! Voce acertou!\n", resposta);
        printf("Voce acertou em %d tentativas.\n\n", tentativas);
        printf("Quer jogar novamente? (s/n)");
        escolha = getch();
    }
    
    printf("\nAte logo!");
    printf("\n\nPressione qualquer tecla para continuar.");
    scanf("%c");
    return 0;
}