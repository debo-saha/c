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


struct Node *deleteatFirst(struct Node* head){
    struct Node* ptr;
    ptr=head;
    head=head->next;
    free(ptr);
    return head;

}

struct Node *deleteatIndex(struct Node* head,int index){
    struct Node* ptr=head;
    int i=0;
    while(i<index-1){
        ptr=ptr->next;
        i++;
    }
    struct Node* q=ptr->next;
    ptr->next=q->next;
    free(q);
    return head;

    

}


struct Node* deleteatEnd(struct Node* head){
    struct Node* ptr=head;
    struct Node* q=head->next;
    while(q->next!=NULL){
        ptr=ptr->next;
        q=q->next;
    }
    ptr->next=NULL;

    free(q);
    return head;
}
int main(){

    struct Node* head=(struct Node*)malloc(sizeof(struct Node));
    struct Node* sec=(struct Node*)malloc(sizeof(struct Node));
    struct Node* third=(struct Node*)malloc(sizeof(struct Node));
    struct Node* forth=(struct Node*)malloc(sizeof(struct Node));

   
    head->data=5;
    head->next=sec;

  
    sec->data=51;
    sec->next=third;


    third->data=15;
    third->next=forth;


 
    forth->data=115;
    forth->next=NULL;
    traversal(head);

    // head=deleteatFirst(head);
    printf("hdschsc\n");
    traversal(head);
    
    // head=deleteatIndex(head,2);
    printf("uhdueu\n");


    head=deleteatEnd(head);
    head=deleteatEnd(head);
    traversal(head);
    return 0;
}