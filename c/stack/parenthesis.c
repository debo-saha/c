#include <stdio.h>
#include <stdlib.h>
struct stack{
    int size;
    int top;
    char *arr;

};

int isEmpty(struct stack *ptr){
    return ptr->top==-1;
}
int isFull(struct stack *ptr){
    return ptr->top == ptr->size - 1;
}
void push(struct stack *ptr,char val){
    if(isFull(ptr)) printf("Stack OverFlow\n");
    else {
        ptr->top++;
        ptr->arr[ptr->top]=val;
    }
}

int pop(struct stack *ptr){
    if(isEmpty(ptr)){
         printf("StackUnderflow");
         return -1;
    }
    else{
        int val=ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }

}

int parenThesisChecker(char * ch){
    struct stack *sp = (struct stack *)malloc(sizeof(struct stack));
    sp->size=50;
    sp->top=-1;
    sp->arr= (char*)malloc(sp->size*sizeof(char));

    for(int i=0;ch[i]!='\0';i++){
        if(ch[i]=='('){
            push(sp,'(');
        }
        else if (ch[i]==')'){
            if(isEmpty(sp)) return 0;
            else pop(sp);
        }
    }
    if(isEmpty(sp)) return 1;
    else return 0;
}  

int main(){

    char str[]="(2+8)+5-(8)*(8-25)";
    if(parenThesisChecker(str)){
        printf("Balenced");
    }
    else printf("NOt Balenced");
    return 0;
}