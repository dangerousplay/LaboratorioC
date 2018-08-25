//
// Created by dangerous on 24/08/18.
//

#include "math.h"

void swap(Article *xp, Article *yp)
{
    Article temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void bubbleSort(Article *articles, int n, Comparator comparator)
{
    int i, j;
    for (i = 0; i < n-1; i++)

        for (j = 0; j < n-i-1; j++)
            if (comparator.compare(articles[j], articles[j+1]))
                swap(&articles[j], &articles[j+1]);
}


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

    for(unsigned int i = 0; i < list.size; i++){
        Article art = list.artigo[i];

        if(filter.predicate(art.codigo, art.preco)){
            filtered.artigo[index++] = art;
        }
    }

    filtered.size = index;

    return filtered;
}

static long double averagePrice;

int predicate(long codigo, double price){
    return price > averagePrice ? 1:0;
}

List findByPriceMoreThanAverage(List articles){
    long double average = averageOfPrices(articles);

    Filter filter;
    filter.predicate = &predicate;

    averagePrice = average;

    return filterBy(articles, filter);
}

int compare(Article a, Article b){
    return a.preco >= b.preco ? 1:0;
}

int compareDesc(Article a, Article b){
    return a.preco <= b.preco ? 1:0;
}

List orderByPriceDesc(List articles) {
    Comparator comparator;
    comparator.compare = &compareDesc;

    bubbleSort(articles.artigo, articles.size, comparator);
    return articles;
}

List orderByPriceAsc(List articles){
    Comparator comparator;
    comparator.compare = &compare;

    bubbleSort(articles.artigo, articles.size, comparator);
    return articles;
}
