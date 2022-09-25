#ifndef BST_H
#define BST_H

typedef struct bst Bst;

Bst *createEmptyTree(void);

Bst *createTree(int key, Bst *left, Bst *right);

Bst *insert(int key, Bst *tree);

int emptyTree(Bst *tree);

void printTree(Bst *tree);

Bst *freeTree(Bst *tree);

int height(Bst *tree);

void preOrder(Bst *tree);

void inOrder(Bst *tree);

void posOrder(Bst *tree);

void rec_preorder(Bst *t, void (*visit)(Bst*));

#endif 