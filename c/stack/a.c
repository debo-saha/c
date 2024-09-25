#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

// Define a stack structure
typedef struct {
    int top;
    int capacity;
    char* array;
} Stack;

// Function to create a stack
Stack* createStack(int capacity) {
    Stack* stack = (Stack*)malloc(sizeof(Stack));
    stack->capacity = capacity;
    stack->top = -1;
    stack->array = (char*)malloc(stack->capacity * sizeof(char));
    return stack;
}

// Function to check if the stack is empty
int isEmpty(Stack* stack) {
    return stack->top == -1;
}

// Function to check if the stack is full
int isFull(Stack* stack) {
    return stack->top == stack->capacity - 1;
}

// Function to push an element to the stack
void push(Stack* stack, char item) {
    if (isFull(stack))
        return;
    stack->array[++stack->top] = item;
}

// Function to pop an element from the stack
char pop(Stack* stack) {
    if (isEmpty(stack))
        return '\0';
    return stack->array[stack->top--];
}

// Function to return the top element of the stack
char peek(Stack* stack) {
    if (isEmpty(stack))
        return '\0';
    return stack->array[stack->top];
}

// Function to check if the character is an operand
int isOperand(char ch) {
    return isalnum(ch);
}

// Function to return the precedence of operators
int precedence(char ch) {
    switch (ch) {
        case '+':
        case '-':
            return 1;
        case '*':
        case '/':
            return 2;
        case '^':
            return 3;
        default:
            return -1;
    }
}

// Function to convert infix to postfix
void infixToPostfix(char* exp) {
    int i, k;
    Stack* stack = createStack(100);
    if (!stack) {
        printf("Memory allocation error!\n");
        return;
    }

    for (i = 0, k = -1; exp[i]; ++i) {
        // If the character is an operand, add it to the output
        if (isOperand(exp[i])) {
            exp[++k] = exp[i];
        }
        // If the character is '(', push it to the stack
        else if (exp[i] == '(') {
            push(stack, exp[i]);
        }
        // If the character is ')', pop and output from the stack until '(' is found
        else if (exp[i] == ')') {
            while (!isEmpty(stack) && peek(stack) != '(') {
                exp[++k] = pop(stack);
            }
            if (!isEmpty(stack) && peek(stack) != '(') {
                printf("Invalid expression\n");
                return;
            } else {
                pop(stack);
            }
        } else { // An operator is encountered
            while (!isEmpty(stack) && precedence(exp[i]) <= precedence(peek(stack))) {
                exp[++k] = pop(stack);
            }
            push(stack, exp[i]);
        }
    }

    // Pop all the operators from the stack
    while (!isEmpty(stack)) {
        exp[++k] = pop(stack);
    }

    exp[++k] = '\0';
    printf("Postfix expression: %s\n", exp);
}

int main() {
    char exp[] = "a+b*(c^d-e)^(f+g*h)-i";
    infixToPostfix(exp);
    return 0;
}
