#include <stdio.h>
#include <stdlib.h>

char * strnset(char *s, char ch, int n)
{
    int i;

    for(i=0;i<n;i++)
    {
        if(i < strlen(s))
        {
            s[i] = ch;
        }
    }

    return s;
}

int main()
{
    char texto[51];
    char letra;
    char *resultado;
    int num;

    printf("Digite algo: ");
    gets(texto);

    printf("Digite uma letra: ");
    letra = getchar();

    printf("Digite um numero: ");
    scanf("%d", &num);

    resultado = strnset(texto,letra,num);

    printf("Resultado: %s\n", resultado);

    return 0;
}
