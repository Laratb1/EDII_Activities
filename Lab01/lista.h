#ifndef LISTA_H_
#define LISTA_H_

typedef struct lista Lista;
typedef struct celula Celula;

Lista *inicializaLista();

void insere(Lista *lista, int N);

void preencheLista(Lista *lista, int max);

void *retira(Lista *lista, int posicao); 

void imprimeLista(Lista *lista);

void destroiLista(Lista *lista);

#endif