#include "../include/listas.h"
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