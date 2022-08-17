#include <stdio.h>

int main()
{
    //Declaração de variáveis
    float num_1, num_2, resultado;

    printf("Programa para calcular a media de dois numeros\n\n");

    printf("Digite o primeiro numero:\n");
    scanf("%f",&num_1);
    printf("Digite o segundo numero:\n");
    scanf("%f",&num_2);
    resultado = (num_1 + num_2) / 2;
    printf("A media = %.2f",resultado);
    return 0;
}
