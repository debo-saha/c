#include <stdio.h>
#include <stdlib.h>
struct Node{
    int data;
    struct Node* next;
};

void traversal(struct Node* ptr){

    while(ptr!=NULL){
        printf("Elements :%d\n",ptr->data);
        ptr= ptr->next;
    }

}
int main(){

    struct Node* head=(struct Node*)malloc(sizeof(struct Node));
    struct Node* sec=(struct Node*)malloc(sizeof(struct Node));
    struct Node* third=(struct Node*)malloc(sizeof(struct Node));
    struct Node* forth=(struct Node*)malloc(sizeof(struct Node));

    // Head and sec point
    head->data=5;
    head->next=sec;

    // sec and third point
    sec->data=51;
    sec->next=third;

    // third and 4th point
    third->data=15;
    third->next=forth;


    // Head and sec point
    forth->data=115;
    forth->next=NULL;
     
    traversal(head);

    return 0;
}