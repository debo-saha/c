#include<stdio.h>
void swap(int *a, int *b) {
    int temp = *a;  
    *a = *b;      
    *b = temp;   
}

int partition(int arr[],int s,int e){
    int pivot=arr[s];
    int count=0;
    for(int i=s+1;i<=e;i++){
        if(arr[i]<pivot) count++;
    }
    int pivotIndex=s+count;
    swap(&arr[pivotIndex],&arr[s]);

    int i=s,j=e;
    while(i<pivotIndex && j>pivotIndex){
        while(arr[i]<pivot) {
            i++;
        }
        while(arr[j]>pivot){
            j--;
        }
        if(i<pivotIndex && j>pivotIndex){
            swap(&arr[i],&arr[j]);
            i++;
            j--;
        }

    }
    return pivotIndex;
}


void quickSort(int arr[],int s,int e){

    if(s<e){
        int p=partition(arr,s,e);
        quickSort(arr,s,p-1);
        quickSort(arr,p+1,e);
    }

}


int main()
{

    int arr[] = {5, 8, 9, -100,-1000, 6, 3, 2};
    int size = 8;
    int i = 0;
    int j = size - 1;
    quickSort(arr, i, j);
    for (int ii = 0; ii < size; ii++)
    {
        printf(" %d ", arr[ii]);
    }

    return 0;
}