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
int match(char a,char b){
    if(a=='{' && b=='}') return 1;
    else if(a=='[' && b==']') return 1;
    else if(a=='(' && b==')') return 1;
}
int MultipleparenThesisChecker(char * ch){
    struct stack *sp = (struct stack *)malloc(sizeof(struct stack));
    sp->size=50;
    sp->top=-1;
    sp->arr= (char*)malloc(sp->size*sizeof(char));

    for(int i=0;ch[i]!='\0';i++){
        if(ch[i]=='(' || ch[i]=='{' || ch[i]=='['){
            push(sp,ch[i]);
        }
        else if (ch[i]==')' || ch[i]=='}' || ch[i]==']'){
            if(isEmpty(sp)) return 0;
            else {
                char PopElement=pop(sp);
                if(!match(PopElement,ch[i])) {
                    return 0;
                    break;
                }
            }
        }
    }
    if(isEmpty(sp)) return 1;
    else return 0;
}  

int main(){

    char str[]="{7-(3-2)+[8+99-11]}";
    if(MultipleparenThesisChecker(str)){
        printf("Balenced");
    }
    else printf("NOt Balenced");
    return 0;
}