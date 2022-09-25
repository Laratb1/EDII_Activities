#include <stdio.h>
#include <stdlib.h>
#include "bst.h"

int main(){
    Bst *tree = createEmptyTree();
    tree = createTree(2, NULL, NULL);

    tree = insert(1, tree);
    tree = insert(3, tree);
    tree = insert(4, tree);
    tree = insert(5, tree);
    tree = insert(6, tree);

    preOrder(tree);
    printf("\n");
    inOrder(tree);
    printf("\n");
    posOrder(tree);
    


    return 0;
}