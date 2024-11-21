/*
    binary search tree'de en az bir cocugu olan dugumlerin 
    sayisini bulan rekursif fonks.
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
int enAzBirCocukluDugum();

int main() {

    BTREE root = NULL;
    root = insert(root, 8);
    root = insert(root, 3);
    root = insert(root, 10);
    root = insert(root, 1);
    root = insert(root, 6);
    root = insert(root, 4);
    root = insert(root, 7);
    root = insert(root, 14);
    root = insert(root, 13);
    int count = enAzBirCocukluDugum(root);
    printf("en az bir cocuklu dugum sayisi : %d\n", count);
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

int enAzBirCocukluDugum(BTREE root) {
    int dugum = 0;
    if(root==NULL) return 0;
    if(root->left!=NULL || root->right!=NULL) {
        dugum = 1;
    }
    dugum += enAzBirCocukluDugum(root->left);
    dugum += enAzBirCocukluDugum(root->right);
    return dugum;
}
