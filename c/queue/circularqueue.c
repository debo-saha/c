#include<stdio.h>
#include<stdlib.h>

struct circularQueue{
    int size;
    int font;
    int rear;
    int *arr;
};
int isFull(struct circularQueue *q){
    return (q->rear + 1)%q->size == q->font;
}


int isEmpty(struct circularQueue *q){
    return q->rear  == q->font;
}

void enQueue(struct circularQueue *q,int val){
    if (isFull(q)) printf("Queue Overflow\n");
    else{
        q->rear=(q->rear+1)%q->size;
        q->arr[q->rear]=val;
        printf("Enqueued value is : %d \n",val);
    }
}

int deQueue(struct circularQueue *q){
    if(isEmpty(q)) {
        printf("Queue Underflow\n");
        return -1;
    }
    else{
        q->font=(q->font+1)%q->size;
        int val=q->arr[q->font];
        return val;
    }
}

int main(){
    struct circularQueue q;
    q.size=4;
    q.font=q.rear=0;
    q.arr=(int*)malloc(q.size*sizeof(int));
    
    enQueue(&q,45);
    enQueue(&q,85);
    enQueue(&q,75);
    enQueue(&q,65);
    enQueue(&q,15);
    printf("%d\n",deQueue(&q));
    printf("%d\n",deQueue(&q));
    printf("%d\n",deQueue(&q));
    printf("%d\n",deQueue(&q));
    return 0;
}