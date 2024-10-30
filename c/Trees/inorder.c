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

void inOrderTraversal(struct Node* root){
    if(root!=NULL){
        
    inOrderTraversal(root->left);
    printf("%d",root->data);
    inOrderTraversal(root->right);
    
    }
}

int main(){


    struct Node* root=CreateNode(4);
    struct Node* n1=CreateNode(1);
    struct Node* n2=CreateNode(6);
    struct Node* n3=CreateNode(5);
    struct Node* n4=CreateNode(2);

    root->left=n1;
    root->right=n2;
    n1->right=n4;
    n1->left=n3;

    inOrderTraversal(root);
    return 0;
}