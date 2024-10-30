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


int isBST(struct Node* root){
    static struct Node* prev=NULL;
    if(root!=NULL){
        if(!isBST(root->left)){
            return 0;
        }
        if(prev!=NULL && root->data <= prev->data){
            return 0;
        }
        prev=root;

        return isBST(root->right);
    }
    else{
        return 1;
    }
}

int main(){


    struct Node* root=CreateNode(5);
    struct Node* n1=CreateNode(3);
    struct Node* n2=CreateNode(6);
    struct Node* n3=CreateNode(1);
    struct Node* n4=CreateNode(4);

    root->left=n1;
    root->right=n2;
    n1->right=n4;
    n1->left=n3;

    inOrderTraversal(root);

    printf("\n");

    printf("%d",isBST(root));

    return 0;
}