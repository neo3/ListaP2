#include <stdio.h>
#include <stdlib.h>
#define DIML 4
#define DIMC 3

void alimentarMatriz(float matriz[DIML][DIMC])
{
    int i, j;

    for(i=0;i<DIML;i++)
    {
        for(j=0;j<DIMC;j++)
        {
            printf("Digite o numero da posicao [%d][%d]: ", i, j);
            scanf("%f", &matriz[i][j]);
            fflush(stdin);
        }
    }
    printf("\n");
}

void calcularMedia(float m1[DIML][DIMC], float m2[DIML][DIMC], float m3[DIML][DIMC])
{
    int i, j;

    for(i=0;i<DIML;i++)
    {
        for(j=0;j<DIMC;j++)
        {
            m3[i][j] = (m1[i][j] + m2[i][j]) / 2;
        }
    }

    for(i=0;i<DIML;i++)
    {
        for(j=0;j<DIMC;j++)
        {
            printf("%.1f ", m1[i][j]);
        }

        printf("\n");
    }
    printf("\n");

    for(i=0;i<DIML;i++)
    {
        for(j=0;j<DIMC;j++)
        {
            printf("%.1f ", m2[i][j]);
        }

        printf("\n");
    }
    printf("\n");

    for(i=0;i<DIML;i++)
    {
        for(j=0;j<DIMC;j++)
        {
            printf("%.1f ", m3[i][j]);
        }

        printf("\n");
    }
    printf("\n");
}

int main()
{
    int x[DIML][DIMC], y[DIML][DIMC], z[DIML][DIMC];

    alimentarMatriz(x);
    alimentarMatriz(y);

    calcularMedia(x,y,z);

    return 0;
}
