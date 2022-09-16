#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

struct celula{
    int N;
    Celula *prox;
};

struct lista{
    Celula *prim;
    Celula *ult;
};

Lista *inicializaLista(){
    Lista* lista = (Lista*) malloc(sizeof(Lista));
    lista->prim = NULL;
    lista->ult = NULL;
    return lista;
}

void insere(Lista *lista, int N){
    Celula *nova = (Celula*) malloc(sizeof(Celula));
    nova->N = N;
    nova->prox = NULL;
    
    if(lista->prim == NULL){
        lista->prim = nova;
        lista->ult = nova;
    }
    else{
        Celula *p = lista->prim;
        while(p->prox != NULL){
            p = p->prox;
        }
        p->prox = nova;
        lista->ult = nova;
    }
}

void preencheLista(Lista *lista, int max){
    int i = 2;
    Celula *p;

    insere(lista, i);
    i++;

    for(p = lista->prim; p != NULL; p = p->prox, i++){
        insere(lista, i);
        if(i == max) break;
    }
}

void *retira(Lista *lista, int posicao){
    Celula *ant = NULL;
    Celula *p = lista->prim;
    int N;
    
    for(int i = 0; i < posicao; i++){
        ant = p;
        p = p->prox;
    }
    if(p == NULL){
        exit (1);
    }
    if(lista->prim == p && lista->ult == p){
        lista->prim = NULL;
        lista->ult = NULL;
    }
    else if(lista->prim == p){
        lista->prim = p->prox;
    }
    else if(lista->ult == p){
        lista->ult = ant;
        lista->ult->prox = NULL;
    }
    else{
        ant->prox = p->prox;
    }
    N = p->N;
    free(p);
}

void imprimeLista(Lista *lista){
    Celula* p;
    printf("[ ");
    for(p = lista->prim; p != NULL; p = p->prox){
        printf("%d ", p->N);
    }
    printf("]");
}

void destroiLista(Lista *lista){
    Celula* p = lista->prim;
    Celula* t;

    while(p != NULL){
        t = p->prox;
        free(p);
        p = t;
    }
    free(lista); 
}