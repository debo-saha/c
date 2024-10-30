#include <stdio.h>
#include <stdlib.h>


struct Node* f=NULL;
struct Node* r=NULL;

struct Node{
    int data;
    struct Node* next;
};

int isEmpty(struct Node* f){
    return f==NULL;
}
int isFull(struct Node* f){
    struct Node* n=(struct Node*)malloc(sizeof(struct Node));
    return n==NULL;
}


void enqueue(int data){
    struct Node* n=(struct Node*)malloc(sizeof(struct Node));
    if(isFull(f)) printf("Queue OverFlow");

    else{
        n->data=data;
        n->next=NULL;
        if(f==NULL){
            f=r=n;
        }
        else{
            r->next=n;
            r=n;
        }
    }
}

int dequeue(){
    int val=-1;
    struct Node* ptr=f;
    if(isEmpty(f)){
        printf("Queue Underflow");
    }
    else{
        f=f->next;
        val=ptr->data;
        free(ptr);
    }
    return val;
}

void traversal(struct Node* ptr){
    while(ptr!=NULL){
        printf("Elements : %d\n",ptr->data);
        ptr=ptr->next;
    }
}

int main(){

    traversal(f);

    // enqueue(550);
    // enqueue(650);
    // enqueue(5880);

    traversal(f);

    int elm=dequeue();
    printf("%d",elm);
    elm=dequeue();
    printf("%d",elm);
    traversal(f);

    return 0;
}