#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

int main(){
    Lista *lista;

    lista = inicializaLista();
    preencheLista(lista, 10);
    imprimeLista(lista);
    destroiLista(lista);

    return 0;
}