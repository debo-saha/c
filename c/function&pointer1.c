#include <stdio.h>

int main (){





//FUNCTIONS AND POINTERS



//PERMUTATION AND COMBINATION

//// int factorial(int n ){
////     int fact=1;
////     for(int i =1;i<=n;i++){
////     fact=fact*i;
//// }
////    return fact;
//// }
    // int n;
    // printf("ENTER THE VALUE OF N:");
    // scanf("%d",&n);
//     int r;
//     printf("ENTER THE VALUE OF R:");
//     scanf("%d",&r);
//    int ncr=factorial(n)/(factorial(r)*factorial(n-r)); 
//    printf("THE VALUE IS :%d",ncr);




// PASCAL TRIANGLE 

//                                                                          1
//                                                                          1 1
//                                                                          1 2 1
//                                                                          1 3 3 1
//                                                                          1 4 6 4 1
//                                                                          1 5 10 10 5 1
//                                                                          1 6 15 20 15 6 1



// // int factorial(int n ){
// //     int fact=1;
// //     for(int i =1;i<=n;i++){
// //     fact=fact*i;
// // }
// //     return fact;
// // }
// // int combination(int n,int r){
// //     int ncr=factorial(n)/(factorial(r)*factorial(n-r));
// //     return ncr;
// // }

// int n;
// printf("ENTER THE VALUE OF LINE:");
// scanf("%d",&n);
// for(int i=0;i<=n;i++){
//     for(int j=0;j<=i;j++){
//         int a= combination(i,j);
//         printf("%d ",a);
//     }
//     printf("\n");
// }


// REAL PASCAL TRIANGLE

//                                                                           1
//                                                                          1 1
//                                                                         1 2 1
//                                                                        1 3 3 1
//                                                                       1 4 6 4 1


// // int factorial(int n ){
// //     int fact=1;
// //     for(int i =1;i<=n;i++){
// //     fact=fact*i;
// // }
// //     return fact;
// // }
// // int combination(int n,int r){
// //     int ncr=factorial(n)/(factorial(r)*factorial(n-r));
// //     return ncr;
// // }

// int n;
// printf("ENTER THE VALUE OF LINE:");
// scanf("%d",&n);
// for(int i=0;i<=n;i++){
//     for(int k=0;k<=n-i;k++){
//         printf(" ");
//     }
//     for(int j=0;j<=i;j++){
//         int a= combination(i,j);
//         printf("%d ",a);
//     }
//     printf("\n");
// }



// PASCAL TRIANGLE IN DIFFERENT WAY

// int n;
// printf("ENTER THE VALUE OF LINE:");
// scanf("%d",&n);
// for(int i=0;i<=n;i++){
//     int first=1;
//     for(int j=0;j<=i;j++){
//         printf("%d ",first);
//         first=first*(i-j)/(j+1);
//     }
//     printf("\n");
// }



// SWAP TWO NUMBER

// int a;
// printf("ENTER THE VALUE OF A:");
// scanf("%d",&a);
// int b;
// printf("ENTER THE VALUE OF B:");
// scanf("%d",&b);
// int c= a;
// a=b;
// b=c;
// printf("THE VALUE OF A IS :%d",a);
// printf("\nTHE VALUE OF B IS :%d",b);


//  SWAP TWO NUMBER WITHOUT USING THIRD VERIABLE



// int a;
// printf("ENTER THE VALUE OF A:");
// scanf("%d",&a);
// int b;
// printf("ENTER THE VALUE OF B:");
// scanf("%d",&b);
// a=a+b;
// b=a-b;
// a=a-b;
// printf("THE VALUE OF A IS :%d",a);
// printf("\nTHE VALUE OF B IS :%d",b);














// //POINTERS 

// // %p is used is used for locating


// int a=5;
// int* x=&a;  /// int* store the address
//int** y =&x   // int** store the address of int*  // double pointer
// printf("%p",x);// the address of a
// printf("\n%p\n",&x);// print the address of address of a
// printf("%d",*x);  // print the value of a
// *x=7;
// printf("\n%d",a);// change the value of a












// //void swap(int* a,int* b){
// //     int c=*a;
// //     *a=*b;
// //     *b=c;
// //     return;
// // }


// int a;
// printf("ENTER THE VALUE OF A:");
// scanf("%d",&a);
// int b;
// printf("ENTER THE VALUE OF B:");
// scanf("%d",&b);
// swap(&a,&b);
// printf("THE VALUE OF A IS :%d",a);
// printf("\nTHE VALUE OF B IS :%d",b);



// // int min(int a,int b){
// //     if(a>b) return b;
// //     else  return a;
// // }
// // int gcd(int a,int b){
// //     int hcf;
// //     for(int i=1;i<=min(a,b);i++){
// //         if(a%i==0 && b%i==0)
// //         hcf=i;
// //     }
// //     return hcf;
// // }

// int a;
// printf("ENTER THE VALUE OF A:");
// scanf("%d",&a);
// int b;
// printf("ENTER THE VALUE OF B:");
// scanf("%d",&b);
// int hcf= gcd(a,b);
// printf("THE VALUE  OF HCF/GCD OF %d and %d is : %d",a,b,hcf );
    return 0;
}