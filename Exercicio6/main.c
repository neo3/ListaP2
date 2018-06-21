#include <stdio.h>
#include <stdlib.h>
#define DIM 9

void preencher(char vetor[DIM], char c)
{
    int posicao, valido=0;

    do {
        printf("Jogador [%c]. Digite a posicao: ", c);
        scanf("%d", &posicao);

        if(vetor[posicao-1] == ' ')
        {
            vetor[posicao-1] = c;
            valido = 1;
        }
    }while(valido != 1);
}

int verificar(char vetor[DIM], char c)
{
    if(vetor[0] == c && vetor[1] == c && vetor[2] == c) return 1;
    if(vetor[3] == c && vetor[4] == c && vetor[5] == c) return 1;
    if(vetor[6] == c && vetor[7] == c && vetor[8] == c) return 1;

    if(vetor[0] == c && vetor[3] == c && vetor[6] == c) return 1;
    if(vetor[1] == c && vetor[4] == c && vetor[7] == c) return 1;
    if(vetor[2] == c && vetor[5] == c && vetor[8] == c) return 1;

    if(vetor[0] == c && vetor[4] == c && vetor[8] == c) return 1;
    if(vetor[2] == c && vetor[4] == c && vetor[6] == c) return 1;

    return 0;
}

void imprimir(char vetor[DIM])
{
    int i;

    for(i=0;i<9;i++)
    {
        printf("%c ", vetor[i]);

        if((i+1) % 3 == 0)
        {
            printf("\n");
        }
    }
    printf("\n");
}

int main()
{
    int cont=0, resultado;
    char tabuleiro[DIM] = {' ',' ',' ',' ',' ',' ',' ',' ',' '};
    char c = 'x';

    do {
        preencher(tabuleiro, c);
        resultado = verificar(tabuleiro, c);
        imprimir(tabuleiro);

        if(resultado != 0)
        {
            break;
        }

        if(c == 'x')
        {
            c = 'o';
        }
        else {
            c = 'x';
        }

        cont++;
    } while(cont < 9);

    if(resultado == 1)
    {
        printf("Jogador [%c] ganhou!\n", c);
    }
    else {
        printf("Jogo empatado.\n");
    }

    return 0;
}
