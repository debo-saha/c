#include <stdio.h>
#include <stdlib.h>
struct Node{
    int data;
    struct Node* next;
};

struct Node *insertAtFirst(struct Node* head,int data){

    struct Node* ptr=(struct Node*)malloc(sizeof(struct Node));
    ptr->next=head;
    ptr->data=data;
    return ptr;

}


struct Node* insertAtMiddle(struct Node* head,int data, int index){

    struct Node* ptr=(struct Node*)malloc(sizeof(struct Node));
    int i=0;
    struct Node* p=head;
    while(i!=index-1){
        p=p->next;
        i++;
    }
    ptr->data=data;
    ptr->next=p->next;
    p->next=ptr;

    return head;
}


struct Node* insertAtEnd(struct Node* head,int data){
    struct Node* ptr=(struct Node*)malloc(sizeof(struct Node));
    struct Node* p=head;
    while(p->next!=NULL){
        p=p->next;
    }
    p->next=ptr;
    ptr->data=data;
    ptr->next=NULL;

    return head;
}

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
     
    head= insertAtFirst(head,100);

    head=insertAtMiddle(head,8888,3);

    head=insertAtEnd(head,99999);
    traversal(head);

    return 0;
}