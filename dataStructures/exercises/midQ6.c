/*
    BST'de eklenmek istenen eleman nereye eklenmeli bunu
    gosteren fonks.
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
void printPath();

int main() {

    BTREE root = NULL;
    root = insert(root, 50);
    root = insert(root, 17);
    root = insert(root, 9);
    root = insert(root, 14);
    root = insert(root, 12);
    root = insert(root, 23);
    root = insert(root, 19);
    root = insert(root, 76);
    root = insert(root, 54);
    root = insert(root, 72);
    root = insert(root, 67);
    
    printPath(root, 20);

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
        if(key<root->data) {
            root->left = insert(root->left, key);
        }
        else {
            root->right = insert(root->right, key);
        }
    }
    return root;
}

void printPath(BTREE root, int key) {
    BTREE cursor = root;
    while(cursor!=NULL) {
        if(cursor->data>key) {
            printf("to the left of %d\n", cursor->data);
            cursor = cursor->left;
        }
        else {
            printf("to the right of %d\n", cursor->data);
            cursor = cursor->right;
        }
    }
}