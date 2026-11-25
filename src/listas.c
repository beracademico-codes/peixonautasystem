#include "../include/listas.h"
#include "../include/utils.h"
#include <stdlib.h>
#include <stdio.h>

void inicializar_lista_peixe(controle_lista_peixe_t *peixes){

    peixes -> primeiro = NULL;
    peixes -> ultimo = NULL;

}
void inicializar_lista_cliente(controle_lista_cliente_t *clientes){

    clientes -> primeiro = NULL;
    clientes -> ultimo = NULL;

}
void inicializar_lista_venda(controle_lista_venda_t *vendas){

    vendas -> primeiro = NULL;
    vendas -> ultimo = NULL;

}

peixe_t criar_novo_peixe(){

    peixe_t peixe

    printf("identificacao:.....");
    scanf("%i", &peixe.id);
    getchar();
    printf("Espécie:...........");
    fgets(peixe.especie, T_STR, stdin)
    formatar_maiusculo(peixe.especie);
    retirar_enter(peixe.especie);
    printf("Quantidade estoque:");
    scanf("%f", &peixe.qtd_estoque);
    printf("valor em kg.......:");
    scanf("%f", &peixe.valor_unitario);

    return peixe

}

cliente_t criar_novo_cliente(){

    cliente_t cliente

    printf("Identificacao:......");
    fgets(cliente.identificacao, T_STR, stdin);
    formatar_maiusculo(cliente.nome);
    retirar_enter(cliente.nome);

    printf("Nome:........")
    fgets(cliente.nome, T_STR, stdin);
    formatar_maiusculo(cliente.nome);
    retirar_enter(cliente.nome);

    printf("Telefone:...")
    fgets(cliente.telefone, T_STR);

    return cliente


}

venda_t criar_nova_venda(){

    venda_t venda

    return venda;

}


//criar no
no_peixe_t *criar_novo_no_peixe(peixe_t peixe){

    no_peixe_t *novo_no = NULL;

    novo_no = malloc(sizeof(no_peixe_t))

    novo_no -> peixe = peixe;
    novo_no -> prox = NULL;

    return novo_no
    
}
no_cliente_t *criar_novo_no_cliente(cliente_t cliente){

    no_cliente_t *novo_no = NULL;

    novo_no = malloc(sizeof(no_cliente_t))

    novo_no -> cliente = cliente;
    novo_no -> prox = NULL;

    return novo_no
    
}
no_venda_t criar_novo_no_venda(venda_t venda){

    no_venda_t *novo_no = NULL;

    novo_no = malloc(sizeof(no_venda_t))

    novo_no -> venda = venda;
    novo_no -> prox = NULL;

    return novo_no

   
}

//Inserir no na lista
void *criar_no_lista_peixe(controle_lista_peixe_t *controle, no_peixe_t *no_peixe){

    if(!controle->primeiro && !controle->ultimo){
        controle->primeiro = controle->ultimo = no_peixe;
    }else{
        controle->ultimo->prox = no_peixe;
    }


}

void criar_no_lista_cliente(controle_lista_cliente_t *controle, no_cliente_t *no_cliente){



}

void criar_no_lista_venda(controle_lista_venda_t *controle, no_venda_t *no_venda){



}
