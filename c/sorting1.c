#include<stdio.h>
#include<stdbool.h>
#include<limits.h>
int main(){

//FIND THE PAIRS WHOSE SOME IS  EQUAL TO GIVEN VALUE


// int n;
// printf("ENTER THE ARRAY SIZE :");
// scanf("%d",&n);
// int arr[n];
// for(int i=1;i<=n;i++){
//     printf("ENTER THE %d ELEMENT: ",i);
//     scanf("%d",&arr[i-1]);
// }
// int z;
// printf("ENTER THE TARGET SUM :");
// scanf("%d",&z);
// int i=0,j=n-1;
// while (i<j){
//     if(arr[i]+arr[j]==z) {
//         printf("THE PAIRS ARE(%d,%d)",arr[i],arr[j]);
//         i++;
//         j--;
//     }
//     else if(arr[i]+arr[j]>z) j--;
//     else i++;
// }



//FIND THE DUPLIICATE NUMBER INN THE ARRAY



// int n;
// printf("ENTER THE ARRAY SIZE :");
// scanf("%d",&n);
// int arr[n];
// for(int i=1;i<=n;i++){
//     printf("ENTER THE %d ELEMENT: ",i);
//     scanf("%d",&arr[i-1]);
// }
// int sum1=0,sum2=0;
// for(int i=1;i<=n-1;i++){
//     sum1+=i;
// }
// for(int j=1;j<=n;j++){
//     sum2+=arr[j-1];
// }
// printf("THE EXTRA NUMBER IS : %d",sum2-sum1);



//                                              SORTING

//BUBBLE SORT
//(STABLE SORT)

// SORTING IN ASSENDING ORDER 

// int n;
// printf("ENTER THE ARRAY SIZE :");
// scanf("%d",&n);
// int arr[n];
// for(int i=1;i<=n;i++){
//     printf("ENTER THE %d ELEMENT: ",i);
//     scanf("%d",&arr[i-1]);
// }
// for(int i=0;i<=n-1;i++){
//     printf("%d ",arr[i]);
// }
// printf("\nTHE SORTIGN ARRAY IN ASSENDING ORDER IS :\n");
// for(int i=0;i<=n-1;i++){
//     bool flag=true;
//     for(int j=0;j<=n-2-i;j++){
//         if(arr[j]>arr[j+1]){
//             int c =arr[j];
//             arr[j]=arr[j+1];
//             arr[j+1]=c;
//         flag=false;
//         }
//     }
//     if(flag==true) break;
// }
// for(int i=0;i<=n-1;i++){
//     printf("%d ",arr[i]);
// }



// SORTING IN DECENDIING ORDER



// int n;
// printf("ENTER THE ARRAY SIZE :");
// scanf("%d",&n);
// int arr[n];
// for(int i=1;i<=n;i++){
//     printf("ENTER THE %d ELEMENT: ",i);
//     scanf("%d",&arr[i-1]);
// }
// for(int i=0;i<=n-1;i++){
//     printf("%d ",arr[i]);
// }
// printf("\nTHE SORTINGN ARRAY IN DESENDING ORDER IS :\n");
// for(int i=0;i<=n-1;i++){
//     bool flag=true;
//     for(int j=0;j<=n-2-i;j++){
//         if(arr[j]<arr[j+1]){
//             int c =arr[j];
//             arr[j]=arr[j+1];
//             arr[j+1]=c;
//         flag=false;
//         }
//     }
//     if(flag==true) break;
// }
// for(int i=0;i<=n-1;i++){
//     printf("%d ",arr[i]);
// }



// SELECTION SORT

//(NSTABLE SORT)

// int n;
// printf("ENTER THE ARRAY SIZE :");
// scanf("%d",&n);
// int arr[n];
// for(int i=1;i<=n;i++){
//     printf("ENTER THE %d ELEMENT: ",i);
//     scanf("%d",&arr[i-1]);
// }
// for(int i=0;i<=n-1;i++){
//     printf("%d ",arr[i]);
// }

// for(int i=0;i<n-1;i++){
//     int index;
//     int min=INT_MAX;
//     for(int j=i;j<=n-1;j++){
//         if(min>arr[j]) {
//             min=arr[j];
//             index=j;
//         }
//     }
//     int c=arr[i];
//     arr[i]=arr[index];
//     arr[index]=c;
// }
// printf("\n The Sorted Array Is :\n");
// for(int i=0;i<n;i++){
//     printf("%d ",arr[i]);
// }



//INSERTION SORT

// (STABLE SORT)


// int n;
// printf("ENTER THE ARRAY SIZE :");
// scanf("%d",&n);
// int arr[n];
// for(int i=1;i<=n;i++){
//     printf("ENTER THE %d ELEMENT: ",i);
//     scanf("%d",&arr[i-1]);
// }
// for(int i=0;i<=n-1;i++){
//     printf("%d ",arr[i]);
// }
// for(int i=1;i<=n-1;i++){
//    int j=i;
//    while((j>=1)&&(arr[j]<arr[j-1])){
//     int c=arr[j];
//     arr[j]=arr[j-1];
//     arr[j-1]=c;
//     j--;
//    }
// }
// printf("\n The Array After Sorting Is :\n");
// for(int i=0;i<=n-1;i++){
//     printf("%d ",arr[i]);
// } 


    return 0;
}
