//
// Created by dangerous on 24/08/18.
//

#include <stdio.h>
#include "math.h"

#define LIST_SIZE 3


int main(){
    List artigos;
    artigos.artigo = calloc(LIST_SIZE,sizeof(Article));
    artigos.size = LIST_SIZE;

    for(int i = 0; i < LIST_SIZE; i++){
        Article article;

        article.preco = 10 * i;
        article.codigo = i;

        artigos.artigo[i] = article;
    }

    for(int i = 0; i < LIST_SIZE; i++){
        printf("%lF / %li \n", artigos.artigo[i].preco, artigos.artigo[i].codigo);
    }

    printf("Average: %Lf \n", averageOfPrices(artigos));

}
