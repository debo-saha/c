#include <stdio.h>
void swap(int *a, int *b) {
    int temp = *a;  
    *a = *b;      
    *b = temp;   
}

void delete(int arr[],int *size){
    if(*size==0) return;

    arr[1]=arr[*size];
    (*size)--;

    int i=1;
    while(i<*size){
        int rightSide=2*i+1;
        int leftSide=2*i;
        if(leftSide<*size && arr[leftSide]>arr[i]){
            swap(&arr[i],&arr[leftSide]);
            i=leftSide;
        }
        else if(rightSide<*size && arr[rightSide]>arr[i]){
            swap(&arr[i],&arr[rightSide]);
            i=rightSide;
        }
        else return;
    }
}

void insert(int arr[],int *size,int val){
    *size=*size+1;
    int index=*size;
    arr[index]=val;
    while(index>1){
        int parent=index/2;
        if(arr[parent]<arr[index]){
            swap(&arr[parent],&arr[index]);
            index=parent;
        }
        else return;
    }
}

int main(){
    int arr[100];
    int size=0;
    insert(arr,&size,88888);
    insert(arr,&size,188);
    insert(arr,&size,588);
    insert(arr,&size,888);
    for(int i=1;i<=size;i++) printf(" %d ",arr[i]);
    delete(arr,&size);
    delete(arr,&size);
    for(int i=1;i<=size;i++) printf("  \n %d ",arr[i]);
    return 0;
}