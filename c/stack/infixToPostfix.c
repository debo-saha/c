#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct stack{
    int size;
    int top;
    char *arr;

};
int isEmpty(struct stack * ptr){
    return ptr->top==-1;
}
int isFull(struct stack *ptr){
    return ptr->top==ptr->size-1;
}

int pop(struct stack *sp){
    if(isEmpty(sp)){
        printf("Stack UnderFlow");
        return -1;
    }
    else{
        int val=sp->arr[sp->top];
        sp->top--;
        return val;
    }
}

void push(struct stack *sp,char ch){
    if(isFull(sp)) printf("Stack OverFlow");
    else{
        sp->top++;
        sp->arr[sp->top]=ch;
    }
}
int isOperator(char a){
    if(a=='/' || a=='*' || a== '+' || a== '-') return 1;
    else return 0;
}
int stackTop(struct stack *sp){
    return sp->arr[sp->top];
}
int precedence(char ch){
    if(ch=='/'|| ch=='*') return 3;
    else if(ch=='-' || ch == '+') return 2;
    else return 1;
}
char *infixToPostfix(char * ch){
    struct stack *sp = (struct stack *)malloc(sizeof(struct stack));
    sp->size=50;
    sp->top=-1;
    sp->arr= (char*)malloc(sp->size*sizeof(char)); 
    char * Postfix=(char*)malloc((strlen(ch)+1)*sizeof(char));
    int i=0,j=0;
    while (ch[i]!='\0'){
        if(!isOperator(ch[i])){
            Postfix[j]=ch[i];
            i++;
            j++;
        }
        else{
            if(precedence(ch[i])>precedence(stackTop(sp))) {
                push(sp,ch[i]);
                i++;
            }
            else{
                Postfix[j]=pop(sp);
                j++;
            }

        }
    }
    while (!isEmpty(sp)){
        Postfix[j]=pop(sp);
        j++;
    }
   Postfix[j]='\0';
   return Postfix;
}  

int main(){

    char *infix="x-y/z-k*d";
    // char postFix=;
    printf("%s",infixToPostfix(infix));

    return 0;
}