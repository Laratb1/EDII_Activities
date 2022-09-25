#include <stdio.h>
#include <stdlib.h>
#include "bst.h"

typedef struct bst{
    int key;
    struct bst *left;
    struct bst *right;
} Bst;

// ====== EXERCICIO 01 =======

Bst *createEmptyTree(void){
    return NULL;
}

Bst *createTree(int key, Bst *left, Bst *right){
    Bst *tree = (Bst*) malloc(sizeof(Bst));
    tree->key = key;
    tree->left = left;
    tree->right = right;
    return tree;
}

Bst *insert(int key, Bst *tree){
    if(emptyTree(tree)){
        return createTree(key, NULL, NULL);
    }
    if(key < tree->key){
        tree->left = insert(key, tree->left);
    }else{
        tree->right = insert(key, tree->right);
    }
    return tree;
}

int emptyTree(Bst *tree){
    return tree == NULL;
}

void printTree(Bst *tree){
    if(!emptyTree(tree)){
        printf("%d ", tree->key);
        printTree(tree->left);
        printTree(tree->right);
    }
}

Bst *freeTree(Bst *tree){
    if(!emptyTree(tree)){
        freeTree(tree->left);
        freeTree(tree->right);
        free(tree);
    }
    return NULL;
}

// ====== EXERCICIO 02 =======

static int max(int a, int b){
    return (a > b) ? a : b;
}

int height(Bst *tree){
    if(emptyTree(tree)){
        return -1;
    }else{
        return 1 + max(height(tree->left), height(tree->right));
    }
}

// ====== EXERCICIO 03 =======

void preOrder(Bst *tree){
    if(!emptyTree(tree)){
        printf("%d ", tree->key);
        printTree(tree->left);
        printTree(tree->right);
    }
}

void inOrder(Bst *tree){
    if(!emptyTree(tree)){
        printTree(tree->left);
        printf("%d ", tree->key);
        printTree(tree->right);
    }
}

void posOrder(Bst *tree){
    if(!emptyTree(tree)){
        printTree(tree->right);
        printTree(tree->left);
        printf("%d ", tree->key);
    }
}


void rec_preorder(Bst *t, void (*visit)(Bst*)){

}