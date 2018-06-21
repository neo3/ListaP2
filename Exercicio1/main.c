#include <stdio.h>
#include <stdlib.h>

int strcounta(char *s)
{
    int i,cont=0;

    for(i=0;i<strlen(s);i++)
    {
        if((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
        {
            cont++;
        }
    }

    return cont;
}

int main()
{
    char texto[51];
    int resultado;

    printf("Digite algo: ");
    gets(texto);

    resultado = strcounta(texto);

    printf("Quantidade de letras: %d\n", resultado);

    return 0;
}
