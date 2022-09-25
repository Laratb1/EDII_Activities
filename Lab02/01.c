#include <stdio.h>
#include <stdlib.h>
#include "bst.h"

int main(){
    Bst *tree1 = createEmptyTree();
    tree1 = createTree(3, NULL, NULL);

    Bst *tree2 = createEmptyTree();
    tree2 = createTree(2, NULL, NULL);

    Bst *tree = createEmptyTree();
    tree = createTree(1, tree1, tree2);

    tree = insert(3, tree);

    printTree(tree);

    freeTree(tree);

    return 0;
}