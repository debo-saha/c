#include <stdio.h>
#include <stdlib.h>
struct Node{
    int data;
    struct Node* next;
    struct Node* prev;
};

void traversal(struct Node* head){
    struct Node* first=head;
    printf("Left To right :\n");
    while(first!=NULL){
        printf(" %d\n",first->data);
        if (first->next == NULL) {
            break; 
        }
        first=first->next;
    }
    printf("Right to Left:\n");
    while(first!=NULL){
        printf(" %d\n",first->data);
        first=first->prev;
    }

}
int main(){

    struct Node* first=(struct Node*)malloc(sizeof(struct Node));
    struct Node* sec=(struct Node*)malloc(sizeof(struct Node));
    struct Node* third=(struct Node*)malloc(sizeof(struct Node));
    struct Node* forth=(struct Node*)malloc(sizeof(struct Node));

    // Head and sec point
    first->data=5;
    first->next=sec;
    first->prev=NULL;

    // sec and third point
    sec->data=51;
    sec->next=third;
    sec->prev=first;

    // third and 4th point
    third->data=15;
    third->next=forth;
    third->prev=sec;

    // Head and sec point
    forth->data=115;
    forth->prev=third;
    forth->next=NULL;
     
    traversal(first);

    return 0;
}