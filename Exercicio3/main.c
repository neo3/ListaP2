#include <stdio.h>
#include <stdlib.h>

int ult_ind(char *s, char c)
{
    int i;
    int posicao = -1;

    for(i=0;i<strlen(s);i++)
    {
        if(s[i] == c)
        {
            posicao = i;
        }
    }

    return posicao;
}

int main()
{
    char texto[51];
    char letra;
    int resultado;

    printf("Digite uma frase: ");
    gets(texto);

    printf("Digite a letra que deseja procurar: ");
    letra = getchar();

    resultado = ult_ind(texto,letra);

    if(resultado == -1)
    {
        printf("Nao existe a letra.\n");
    }
    else {
        printf("Posicao da letra: %d\n", resultado);
    }

    return 0;
}
