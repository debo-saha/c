#include <stdio.h>
#include <stdlib.h>
struct stack{
    int size;
    int top;
    int *arr;

};

int isEmpty(struct stack *ptr){
    if(ptr->top==-1) return 1;
    else return 0;
}
int isFull(struct stack *ptr){
    if(ptr->top==ptr->size-1) return 1;
    else return 0;
}
void push(struct stack *ptr,int val){
    if(isFull(ptr)) printf("Stack OverFlow\n");
    else {
        ptr->top++;
        ptr->arr[ptr->top]=val;
    }
}

int pop(struct stack *ptr){
    if(isEmpty(ptr)) printf("StackUnderflow");
    else{
        int val=ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }

}
int main(){

    struct stack *s=(struct stack*)malloc(sizeof(struct stack)) ;
    s->size=5;
    s->top=-1;
    s->arr= (int*)malloc(s->size*sizeof(int));

printf("%d",isEmpty(s));
printf("%d",isFull(s));

// push(s,5);
pop(s);
printf("%d",isEmpty(s));
printf("%d",isFull(s));

    return 0;
}