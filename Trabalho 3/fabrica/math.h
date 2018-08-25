//
// Created by dangerous on 25/08/18.
//


typedef struct Pedido {
    int codigo;
    unsigned int quantidade;
    long double valor;
} Pedido;

typedef struct Comissao {
    int codigo;
    long double valor;
    float porcentagem;

    Pedido pedido;
} Comissao;

typedef struct Comissoes {
    Comissao *comissao;
    unsigned int size;
} Comissoes;

typedef struct Vendedor {
    long double comissao;
    int codigo;
} Vendedor;

typedef struct Vendedores {
    Vendedor* vendedor;
    unsigned int size;
} Vendedores;

#ifndef LABORATORIO_MATH_H
#define LABORATORIO_MATH_H

long double totalPedidos(Pedido* pedidos, unsigned int size);

Comissoes totalComissao(Pedido* pedidos, unsigned int size);

long double comissaoPaga(Comissoes comissoes);

Vendedores sumDuplicates(Comissoes comissoes);

#endif //LABORATORIO_MATH_H
