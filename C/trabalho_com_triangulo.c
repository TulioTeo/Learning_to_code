/*
Propriedade - Três lados formam um triângulo quando a soma de quaisquer dois lados for maior que o terceiro.
Definição 1 - Chama-se triângulo equilátero os que tem os comprimentos dos três lados iguais.
Definição 2 - Chama-se triângulo isósceles ao triângulo que tem os comprimentos de dois lados iguais.
Definição 3 - Chama-se triângulo escaleno ao triângulo que temo os comprimentos dos três lados diferentes. 
*/
#include <stdio.h>

int main()
{

    float ladoDireito, ladoEsquerdo, ladoInferior;

    printf("Programa para verificar se o comprimento dos 3 lados formam um triangulo.\n");
    printf("Verifica tambem a classificacao do triangulo.\n");

    printf("Digite o valor do lado direito: ");
    scanf("%f", &ladoDireito);

    printf("Digite o valor do lado esquerdo: ");
    scanf("%f", &ladoEsquerdo);

    printf("Digite o valor do lado inferior: ");
    scanf("%f", &ladoInferior);

    if (((ladoDireito + ladoEsquerdo) < ladoInferior) || ((ladoDireito + ladoInferior) < ladoEsquerdo) || ((ladoEsquerdo + ladoInferior) < ladoDireito))
    {
        printf("Nao eh um triangulo!");
    }
    else if ((ladoDireito == ladoEsquerdo) && (ladoDireito == ladoInferior))
    {
        printf("Eh um triangulo equilatero!");
    }
    else if ((ladoDireito == ladoEsquerdo) || (ladoDireito == ladoInferior) || (ladoEsquerdo == ladoInferior))
    {
        printf("Eh um triangulo isosceles!");
    }
    else
    {
        printf("Eh um triangulo escaleno!");
    }

    return 0;
}
