#include<stdio.h>
int main(){


//MOVE ALL ZERO TO THE END OF THE ARRAY WITHOUT CHANGING ANYTHING 


//WITH HELP OF EXTRA ARRAY

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
// int index=0;
// int brr[n];
// for(int i=1;i<=n;i++){
//     if(arr[i-1]!=0){
//         brr[index]=arr[i-1];
//         index++;
//     }
// }
// while(index!=n){
//     brr[index]=0;
//     index++;
// }
// printf("\nTHE NEW ARRAY IS :\n");
// for(int i=0;i<=n-1;i++){
//     printf("%d ",brr[i]);
// }

//WITHOUT HELP OF EXTRA ARRAY

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
//     for(int j=0;j<n-1-i;j++){
//         if(arr[j]==0){
//             int c =arr[j];
//             arr[j]=arr[j+1];
//             arr[j+1]=c;
//         }
//     }
// }
// printf("\nTHE NEW ARRAY IS \n");
// for(int i=0;i<=n-1;i++){
//     printf("%d ",arr[i]);
// }



// RETURN Kth SMALLEST ELEMENT IN THE ARRAY 



// int n;
// printf("ENTER THE ARRAY SIZE :");
// scanf("%d",&n);
// int arr[n];
// for(int i=1;i<=n;i++){
//     printf("ENTER THE %d ELEMENT: ",i);
//     scanf("%d",&arr[i-1]);
// }
// int k;
// printf("\nEnter K :");
// scanf("%d",&k);
// for(int i=0;i<=n-1;i++){
//     printf("%d ",arr[i]);
// }
// for(int i=0;i<=n-1;i++){
//     for(int j=0;j<=n-2-i;j++){
//         if(arr[j]>arr[j+1]){
//         int c=arr[j];
//         arr[j]=arr[j+1];
//         arr[j+1]=c;
//         }
//     }
// }
// printf("\nThe Array After Sorting Is :\n");
// for(int i=0;i<=n-1;i++){
//     printf("%d ",arr[i]);
// }
// printf("\nThe Kth Smallest  Element Is :%d",arr[k-1]);



// FIND THE SUM OF 1ST AND 2ND SMALLEST NUMBER FORMED BY AN GIVEN ARRAY



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
// printf("\nThe Array After Sorting Is :\n");
// for(int i=0;i<=n-1;i++){
//     printf("%d ",arr[i]);
// }
// int number1=0;
// for(int i=0;i<n;i++){
//     number1=arr[i]+number1*10;
// }
// printf("\nTHE SMALLEST NUMBER IS :%d",number1);
// for(int i=0;i<n;i++){
//     if(arr[n-i-1]!=arr[n-2-i]){
//         int c=arr[n-i-2];
//         arr[n-i-2]=arr[n-i-1];
//         arr[n-i-1]=c;
//         break;
//     }
// }
// int number2=0;
// for(int i=0;i<n;i++){
//     number2=arr[i]+number2*10;
// }
// printf("\nTHE 2ND SMALLEST NUMBER IS :%d\n",number2);
// printf("THE SUM OF 1ST AND 2ND SMALLEST NUMBER FORMED BY THE GIVEN ARRAY IS :%d",number1+number2);
  
    return 0;
}