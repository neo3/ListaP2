#include <stdio.h>
#include <stdlib.h>

struct Produto {
    int codigo;
    char descricao[51];
    float preco;
};

struct Carrinho {
    int numero;
    int diaDaCompra;
    float totalCompra;
    struct Produto vetProdutos[100];
};

int main()
{
    int prod=0;
    int opc, op, i;

    struct Produto produtos[100];
    struct Carrinho carrinho;

    carrinho.numero = 0;
    carrinho.diaDaCompra = 21;
    carrinho.totalCompra = 0.0;

    produtos[prod].codigo = 1;
    strcpy(produtos[prod].descricao, "Arroz");
    produtos[prod].preco = 12.50;
    prod++;

    produtos[prod].codigo = 2;
    strcpy(produtos[prod].descricao, "Feijao");
    produtos[prod].preco = 8.50;
    prod++;

    produtos[prod].codigo = 3;
    strcpy(produtos[prod].descricao, "Acucar");
    produtos[prod].preco = 7.0;
    prod++;

    produtos[prod].codigo = 4;
    strcpy(produtos[prod].descricao, "Farinha");
    produtos[prod].preco = 4.0;
    prod++;

    produtos[prod].codigo = 5;
    strcpy(produtos[prod].descricao, "Macarrao");
    produtos[prod].preco = 3.50;
    prod++;

    do {
        system("cls");

        printf("MENU\n\n");
        printf("1. Escolher produto\n");
        printf("2. Finalizar compra\n\n");
        printf("0. SAIR\n\n");

        printf("Digite uma opcao: ");
        scanf("%d", &opc);

        switch(opc) {
        case 1:
            do {
                system("cls");

                printf("Lista de Produtos\n\n");

                for(i=1;i<=prod;i++) {
                    printf("%d. %s - R$ %.2f\n", i, produtos[i-1].descricao, produtos[i-1].preco);
                }
                printf("\n0. VOLTAR\n\n");

                printf("Digite uma opcao: ");
                scanf("%d", &op);

                if(op > 0 && op <= prod) {
                    carrinho.totalCompra += produtos[op-1].preco;
                    carrinho.vetProdutos[carrinho.numero] = produtos[op-1];
                    carrinho.numero++;
                }
            } while(op == 0 || op > prod);

            break;
        case 2:
            do {
                system("cls");

                printf("Lista de Produtos\n\n");

                for(i=1;i<=carrinho.numero;i++) {
                    printf("%d. %s - R$ %.2f\n", i, carrinho.vetProdutos[i-1].descricao, carrinho.vetProdutos[i-1].preco);
                }
                printf("\nTotal de Produtos: %d\n", carrinho.numero);
                printf("Total da compra: %.2f\n\n", carrinho.totalCompra);

                printf("1. Confirmar compra\n");
                printf("0. Voltar\n\n");

                printf("Digite uma opcao: ");
                scanf("%d", &op);

                if(op == 1) {
                    system("cls");

                    printf("Compra efetuada no dia %d\n\n", carrinho.diaDaCompra);

                    for(i=1;i<=carrinho.numero;i++) {
                        printf("%d. %s - R$ %.2f\n", i, carrinho.vetProdutos[i-1].descricao, carrinho.vetProdutos[i-1].preco);
                    }

                    printf("\nTotal: %.2f\n", carrinho.totalCompra);

                    exit(0);
                }
            } while(op < 0 || op > 1);

            break;
        default:
            printf("Opcao invalida!\n");
        }
    }while(opc != 0);

    return 0;
}
