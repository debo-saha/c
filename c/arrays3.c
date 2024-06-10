#include<stdio.h>
#include<stdbool.h>
int main(){


//REVERSE THE ARRAY WITH THE HELP OF AN EXTRA ARRAY


// int n;
// printf("ENTER THE ARRAY SIZE :");
// scanf("%d",&n);
// int arr[n];
// for(int j=1;j<=n;j++){
//     printf("ENTER %d ELEMENT : ",j);
//     scanf("%d",&arr[j-1]);
// }
// int r_arr[n];
// for(int i=1;i<=n;i++){
//     r_arr[i-1]=arr[n-(i-1)-1];
// }
// for(int k=1;k<=n;k++){
//     printf("\nthe %d element of the arrey is :%d ",k,r_arr[k-1]);
// }




//REVERSE AN ARRAY WITHOUT USE OF EXTRA ARRAY


//REVERSE THE ARRAY




// // void reverse_arrey(int arr[],int n){
// //     int i=0;
// //     int j=n;
// //     while(i<j){
// //         int c=arr[i];
// //         arr[i]=arr[j];                                   
// //         arr[j]=c;
// //         i++;
// //         j--;
// //     }
// // }
// int n;
// printf("ENTER THE ARRAY SIZE :");
// scanf("%d",&n);
// int arr[n];
// for(int j=1;j<=n;j++){
//     printf("ENTER %d ELEMENT : ",j);
//     scanf("%d",&arr[j-1]);
// }
// reverse_arrey(arr,n);
// for(int k=1;k<=n;k++){
//     printf("\nthe %d element of the arrey is :%d ",k,arr[k]);
// }




//CHECK TH GIVEN ARRAY IS PALINDROME  OR NOT



// int n;
// printf("ENTER THE ARRAY SIZE :");
// scanf("%d",&n);
// int arr[n];
// for(int j=1;j<=n;j++){
//     printf("ENTER %d ELEMENT : ",j);
//     scanf("%d",&arr[j-1]);
// }
// int palindromic=1;
// for(int i=0,j=n-1;i<j;i++,j--){
//     if(arr[i]!=arr[j]){
//         palindromic=0;
//         break;
//     }    
// }
// if(palindromic){
//     printf("THIS IS  PALINDROMIC");
// }
// else{
//     printf("THIS IS NOT PALINDROMIC");
// }



//ROTATE THE ARRAY BY K STAPES





// // void reverse_arrey(int arr[],int starting_index,int ending_index){
// //     for(int i=starting_index,j=ending_index;i<j;i++,j--){
// //         int c=arr[i];
// //         arr[i]=arr[j];                                   
// //         arr[j]=c;
// //     }
// // }
// int n;
// printf("ENTER THE ARRAY SIZE :");
// scanf("%d",&n);
// int arr[n];
// for(int j=1;j<=n;j++){
//     printf("ENTER %d ELEMENT : ",j);
//     scanf("%d",&arr[j-1]);
// }
// int k;
// printf("SAY THE STAPES YOU WANT TO ROTATE:");
// scanf("%d",&k);
// k=k%n;
// reverse_arrey(arr,0,n-1);
// reverse_arrey(arr,0,k-1);
// reverse_arrey(arr,k,n-1);
// for(int k=1;k<=n;k++){
//     printf("%d ",arr[k-1]);
// }




//GIVEN ARRAY . FIND A NUMBER'X' IS IN THE ARRAY  OR NOT. IF YES PRINT ITS INDICES



// int n;
// printf("ENTER THE ARRAY SIZE :");
// scanf("%d",&n);
// int arr[n];
// for(int j=1;j<=n;j++){
//     printf("ENTER %d ELEMENT : ",j);
//     scanf("%d",&arr[j-1]);
// }
// int  x;
// printf("SAY THE NUMBER YOU WANT TO FIND:");
// scanf("%d",&x);
// int present=0;
// for(int j=1;j<=n;j++){
//     if(arr[j-1]==x){
//        present=1;
//        break;
//     }
// }
// if(present)printf("%d IS  PRESENT IN THE ARRAY",x);
// else printf("%dTHIS NUMBER IS NOT  PRESENT IN THE ARRAY",x);




//FIND THE MISSING NUMBER IN THE SERIES LIKE 1 TO 100 OR 1000



// int n;
// printf("ENTER THE ARRAY SIZE :");
// scanf("%d",&n);
// int arr[n];
// for(int j=1;j<=n;j++){
//     printf("ENTER %d ELEMENT : ",j);
//     scanf("%d",&arr[j-1]);
// }
// int  x;
// printf("SAY THE LAST NUMBER:");
// scanf("%d",&x);
// int sum1=0,sum2=0;
// for(int i=1;i<=x;i++){
//     sum1+=i;
// }
// for(int j=1;j<=n;j++){
//     sum2+=arr[j-1];
// }
// printf("THE MISSING NUMBER IS %d",sum1-sum2);





//FIND THE DUPLICATE NUMBER IN THE GIVEN ARRAY


// int n;
// printf("ENTER THE ARRAY SIZE :");
// scanf("%d",&n);
// int arr[n];
// for(int j=1;j<=n;j++){
//     printf("ENTER %d ELEMENT : ",j);
//     scanf("%d",&arr[j-1]);
// }
// for(int i=1;i<=n;i++){
//     for(int j=i+1;j<=n;j++){
//         if(arr[i-1]==arr[j-1]){
//             printf("THERE EXIST AN DUPLICATE NUMBER AND THE NUMBER IS %d",arr[i-1]);
//             break;
//         }
//     }
// }




//FIND THE UNIQUE ELEMENT IN AN GIVEN ARRAY WHERE ALL ELEMENTS ARE DUPLICATE EXCEPT ONE


// int n;
// printf("ENTER THE ARRAY SIZE :");
// scanf("%d",&n);
// int arr[n];
// for(int j=1;j<=n;j++){
//     printf("ENTER %d ELEMENT : ",j);
//     scanf("%d",&arr[j-1]);
// }
// for(int i=1;i<=n;i++){
//     bool flag=false;
//     for(int j=i+1;j<=n;j++){
//         if(arr[i-1]==arr[j-1]){
//             flag=true;
//         }
//     }
//     if(flag==false){
//         printf("the unique number is : %d",arr[i-1]);
//         break;
//     }
// }
return 0;
}