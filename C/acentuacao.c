#include <stdio.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "Portuguese_Brazil");

    printf("Teste de acentua��o e �.\n\n");
    printf("Pe�a, C�o, At�, T�lio, C�digo, Sele��o, Sab�o.\n\n");

    printf("Pressione qualquer tecla para continuar.");
    scanf("%c");

return 0;
}