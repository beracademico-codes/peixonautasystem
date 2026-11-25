#include "../include/menus.h"
#include <stdio.h>

int menu_principal(){

    int opcao;

    printf("\nPeixonautaSystem Versão 00\n");
    printf("--------------------------\n");
    printf("1. Estoque\n");
    printf("2. Clientes\n");
    printf("3. Vendas\n");
    printf("0. Sair do programa\n");
    printf("--------------------------\n");
    printf(":::");
    scanf("%i", &opcao);
    getchar();
    return opcao;
}

int menu_estoque(){

    int opcao;

    printf("\nMenu: Estoque\n");
    printf("--------------------------\n");
    printf("1. Incluir item\n");
    printf("2. Excluir item\n");
    printf("3. Consultar item por espécie\n");
    printf("4. Listar items no estoque\n");
    printf("5. Listar itens com estoque abaixo de um valor\n");
    printf("0. Retormar ao menu principal\n");
    printf("--------------------------\n");
    printf(":::");
    scanf("%i", &opcao);
    getchar();
    return opcao;

}

int menu_vendas(){

    int opcao;

    printf("\nMenu: Vendas\n");
    printf("--------------------------\n");
    printf("1. Incluir nova venda\n");
    printf("2. listar todas as vendas\n");
    printf("3. listar vendas por cliente\n");
    printf("4. listar vendas por especie\n");
    printf("0. Sair do programa\n");
    printf("--------------------------\n");
    printf(":::");
    scanf("%i", &opcao);
    getchar();
    return opcao;

}

int menu_clientes(){

    int opcao;

    printf("\nMenu: Clientes\n");
    printf("--------------------------\n");
    printf("1. Incluir novo cliente\n");
    printf("2. Excluir cliente\n");
    printf("3. Listar clientes cadastrados\n");
    printf("4. Consultar cliente por nome\n");
    printf("5. Listar clientes ativos");
    printf("0. Retornar ao menu principal\n");
    printf("--------------------------\n");
    printf(":::");
    scanf("%i", &opcao);
    getchar();
    return opcao;

}