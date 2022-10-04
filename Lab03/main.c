#include <stdio.h>
#include <stdlib.h>
#include "item.h"

extern void sort(Item *a, int lo, int hi);

int main(){
    int N, v;

    printf("Digite N: ");
    scanf("%d", &N);

    int *array = (int*) malloc(N * sizeof(int));

    for(int i = 0; i < N; i++){
        printf("Digite um valor: ");
        scanf("%d", &v);
        array[i] = v;
    }

    for(int i = 0; i < N; i++){
        printf("%d ", array[i]);
    }

    sort(array, 0, N);

    printf("\n");
    for(int i = 0; i < N; i++){
        printf("%d ", array[i]);
    }
    
    free(array);
    return 0;
}