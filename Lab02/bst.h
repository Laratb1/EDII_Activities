#ifndef BST_H
#define BST_H

typedef struct bst Bst;

Bst *createEmptyTree(void);

Bst *createTree(int key, Bst *left, Bst *right);

Bst *insert(int key, Bst *tree);

int emptyTree(Bst *tree);

void printTree(Bst *tree);

Bst *freeTree(Bst *tree);

#endif 