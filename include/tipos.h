#ifndef TIPOS_H
#define TIPOS_H

#include <stdbool.h>
#include <stdint.h>

#define T_STR 100

typedef char string[T_STR];

typedef struct peixe{

    uint8_t id;
    string especie;
    float qtd_estoque;
    float valor_unitario;

}peixe_t;

typedef struct cliente{

    uint8_t id;
    string nome;
    string telefone;
    bool status;

}cliente_t;

typedef struct venda{

    uint8_t id;
    uint8_t id_cliente;
    uint8_t id_peixe;
    float quantidade;
    float custo;

}venda_t;

typedef struct no_peixe{

    peixe_t peixe;
    struct no_peixe *prox;

}no_peixe_t;

typedef struct no_cliente{

    cliente_t cliente;
    struct no_cliente *prox;

}no_cliente_t;

typedef struct no_venda{

    venda_t venda;
    struct no_venda *prox;

}no_venda_t;

typedef struct controle_lista_peixe{

    no_peixe_t *primeiro;
    no_peixe_t *ultimo;

}controle_lista_peixe_t;

typedef struct controle_lista_cliente{

    no_cliente_t *primeiro;
    no_cliente_t *ultimo;

}controle_lista_cliente_t;

typedef struct controle_lista_venda{

    no_venda_t *primeiro;
    no_venda_t *ultimo;

}controle_lista_venda_t;

#endif