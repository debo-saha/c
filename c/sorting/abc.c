#include<stdio.h>
void swap(int *a, int *b) {
    int temp = *a;  
    *a = *b;      
    *b = temp;   
}

// int partition(int arr[],int s,int e){
//     int pivot=arr[s];
//     int count=0;
//     for(int i=s;i<=e;i++){
//         if(pivot>arr[i]) count++;
//     }
//     int pivotIndex=s+count;
//     swap(&arr[pivotIndex],&arr[s]);
//     int i=s,j=e;
//     while(i<=pivotIndex && j>=pivotIndex){
//         if(arr[i]<=pivot) i++;
//         if(arr[j]>=pivot) j--;
//         if(i<pivotIndex && j>pivotIndex){
//             swap(&arr[i],&arr[j]);
//             i++;
//             j--;
//         }
//     }
//     return pivotIndex;
// }

// void quickSort(int arr[],int s,int e){
//     if(s<e){
//         int p=partition(arr,s,e);
//         quickSort(arr,s,p-1);
//         quickSort(arr,p+1,e);
//     }
// }

// void merge(int arr[],int s,int mid,int e){
//     int i,j,k;
//     i=k=s;
//     j=mid+1;
//     int brr[e+1];
//     while(i<=mid && j<=e){
//         if(arr[i]<arr[j]){
//             brr[k]=arr[i];
//             k++;
//             i++;
//         }
//         else if(arr[j]<arr[i]){
//             brr[k]=arr[j];
//             k++;
//             j++;
//         }
//     }
//     while(i<=mid){
//         brr[k]=arr[i];
//         k++;
//         i++;
//     }
//     while(j<=e){
//         brr[k]=arr[j];
//         k++;
//         j++;
//     }
//     for(int l=s;l<=e;l++){
//         arr[l]=brr[l];
//     }
// }

// void mergeSort(int arr[],int s,int e){

//     if(s<e){
//         int mid=(s+e)/2;
//         mergeSort(arr,s,mid);
//         mergeSort(arr,mid+1,e);
//         merge(arr,s,mid,e);
//     }
// }


void heapify(int arr[],int n,int i){
    int largest=i;
    int right=2*i+1;
    int left=2*i;
    if(left<n && arr[i]<arr[left]){
        largest=left;
    }
    if(right<n && arr[i]<arr[right]){
        largest=right;
    }
    while(largest!=i){
        swap(&arr[largest],&arr[i]);
        heapify(arr,n,largest);
    }
}

void buildHeap(int arr[],int n){
    for(int i=n/2;i>=1;i--){
        heapify(arr,n,i);
    }
}

void heapSort(int arr[], int n){
    buildHeap(arr,n);
    for(int t=n;t>=2;t--){
        swap(&arr[1], &arr[t]);
        heapify(arr,1,t-1);
    }
}
int main()
{

    int arr[] = {-1, 8, 9, -100,-1000, 6, 3, 2};
    int size = 8;
    // int i = 0;
    // int j = size - 1;
    heapSort(arr, size);
    for (int ii = 0; ii <= size; ii++)
    {
        printf(" %d ", arr[ii]);
    }

    return 0;
}