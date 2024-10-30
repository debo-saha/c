#include<stdio.h>
#include<malloc.h>

struct Node{

    int data;
    struct Node* right;
    struct Node* left;
};

void traversal(struct Node* root){
    if(root!=NULL){
        traversal(root->left);
        printf("%d ",root->data);
        traversal(root->right);
    }
}

struct Node* create(int data){
    struct Node* root=(struct Node*)malloc(sizeof(struct Node));
    root->right=NULL;
    root->left=NULL;
    root->data=data;
    return root;
}

struct Node* searchITER(struct Node* root,int key){
    while (root!=NULL){
       if(root->data==key){
            return root;
        }
        else if(root->data>key){
            root=root->left;
        }
        else{
            root=root->right;
        }
    }
    return NULL;
    
    
}

int main(){
    struct Node* root=create(5);
    struct Node* n1=create(3);
    struct Node* n2=create(6);
    struct Node* n3=create(1);
    struct Node* n4=create(4);

    root->left=n1;
    root->right=n2;
    n1->right=n4;
    n1->left=n3;

    traversal(root);

    struct Node* ans=searchITER(root,5555);

    if(ans==NULL){
        printf("Key Not Found");
    }
    else{
        printf("This is Found : %d",ans->data);
    }

    return 0;
}