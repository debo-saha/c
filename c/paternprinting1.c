#include<stdio.h>
int main(){


// print it *******
//          *******
//          *******
//          *******


// int m,n;
// printf("ENTER THE NUMBER OF ROW :");
// scanf("%d",&n);
// printf("ENTER THE NUMBER OF COLUMN:");
// scanf("%d",&m);
// for(int i=1;i<=n;i++){
//     for(int i=1;i<=m;i++){
//         printf("*");
//     }
//    printf("\n");
// }



//solid sphare  ***
//              ***
//              ***
    

// int n;
// printf("enter the value of row or column :");
// scanf("%d",&n);
// for(int i=1;i<=n;i++){
//     for(int j=1;j<=n;j++){
//         printf("*");
//     }
//     printf("\n");
// }



// solid numer square   1234
//                      1234
//                      1234
//                      1234



// int n;
// printf("enter the value of row or column :");
// scanf("%d",&n);
// for(int i=1;i<=n;i++){
//     for(int j=1;j<=n;j++){
//         printf("%d",j);
//     }
//     printf("\n");
// }



// LOWER TRIANGLE       *
                //      **
                //      ***
                //      ****


// int n;
// printf("enter the value of row or column :");
// scanf("%d",&n);
// for(int i=1;i<=n;i++){
//     for(int j=1;j<=i;j++){
//          printf("*");
//         }
//     printf("\n");
// }



//upper triangle    ****
//                  ***
//                  **
//                  *



// int n;
// printf("enter the value of row or column :");
// scanf("%d",&n);
// for(int i=1;i<=n;i++){
//     for(int j=1;j<=n+1-i;j++){
//          printf("*");
//         }
//     printf("\n");
// }
                       //     OTHER WAY


// int n;
// printf("enter the value of row or column :");
// scanf("%d",&n);
// int a=n;
// for(int i=1;i<=n;i++){
//     for(int j=1;j<=a;j++){
//          printf("*");
//         }
//     a=a-1;  
//     printf("\n");
// }



//LOWER NUMBER TRIANGLE       1
//                            12
//                            123
                        //    1234



// int n;
// printf("enter the value of row or column :");
// scanf("%d",&n);
// for(int i=1;i<=n;i++){
//     for(int j=1;j<=i;j++){
//          printf("%d",j);
//         }
//     printf("\n");
// }




//upper triangle    1234
//                  123
//                  12
//                  1


// int n;
// printf("enter the value of row or column :");
// scanf("%d",&n);
// int a=n;
// for(int i=1;i<=n;i++){
//     for(int j=1;j<=a;j++){
//         printf("%d",j);
//     }
//     a=a-1;
//     printf("\n");
// }






//odd NUMBER lower TRIANGLE   1
//                            13
//                            135
                        //    1357



// int n;
// printf("enter the value of row or column :");
// scanf("%d",&n);
// // for(int i=1;i<=2*n-1;i=i+2){
// //     for(int j=1;j<=i;j++){
// //         if(j%2!=0){
// //             printf("%d",j);
// //             }
// //         }
// //     printf("\n");
// // }

// //                                                  ANOTHER WAY

// for(int i=1;i<=n;i++){
//     int a=1;
//     for(int j=1;j<=i;j++){
//         printf("%d",a);
//         a=a+2;
//     }
//     printf("\n");
    
// }



//ALPHABATE SQUARE         ABCD
//                         ABCD
//                         ABCD
//                         ABCD



// int n;
// printf("enter the value of row or column :");
// scanf("%d",&n);
// for(int i=1;i<=n;i++){
//      int a=65;
//     for(int j=1;j<=n;j++){
//         char ch = (char)a;
//         printf("%c",ch);
//         a++;
//     }
//     printf("\n");
// }




//LOWER ALPHABET TRIANGLE     A
//                            AB
//                            ABC
  //                          ABCD



// int n;
// printf("enter the value of row or column :");
// scanf("%d",&n);
// for(int i=1;i<=n;i++){
//     int a=65;
//     for(int j=1;j<=i;j++){
//         char ch=(char)a;
//         printf("%c",a);
//         a++;
//         }
//     printf("\n");
// }

    return 0;
}