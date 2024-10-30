#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node* next;
};

int isEmpty(struct Node* top){
    return top==NULL;
}

int isFull(struct Node* top){
    struct Node* p=(struct Node*)malloc(sizeof(struct Node));
    return p==NULL;
}
void traversal(struct Node* ptr){

    while(ptr!=NULL){
        printf("Elements :%d\n",ptr->data);
        ptr= ptr->next;
    }

}


int pop(struct Node** top){
    if(isEmpty(*top)) printf("Stack UnderFlow");
    else{
        struct Node* ptr=*top;
        (*top)=(*top)->next;
        int elm=ptr->data;
        free(ptr);
        return elm;
    }
}

struct Node* push(struct Node* top,int data){
    if(isFull(top)) printf("Stack Overflow");
    else{
        struct Node* ptr=(struct Node*)malloc(sizeof(struct Node));
        ptr->next=top;
        ptr->data=data;
        top=ptr;
    }
    return top;
}


int main(){

    struct Node* top=NULL;

   top=push(top,1000); 
   top=push(top,1001); 
   top=push(top,1002); 
   int elm=pop(&top);
   printf("%d \n",elm);
    traversal(top);
    return 0;
}