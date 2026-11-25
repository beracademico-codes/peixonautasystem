#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#include "../include/menus.h"
#include "../include/listas.h"

int main(){

    controle_lista_peixe_t lista_peixes;
    controle_lista_cliente_t lista_clientes;
    controle_lista_venda_t lista_vendas;

    inicializar_lista_peixe(&lista_peixes);
    inicializar_lista_cliente(&lista_clientes);
    inicializar_lista_venda(&lista_vendas);

    int opc_menu_principal, opc_menu_venda, opc_menu_peixe,
    opc_menu_cliente;

    do{
        opc_menu_principal = menu_principal();

        switch(opc_menu_principal){

            case 1:
            
                do{
                    opc_menu_peixe = menu_estoque();
                    
                    switch(opc_menu_peixe){
                        case 1:
                        break;
                    }

                }while(opc_menu_peixe != 0);

            break;

            case 2:

                do{
                    opc_menu_cliente = menu_clientes();
                    
                    switch(opc_menu_cliente){
                        case 1:
                        break;
                    }
                    
                }while(opc_menu_cliente != 0);

            break;
            case 3:

                do{
                    opc_menu_venda = menu_vendas();
                    
                    switch(opc_menu_venda){
                        case 1:
                        break;
                    }
                
                }while(opc_menu_venda != 0);

            break;

        }
        

    



    }while(opc_menu_principal != 0);


    return 0;
}