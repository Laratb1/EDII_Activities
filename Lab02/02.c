#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include "bst.h"

int main(){
    srand(time(NULL)); // should only be called once
    int r; // returns a pseudo-random integer between 0 and RAND_MAX
    int N = pow(10, 6);

    printf("%d",N);
    // printf("Digite a quantidade de elementos da arvore: ");
    // scanf("%d", &N);

    Bst *tree = createEmptyTree();

    for(int i = 0; i < N; i++){
        r = rand();
        tree = insert(r, tree);
    }

    printTree(tree);
    printf("\n\nAltura: %d", height(tree));

    freeTree(tree);

    return 0;
}