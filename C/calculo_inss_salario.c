/*
* Programa que calcula o desconto do inss do salário bruto
*
* INSS
* O desconto do INSS pode ser de 7,5%, 9%, 12% ou 14% sobre o salário bruto, e
* segue uma tabela progressiva, de acordo com a faixa salarial.
* Utilizando como exemplo o salário de R$ 3.000,00, em 2022 
* 7,5% de R$ 1.212,00 (por seu salário ter ultrapassado a primeira faixa), que corresponde a uma contribuição de R$ 90,90; 
* mais 9% sobre R$ 1.215,34 (essa quantia se refere a diferença de valores da segunda faixa: R$ 2.427,35 – R$ 1.212,01, uma vez
* que o salário da segurada ultrapassou esta faixa também), que corresponde a uma contribuição de R$ 109,38 mais 12% sobre
* R$ 572,66 (valor que sobrou do salário da segurada após passar pelas duas faixas: R$ 3.000,00 – R$ 1.212,00 – R$ 1.215,34),
* que corresponde a uma contribuição de R$ 68,72.
* Somando em 2022, a contribuição será de:  R$ 90,90 + R$ 109,38 + R$ 68,72 = R$ 269,00.
*
* Túlio Teodoro
* Estudo dos conceitos da lógica de programação
* 02/09/2022
*/

#include <stdio.h>

int main ()
{
    const float
    //Faixas salariais INSS
    faixaInss_1 = 1212, 
    faixaInss_2 = 2427.35, 
    faixaInss_3 = 3641.03, 
    faixaInss_4 = 7087.22,
    //Alíquota de recolhimento ao INSS 
    aliquotaInss_1 = 0.075, 
    aliquotaInss_2 = 0.09, 
    aliquotaInss_3 = 0.12, 
    aliquotaInss_4 = 0.14;

    float
    salario, 
    irpf, 
    inss, 
    acimaFaixa_1, 
    acimaFaixa_2, 
    acimaFaixa_3, 
    acimaFaixa_4,
    deducaoFaixa_1,
    deducaoFaixa_2,
    deducaoFaixa_3,
    deducaoFaixa_4;
    
    printf ("************* Calculo de deducao do INSS************");
    printf ("\n\n");
    printf ("Calculo do desconto do inss do salario bruto");
    printf ("\n\n");
    printf ("Digite o valor do salario bruto: ");
    scanf ("%f", &salario);

    /*Cálculo do INSS*/

    //Regra quando passa da primeira faixa salarial e adiante
    acimaFaixa_1 = (faixaInss_1 + 0.01) * aliquotaInss_1;
    acimaFaixa_2 = (((faixaInss_2 + 0.01) - faixaInss_1) * aliquotaInss_2);
    acimaFaixa_3 = (((faixaInss_3 + 0.01) - faixaInss_2) * aliquotaInss_3);
    acimaFaixa_4 = (((faixaInss_4 + 0.01) - faixaInss_3) * aliquotaInss_4);

    //Diferença dos valores entre faixas para deduzir do salário restante
    deducaoFaixa_1 = faixaInss_1 + 0.01;
    deducaoFaixa_2 = faixaInss_2 - (faixaInss_1 + 0.01);
    deducaoFaixa_3 = faixaInss_3 - faixaInss_2;
    deducaoFaixa_4 = faixaInss_4 - faixaInss_3;

    //Faixa 1
    if (salario == faixaInss_1)
    {
        inss = salario * aliquotaInss_1;
    }
    else
    {
        //Faixa 2
        if (salario > faixaInss_1 && salario <= faixaInss_2)
        {
            inss = acimaFaixa_1 + ((salario - deducaoFaixa_1) * aliquotaInss_2);
        }
        else
        {
            //Faixa 3
            if (salario > faixaInss_2 && salario <= faixaInss_3)
            {
                inss = acimaFaixa_1 + acimaFaixa_2 + ((salario - deducaoFaixa_1 - deducaoFaixa_2) * aliquotaInss_3);
            }
            else
            {
                //Faixa 4
                if (salario > faixaInss_3 && salario <= faixaInss_4)
                {
                    inss = acimaFaixa_1 + acimaFaixa_2 + acimaFaixa_3 + ((salario - deducaoFaixa_1 - deducaoFaixa_2 - deducaoFaixa_3) * aliquotaInss_4);
                }
                //Acima da faixa 4
                else
                {
                    inss = acimaFaixa_1 + acimaFaixa_2 + acimaFaixa_3 + acimaFaixa_4;
                }
            }
        }
    }
            
    printf("Valor a pagar de INSS: %.2f", inss);
    printf("\n\nPressione qualquer tecla para continuar.");
    scanf("%c");
    return 0;
}