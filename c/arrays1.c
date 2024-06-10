#include <stdio.h>
int main (){

    //ARREYS

// BESICS OF ARREYS

// int arr[5]={1,5,8,9,7};
// printf("THE 1ST ELEMENT IS :%d\n",arr[0]);
// printf("THE 2ND ELEMENT IS :%d\n",arr[1]);
// printf("THE 3RD ELEMENT IS :%d\n",arr[2]);
// printf("THE 4TH ELEMENT IS :%d\n",arr[3]);
// printf("THE 5TH ELEMENT IS :%d\n",arr[4]);

// arr[3]=10;                                  // change the value of a position
// printf("THE 4th ELEMENT IS :%d\n",arr[3]);

// float brr[3]={1.2,5.3,8.4};
// printf("THE 1ST ELEMENT IS :%f\n",brr[0]);
// printf("THE 2nd ELEMENT IS :%f\n",brr[1]);
// printf("THE 3rd ELEMENT IS :%f\n",brr[2]);

// char crr[3]={'#','&','!'};
// printf("THE 1ST ELEMENT IS :%c\n",crr[0]);
// printf("THE 2nd ELEMENT IS :%c\n",crr[1]);
// printf("THE 3rd ELEMENT IS :%c\n",crr[2]);



// int arr[5];
// arr[0]=2;
// arr[1]=8;
// arr[2]=4;
// arr[3]=5;
// arr[4]=8;
// printf("THE 1ST ELEMENT IS :%d\n",arr[0]);
// printf("THE 2ND ELEMENT IS :%d\n",arr[1]);
// printf("THE 3RD ELEMENT IS :%d\n",arr[2]);
// printf("THE 4TH ELEMENT IS :%d\n",arr[3]);
// printf("THE 5TH ELEMENT IS :%d\n",arr[4]);




//taking the input from user in an array


// int arr[5];
// printf("ENTER THE 1ST ELMENT :");
// scanf("%d",&arr[0]);
// printf("ENTER THE 2ND ELMENT :");
// scanf("%d",&arr[1]);
// printf("ENTER THE 3RD ELMENT :");
// scanf("%d",&arr[2]);
// printf("ENTER THE 4TH ELMENT :");
// scanf("%d",&arr[3]);
// printf("ENTER THE 5TH ELMENT :");
// scanf("%d",&arr[4]);

// printf("THE 1ST ELEMENT IS :%d\n",arr[0]);
// printf("THE 2ND ELEMENT IS :%d\n",arr[1]);
// printf("THE 3RD ELEMENT IS :%d\n",arr[2]);
// printf("THE 4TH ELEMENT IS :%d\n",arr[3]);
// printf("THE 5TH ELEMENT IS :%d\n",arr[4]);




// PRINT ELEMENT USING LOOPS

// int arr[5]={1,2,3,4,5};
// for(int i=1;i<=5;i++){
//     printf("THE %d ELEMENT IS :%d\n",i,arr[i-1]);
// }
//arr[i] s also written as i[arr]

//TAKING INPUT FROM USER USING LOOPS AND PRINT IT


// int n;
// printf("ENTER THE ARRAY SIZE :");
// scanf("%d",&n);
// int arr[n];
// for(int j=1;j<=n;j++){
//     printf("ENTER %d ELEMENT : ",j);
//     scanf("%d",&arr[j-1]);
// }
// for(int i=1;i<=n;i++){
//     printf("THE %d ELEMENT IS :%d\n",i,arr[i-1]);
// }



///TAKING INPUT FROM USER AND PRINT THE REVERSE WAY


// int n;
// printf("ENTER THE ARRAY SIZE :");
// scanf("%d",&n);
// int arr[n];
// for(int j=1;j<=n;j++){
//     printf("ENTER %d ELEMENT : ",j);
//     scanf("%d",&arr[j-1]);
// }
// for(int i=0;i<n;i++){
//     printf("THE %d ELEMENT IS :%d\n",(n-i),arr[n-i-1]);
// }




// PRINT THE ROLL NUMBER OF THE STUDENTS(INDEX OF THE ARREY) WHO GOT LESS THAN 35 


// int marks[10];
// for(int j=1;j<=10;j++){
//     printf("ENTER %d ELEMENT : ",j);
//     scanf("%d",&marks[j-1]);
// }
// printf("THE ROLL NUMBERS ARE :");
// for(int i=1;i<=10;i++){
//     if(marks[i-1]<35) printf("%d ",i-1);
// }


//MEMORY ALLOCATION FOR ARRAYS

// int arr[4]={2,5,7,8};
// printf("THE MEMORY ALLOGATED FOR arr[0] is; %p\n",&arr[0]);
// printf("THE MEMORY ALLOGATED FOR arr[1] is; %p\n",&arr[1]);
// printf("THE MEMORY ALLOGATED FOR arr[2] is; %p\n",&arr[2]);
// printf("THE MEMORY ALLOGATED FOR arr[3] is; %p\n",&arr[3]);
   
   
   
// CALCULATE THE SUM OF A GIVEN ARRAY


// int n;
// printf("ENTER THE ARRAY SIZE :");
// scanf("%d",&n);
// int arr[n];
// for(int j=1;j<=n;j++){
//     printf("ENTER %d ELEMENT : ",j);
//     scanf("%d",&arr[j-1]);
// }
// int ans=0;
// for(int i=1;i<=n;i++){
//     ans+=arr[i-1];
// }
// printf("THE SUM IS : %d",ans);



//PRINT THE PRODUCT OF ELEMENTS OF AN ARRAY


// int n;
// printf("ENTER THE ARRAY SIZE :");
// scanf("%d",&n);
// int arr[n];
// for(int j=1;j<=n;j++){
//     printf("ENTER %d ELEMENT : ",j);
//     scanf("%d",&arr[j-1]);
// }
// int ans=1;
// for(int i=1;i<=n;i++){
//     ans*=arr[i-1];
// }
// printf("THE PRODUCT IS : %d",ans);



//FIND THE MAX VALUE FROM ALL THE ELEMENTS OF THE ARREY


// int n;
// printf("ENTER THE ARRAY SIZE :");
// scanf("%d",&n);
// int arr[n];
// for(int j=1;j<=n;j++){
//     printf("ENTER %d ELEMENT : ",j);
//     scanf("%d",&arr[j-1]);
// }
// int max=arr[0];
// for(int i=1;i<=n;i++){
//     if(max<arr[i-1]){
//         max=arr[i-1];
//     }
// }
// printf("THE MAXIMUM ELEMENT VALUE IS : %d",max);




//FIND THE MINIMUM VALUE FROM ALL THE ELEMENTS OF THE ARREY


// int n;
// printf("ENTER THE ARRAY SIZE :");
// scanf("%d",&n);
// int arr[n];
// for(int j=1;j<=n;j++){
//     printf("ENTER %d ELEMENT : ",j);
//     scanf("%d",&arr[j-1]);
// }
// int min=arr[0];
// for(int i=1;i<=n;i++){
//     if(min>arr[i-1]){
//         min=arr[i-1];
//     }
// }
// printf("THE MINIMUM ELEMENT VALUE IS : %d",min);
    return 0;
}