#include <stdio.h>
#include <stdlib.h>
struct Node{
    int data;
    struct Node* next;
};

void traversal(struct Node* head){

    struct Node* ptr=head;
    do
    {
        printf("Elements Is : %d\n",ptr->data);
        ptr=ptr->next;
    } while (ptr!=head);
}

struct Node* insertionAtFirst(struct Node* head,int data){

    struct Node* ptr=(struct Node*)malloc(sizeof(struct Node));

    struct Node* p=head->next;
    do
    {
        p=p->next;
    } while (p->next!=head);

    p->next=ptr;
    ptr->data=data;
    ptr->next=head;
    head=ptr;
    return head;

}


int main(){

    struct Node* head=(struct Node*)malloc(sizeof(struct Node));
    struct Node* sec=(struct Node*)malloc(sizeof(struct Node));
    struct Node* third=(struct Node*)malloc(sizeof(struct Node));
    struct Node* forth=(struct Node*)malloc(sizeof(struct Node));

    // Head and sec point
    head->data=500;
    head->next=sec;

    // sec and third point
    sec->data=112;
    sec->next=third;

    // third and 4th point
    third->data=6152;
    third->next=forth;


    // Head and sec point
    forth->data=115;
    forth->next=head;
     
    traversal(head);
    head=insertionAtFirst(head,111111);
    head=insertionAtFirst(head,1);
    printf("\ninsetion done \n");
    traversal(head);


    return 0;
}