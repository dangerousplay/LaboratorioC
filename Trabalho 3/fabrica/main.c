//
// Created by dangerous on 25/08/18.
//

#include <stdio.h>
#include <malloc.h>
#include "math.h"

int main(){
    unsigned int pedidosTamanho = 0;

    printf("Digite o número de pedidos a serem calculados: ");

    scanf("%i", &pedidosTamanho);

    printf("\n");

    Pedido* pedidos = calloc(sizeof(Pedido),pedidosTamanho);

    for(int i = 0; i < pedidosTamanho; i++){
        printf("Digite a quantidade de itens: ");
        scanf("%i", &pedidos[i].quantidade);

        printf("Digite o valor total da venda: ");
        scanf("%Lf", &pedidos[i].valor);

        printf("Digite o código do vendedor: ");
        scanf("%i", &pedidos[i].codigo);

        printf("\n");
    }

    Comissoes comissoes = totalComissao(pedidos, pedidosTamanho);

    printf("\nVendas e comissões\n\n");

    for(int i = 0; i < comissoes.size; i++){
        Comissao c = comissoes.comissao[i];
        printf("Código do vendedor: %i \nPorcentagem: %f \nComissão: %Lf \nValor do pedido: %Lf \n\n", c.codigo, c.porcentagem, c.valor, c.pedido.valor);
    }

    printf("\n\nVendedor e suas comissões\n\n");

    Vendedores vendedores = sumDuplicates(comissoes);

    for(int i = 0; i < vendedores.size; i++){
        Vendedor v = vendedores.vendedor[i];

        if(v.codigo <= 0)
            continue;

        printf("Codigo do vendedor: %i \nTotal ganho: %Lf \n\n", v.codigo, v.comissao);
    }

    printf("\n");

    printf("Total de itens vendidos: %li \n", totalProcessado(pedidos, pedidosTamanho));
    printf("Total arrecadado: %Lf \n", totalArrecadado(pedidos, pedidosTamanho));
    printf("Total de comissão paga: %LF \n", comissaoPaga(comissoes));
}