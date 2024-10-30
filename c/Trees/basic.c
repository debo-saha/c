#include<stdio.h>
#include <malloc.h>
struct Node{
    int data;
    struct Node* right;
    struct Node* left;
};

struct Node* CreateNode(int data){
    struct Node* n=(struct Node*)malloc(sizeof(struct Node));

    n->data=data;
    n->right=NULL;
    n->left=NULL;

    return n;
}

int main(){

/*
    struct Node* root=(struct Node*)malloc(sizeof(struct Node));

    root->data=5;
    root->right=NULL;
    root->left=NULL;

    struct Node* n1=(struct Node*)malloc(sizeof(struct Node));

    n1->data=50;
    n1->right=NULL;
    n1->left=NULL;

    struct Node* n2=(struct Node*)malloc(sizeof(struct Node));

    n2->data=15;
    n2->right=NULL;
    n2->left=NULL;


    // link the node

    root->left=n1;
    root->right=n2;

*/

    struct Node* root=CreateNode(15);
    struct Node* n1=CreateNode(15);
    struct Node* n2=CreateNode(15);

    root->left=n1;
    root->right=n2;


    return 0;
}