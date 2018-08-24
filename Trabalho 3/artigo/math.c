//
// Created by dangerous on 24/08/18.
//

#include "math.h"

long double averageOfPrices(List artigos){
    long double sum = 0;

    Article* artigo = artigos.artigo;

    for(unsigned int i = 0; i < artigos.size; i++){
        sum += artigo[i].preco;
    }

    return sum/artigos.size;
}

List filterBy(List list, Filter filter){
    unsigned int index = 0;
    Article* article = calloc(sizeof(Article),list.size);

    List filtered;

    filtered.artigo = article;
    filtered.size = list.size;

    for(unsigned int i = 0; i < list.size; i++){
        Article art = list.artigo[i];

        if(filter.predicate(art.codigo, art.preco)){
            filtered.artigo[index++] = art;
        }
    }

    return filtered;
}

int predicate(long codigo, double price){

}

List findByPriceMoreThanAverage(List articles){

    long double average = averageOfPrices(articles);

    Filter filter;
    filter.predicate = &predicate;

    return filterBy(articles, filter);
}

List findAndOrderByPrice(List articles){

}
