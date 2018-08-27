//
// Created by dangerous on 25/08/18.
//

#include <stdlib.h>
#include "math.h"

long double totalPedidos(Pedido* pedidos, unsigned int size){
    long long total = 0;

    for(int i = 0; i < size; i++){
        total += pedidos[i].quantidade;
    }

    return total;
}

float comissaoPorcentagem(unsigned int quantidade){
    if(quantidade < 20){
        return 0.1;
    } else if(quantidade >= 20 && quantidade < 50){
        return 0.15;
    } else if(quantidade >= 50 && quantidade < 75){
        return 0.2;
    } else if(quantidade >= 75){
        return 0.25;
    }

    return 0;
}

Comissoes totalComissao(Pedido* pedidos, unsigned int size){
    Comissoes comissoes;

    comissoes.comissao = calloc(sizeof(Comissao), size);

    for(int i = 0; i < size; i++){
        Pedido p = pedidos[i];

        Comissao comissao;

        comissao.codigo = p.codigo;
        comissao.porcentagem = comissaoPorcentagem(p.quantidade);
        comissao.valor = p.valor * comissao.porcentagem;
        comissao.pedido = p;

        comissoes.comissao[i] = comissao;
    }

    comissoes.size = size;

    return comissoes;
}

Vendedores sumDuplicates(Comissoes comissoes){
    Vendedor* vendedores = calloc(sizeof(Vendedor), 10);
    int codigos[10];

    for(int i = 0; i < comissoes.size; i++){
        Comissao c = comissoes.comissao[i];

        vendedores[c.codigo-1].comissao += c.valor;
        vendedores[c.codigo-1].codigo = c.codigo;
    }

    Vendedores vendedores1;
    vendedores1.vendedor = vendedores;
    vendedores1.size = 10;

    return vendedores1;
}

long double comissaoPaga(Comissoes comissoes){
    long double total = 0;

    for(int i = 0; i < comissoes.size; i++){
        Comissao comissao = comissoes.comissao[i];
        total += comissao.valor;
    }

    return total;
}

long totalProcessado(Pedido* pedidos, unsigned int size){
    long sum = 0;
    for(int i = 0; i < size; i++){
        sum += pedidos[i].quantidade;
    }
    return sum;
}

long double totalArrecadado(Pedido* pedidos, unsigned int size){
    long double sum = 0;
    for(int i = 0; i < size; i++){
        sum += pedidos[i].valor;
    }
    return sum;
}