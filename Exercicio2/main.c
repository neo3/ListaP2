#include <stdio.h>
#include <stdlib.h>

char * init_str(char *s)
{
    s[0] = '\0';

    return s;
}

int main()
{
    char texto[51];
    char *resultado;

    printf("Digite um texto: ");
    gets(texto);

    resultado = init_str(texto);

    printf("Resultado: %s <---\n", resultado);

    return 0;
}
