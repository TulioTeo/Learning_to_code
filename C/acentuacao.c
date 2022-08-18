#include <stdio.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "Portuguese_Brazil");

    printf("Teste de acentuação e ç.\n\n");
    printf("Peça, Cão, Até, Túlio, Código, Seleção, Sabão.\n\n");

    printf("Pressione qualquer tecla para continuar.");
    scanf("%c");

return 0;
}