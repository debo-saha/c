#include<stdio.h>
#include <stdlib.h>
void swap(int *a, int *b) {
    int temp = *a;  
    *a = *b;      
    *b = temp;   
}
void countSort(int arr[],int n){
    int max=arr[0];
    for(int i=1;i<n;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    int *count =(int*)malloc((max+1)*sizeof(int));
    for(int i=0;i<max+1;i++){
        count[i]=0;
    }
    for(int i=0;i<n;i++){
        count[arr[i]]=count[arr[i]]+1;
    }
    int i=0,j=0;

    while(i<=max){
        if(count[i]>0){
            arr[j]=i;
            j++;
            count[i]=count[i]-1;
        }
        else{
            i++;
        }
    }
}




int main()
{

    int arr[] = {50, 8, 9, 8,9, 6, 3, 2};
    int size = 8;
    int i = 0;
    int j = size - 1;
    countSort(arr,size);
    for (int ii = 0; ii < size; ii++)
    {
        printf(" %d ", arr[ii]);
    }

    return 0;
}