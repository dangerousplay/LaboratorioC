//
// Created by dangerous on 24/08/18.
//

#include <stdio.h>
#include "math.h"

#define LIST_SIZE 30


int main(){

    List artigos;
    artigos.artigo = calloc(LIST_SIZE,sizeof(Article));
    artigos.size = LIST_SIZE;

    for(int i = 0; i < LIST_SIZE; i++){
        Article article;

        article.preco = rand() % 100;
        article.codigo = i;

        artigos.artigo[i] = article;
    }

    printf("Listando artigos: \n\n");


    for(int i = 0; i < LIST_SIZE; i++){
        printf("Código: %lf \n Preço: %li \n\n", artigos.artigo[i].preco, artigos.artigo[i].codigo);
    }

    printf("Média dos preços dos artigos: %Lf \n\n", averageOfPrices(artigos));

    List filtered = orderByPriceDesc(findByPriceMoreThanAverage(artigos));

    printf("Listando artigos com preços acima da média: \n\n");

    for(int i = 0; i < filtered.size; i++){
        Article article = filtered.artigo[i];
        printf("Código: %li \n Preço: %lf \n\n", article.codigo, article.preco);
    }

    orderByPriceDesc(artigos);

    printf("\n");

    printf("Listando os três artigos mais caros: \n\n");

    for(int i = 0; i < 3; i++) {
       Article a = artigos.artigo[i];
        printf("Código: %li \n Preço: %lf \n\n", a.codigo, a.preco);
    }

}
