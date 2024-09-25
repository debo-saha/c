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


int peek(struct stack *ptr,int i){
    if(ptr->top-i+1 <0) {
        printf("Not A valid Position");
        return -1;
    }
    else{
        return ptr->arr[ptr->top-i+1];
    }
}


int main(){

    struct stack *s=(struct stack*)malloc(sizeof(struct stack)) ;
    s->size=5;
    s->top=-1;
    s->arr= (int*)malloc(s->size*sizeof(int));

printf("%d\n",isEmpty(s));
printf("%d\n",isFull(s));

// push(s,5);
// push(s,55);
// push(s,3);
// push(s,1);
// push(s,7);
// push(s,8);
int ans= peek(s,10);
if(ans==-1) printf("Enter A Valid number\n");
else{
    printf("%d\n",ans);
}
printf("%d\n",isEmpty(s));
printf("%d\n",isFull(s));

    return 0;
}