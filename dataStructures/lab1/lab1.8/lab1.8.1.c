/*
    BST'de min ve max degeri bul, yazdir
*/

#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *left;
    struct node *right;
};
typedef struct node *BTREE;

BTREE newnode();
BTREE insert();
void findMin();
void findMax();

int main() {

    BTREE root = NULL;
    root = insert(root, 8);
    root = insert(root, 3);
    root = insert(root, 10);
    root = insert(root, 1);
    root = insert(root, 6);
    root = insert(root, 14);
    root = insert(root, 4);
    root = insert(root, 7);
    root = insert(root, 13);

    findMin(root);
    findMax(root);

    return 0;
}

BTREE newnode(int key) {
    BTREE p = (BTREE)malloc(sizeof(struct node));
    p->data = key;
    p->left = p->right = NULL;
    return p;
}

BTREE insert(BTREE root, int key) {
    if(root==NULL) {
        root = newnode(key);
    }
    else {
        if(key < root->data) {
            root->left = insert(root->left, key);
        }
        else {
            root->right = insert(root->right, key);
        }
    }
    return root;
}

void findMin(BTREE root) {
    BTREE cursor = root;
    while(cursor->left!=NULL) {
        cursor = cursor->left;
    }
    printf("min value : %d\n", cursor->data);
}

void findMax(BTREE root) {
    BTREE cursor = root;
    while(cursor->right!=NULL) {
        cursor = cursor->right;
    }
    printf("max value : %d\n", cursor->data);
}