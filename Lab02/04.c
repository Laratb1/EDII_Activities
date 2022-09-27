#include <stdio.h>
#include <stdlib.h>
#include "bst.h"

int main(){
    Bst *tree = createEmptyTree();
    tree = createTree(2, NULL, NULL);

    return 0;
}