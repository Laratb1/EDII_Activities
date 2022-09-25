#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "bst.h"

int main(){
    srand(time(NULL)); // should only be called once
    int r; // returns a pseudo-random integer between 0 and RAND_MAX
    
    Bst *treeLeft = createEmptyTree();
    Bst *treeRight = createEmptyTree();
    Bst *tree = createTree(3, NULL, NULL);

    int N;
    scanf("%d", &N);

    r = rand();
    createTree(r, createEmptyTree(), createEmptyTree());
    for(int i = 0; i <= N; i++){
        r = rand();
        tree = insert(r, tree);
    }

    printTree(tree);

    return 0;
}