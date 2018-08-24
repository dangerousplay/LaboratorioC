//
// Created by dangerous on 24/08/18.
//

#include <stdlib.h>
#include <math.h>

typedef struct Article {
    long codigo;
    double preco;

} Article;

typedef struct Filter {
    int (*predicate)(long codigo, double price);
} Filter;

typedef struct List {
    unsigned int size;
    Article* artigo;

} List;

#ifndef LABORATORIO_MATH_H
#define LABORATORIO_MATH_H

long double averageOfPrices(List artigos);

List findByPriceMoreThanAverage(List articles);

List findAndOrderByPrice(List articles);

List filterBy(List list, Filter filter);

#endif //LABORATORIO_MATH_H
