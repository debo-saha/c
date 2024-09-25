#include<stdio.h>
#include<stdlib.h>


struct Node{
    int data;
    struct Node* next;
};
struct Node * front = NULL;
struct Node * rear = NULL;

void print(struct Node * head){
    struct Node * ptr = head;
    while(ptr != NULL){
        printf(" %d \n", ptr->data);
        ptr = ptr->next;
    }
}

int isEmpty(struct Node * front){
    if(front == NULL){
        return 1;
    }
    return 0;
}

int IsFull(){
    struct Node* n = (struct Node*)malloc(sizeof(struct Node));
    if(n == NULL){
        return 1;
    }
    return 0;
}

void enqueue(int val){
    int count=0;
    if(!IsFull()){
        
        struct Node * n = (struct Node *)malloc(sizeof(struct Node));
        n->data = val;
        n->next = NULL;
        if(front == NULL){
            front = rear = n;
            count++;
        }
        else{
            rear->next = n;
            rear = n;
        }
    }
    else {
        printf("Queue overflow");
    }
}

int dequeue(){
    struct Node * n = front;
    if(isEmpty(front)){
        printf("Queue underflow");
        return -1;
    }
    int val = n->data;
    front = front->next;
    free(n);
    return val;
}

int main(){
    printf("Queue is :\n");
    enqueue(88);
    enqueue(7);
    enqueue(13);
    enqueue(49);
    // enqueue(419);
    // enqueue(-9);
    // enqueue-(49);
    // enqueue(1149);

    print(front);
    
    printf("\n Bequeue Element : \n");
    printf(" %d\n", dequeue());
    // printf(" %d\n", dequeue());
    // printf(" %d\n", dequeue());
    printf("\n After DeQueuing ...\n");
    print(front);
    return 0;
}