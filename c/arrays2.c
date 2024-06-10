#include<stdio.h>
#include<limits.h>


int main(){
    
    
// PASSING ARREYS TTO THE  FUNCTIONS

//  SWAP TWO NUMMBERS USING ARREYS


// // void swap(int x[]){
// //     int c=x[0];
// //     x[0]=x[1];
// //     x[1]=c;
// //     return;
// // }
// int arr[2]={2,3};
// printf("ENTER THE VALUE OF 1ST ELEMENT:");
// scanf("%d",&arr[0]);
// printf("ENTER THE VALUE OF 2ND ELEMENT:");
// scanf("%d",&arr[1]);

// printf("THE REAL NUMBER IS :%d %d",arr[0],arr[1]);
// swap(arr);
// printf("\nTHE NUMBER IS NOW :%d %d",arr[0],arr[1]);



//CHANGE THE VALUE OF AN ARRAY TO ALL ODD INDICES ELEMENT TO ITS 2ND MULTIPLE AND EVEN INDICES ELEMENT INCREASED BY 10


// int n;
// printf("ENTER THE ARRAY SIZE :");
// scanf("%d",&n);
// int arr[n];
// for(int j=1;j<=n;j++){
//     printf("ENTER %d ELEMENT : ",j);
//     scanf("%d",&arr[j-1]);
// }
// for(int i=1;i<=n;i++){
//     if((i-1)%2==0) arr[i-1]=arr[i-1]+10;
//     else arr[i-1]*=2;
// }
// for(int i=1;i<=n;i++){
//     printf("THE %d ELEMENT IS :%d\n",i,arr[i-1]);
// }


// COUNT THE NUMBER OF ELEMENT IN GIVEN ARREY GREATER THAN X

// int n;
// printf("ENTER THE ARRAY SIZE :");
// scanf("%d",&n);
// int arr[n];
// for(int i=1;i<=n;i++){
//     printf("ENTER THE %d ELEMENT: ",i);
//     scanf("%d",&arr[i-1]);
// }
// int z;
// printf("ENTER THE NUMBER :");
// scanf("%d",&z);
// int number=0;
// for(int j=1;j<=n;j++){
//     if(arr[j-1]>z) number++;
// }
// printf("TOTAL NUMBER OF ELEMENT  WHICH IS GREATER THAN %d IS :%d",z,number);
    
    
    
//FIND THE DIFFERENCE OF SUM OF ELEMENTS AT EVEN INDICES  TO ODD INDICES 


// int n;
// printf("ENTER THE ARRAY SIZE :");
// scanf("%d",&n);
// int arr[n];
// for(int i=1;i<=n;i++){
//     printf("ENTER THE %d ELEMENT: ",i);
//     scanf("%d",&arr[i-1]);
// }
// int sum_even=0,sum_odd=0;
// for(int j=1;j<=n;j++){
//     if((j-1)%2==0) sum_even+=arr[j-1];
//     else sum_odd+=arr[j-1];
// }
// int final_ans=sum_even-sum_odd;
// printf("THE ANSWER IS :%d",final_ans);



//FIND THE TOTAL NUMBER OF PAIRS WHOSE SOME IS  EQUAL TO GIVEN VALUE


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
// int total_pair=0;
// for(int j=1;j<=n;j++){
//     for(int k=j+1;k<=n;k++){
//         if(arr[j-1]+arr[k-1]==z) {
//             total_pair++;
//             printf("(%d,%d)",arr[j-1],arr[k-1]);
//         }
//     }
// }
// printf("THE TOTAL NUMBER OF PRAIRS ARE :%d",total_pair);



///FIND THE TOTAL NUMBER OF TRIPLATES WHOSE SOME IS  EQUAL TO GIVEN VALUE



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
// int total_pair=0;
// for(int j=1;j<=n;j++){
//     for(int k=j+1;k<=n;k++){
//         for(int l=k+1;l<=n;l++){
//             if(arr[j-1]+arr[k-1]+arr[l-1]==z){
//                 total_pair++;
//                 printf("(%d,%d,%d)",arr[j-1],arr[k-1],arr[l-1]);
//             }
//         }
//     }
// }
//printf("THE TOTAL NUMBER OF PRAIRS ARE :%d",total_pair);



//FIND THE 2ND LARGEST NUMBER OF AN ARRAY



// int n;
// printf("ENTER THE ARRAY SIZE :");
// scanf("%d",&n);
// int arr[n];
// for(int j=1;j<=n;j++){
//     printf("ENTER %d ELEMENT : ",j);
//     scanf("%d",&arr[j-1]);
// }
// int max=INT_MIN;
// int second_max=INT_MIN;
// // for(int i=1;i<=n;i++){
// //     if(max<arr[i-1]){
// //         max=arr[i-1];
// //     }
// // }
// // for(int i=1;i<=n;i++){
// //     if(arr[i-1]!=max &&second_max<arr[i-1]){
// //         second_max=arr[i-1];
// //     }
// // }
// // printf("THE second MAXIMUM ELEMENT VALUE IS : %d",second_max);



// ////                                                ANOTHER WAY (IN A SINGLE LOOP)


// //  for(int j=1;j<=n;j++){
// //     if(max<arr[j-1]){
// //         second_max=max;  //second max is now previous max
// //         max=arr[j-1];  //max is now new max
// //     }
// //     else if(second_max<arr[j-1]&&max!=arr[j-1]){
// //         second_max=arr[j-1];
// //     }
// // }
// // printf("THE second MAXIMUM ELEMENT VALUE IS : %d",second_max);



// Delete an element from The array



// // void deleteTheArrayElm(int arr[],int size,int loc){
// //     if(loc<0||loc>size){
// //         printf("Give a Valid Location");
// //     }
// //     else{
// //         for(int i=loc;i<size;i++){
// //             arr[i]=arr[i+1];
// //         }
// //         size--;
// //     }
// // }

// int arr[5]={1,2,3,4,5};
// deleteTheArrayElm(arr,5,0);
// for(int i=0;i<4;i++){
//     printf("%d",arr[i]);
// }
    return 0;
}