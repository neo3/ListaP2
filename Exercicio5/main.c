#include <stdio.h>
#include <stdlib.h>

char *str_maiusculo(char *s)
{
    int i;

    for(i=0;i<strlen(s);i++){
        s[i] = toupper(s[i]);
    }

    return s;
}

int main()
{
    char texto[51];
    char *resultado;

    printf("Digite algo: ");
    gets(texto);

    resultado = str_maiusculo(texto);

    printf("Resultado: %s\n", resultado);

    return 0;
}
