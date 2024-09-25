#include <stdio.h>
#include<stdlib.h>
struct Queue{
    int size;
    int f;
    int r;
    int *arr;
};
int isEmpty(struct Queue *q){
    return q->f==q->r;
}
int isFull(struct Queue *q){
    return q->r==q->size-1;
}
void enqueue(struct Queue *q,int val){
    if(isFull(q)) printf("Queue Overflow");
    else{
        q->r=q->r+1;
        q->arr[q->r]=val;
    }
}
int dequeue(struct Queue *q){
    int a=-1;
    if(isEmpty(q)) printf("Queue Underflow");
    else{
        q->f=q->f+1;
        a=q->arr[q->f];
    }
    printf("%d",a);
    return a;
}

int main(){
    struct Queue q;
    q.size=5;
    q.f=-1;
    q.r=-1;
    q.arr=(int*)malloc(sizeof(int)*q.size);
    
    // enqueue(&q,5);
    // enqueue(&q,5);
    // enqueue(&q,5);
    // enqueue(&q,5);
    enqueue(&q,55);
    dequeue(&q);
    return 0;
}