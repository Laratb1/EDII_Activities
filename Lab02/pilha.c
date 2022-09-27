#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"
#include "bst.h"

// typedef struct key{
//     int key;
// } Key;

typedef struct cel{
    Bst *tree;
    Cel *prox;
} Cel;

typedef struct stack{
    Cel *top;
    Cel *base;
    int size;
} Stack;

Stack* initializeStack(){
    Stack *s = (Stack*)  malloc(sizeof(Stack));
    s->top = (Cel*) malloc(sizeof(Cel));
    s->base = s->top;
    s->top->prox = NULL;
    s->size = 0;

    return s;
}

int empty(Stack *s){
    return (s->top == s->base);
}

void push(Stack *s, Bst *tree){
    Cel* aux;
    aux = (Cel*) malloc(sizeof(Cel));
    s->top->tree = tree;
    aux->prox = s->top;
    s->top = aux;
    s->size++;
}

void pop(Stack *s, Bst *tree){
    Cel *aux;
    if(empty(s)){ 
        printf("Pilha vazia.");
        return;
    }
    aux = s->top;
    s->top = aux->prox;
    tree = aux->prox->tree;
    free(aux);
    s->size--;
}

