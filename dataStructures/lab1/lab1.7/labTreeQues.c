/*

*/

#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *left;
    struct node *right;
};
typedef struct node *BTREE;

BTREE newNode();
BTREE insert();
void inorder();
void preorder();
void postorder();

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
    printf("inorder : ");
    inorder(root);
    printf("\npreorder : ");
    preorder(root);
    printf("\npostorder : ");
    postorder(root);

    return 0;
}

BTREE newNode(int x) {
    BTREE p = (BTREE)malloc(sizeof(struct node));
    p->data = x;
    p->left = p->right = NULL;
    return p;
}

BTREE insert(BTREE root, int data) {
    if(root==NULL) {
        root = newNode(data);
    }
    else {
        if(data<root->data) {
            root->left = insert(root->left, data);
        }
        else {
            root->right = insert(root->right, data);
        }
    }
    return root;
}

void inorder(BTREE root) {
    if(root!=NULL) {
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
    }
}

void preorder(BTREE root) {
    if(root!=NULL) {
        printf("%d ", root->data);
        preorder(root->left);
        preorder(root->right);
    }
}

void postorder(BTREE root) {
    if(root!=NULL) {
        postorder(root->left);
        postorder(root->right);
        printf("%d ", root->data);
    }
}