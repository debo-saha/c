#include<stdio.h>
int main(){

//LOWER ALPHABER NUMBER TRIANGLE     1
//                                   AB
//                                   123
//                                   ABCD
//                                   12345



// int n;
// printf("enter the value of row or column :");
// scanf("%d",&n);
// for(int i=1;i<=n;i++){
//     int a=65;
//     for(int j=1;j<=i;j++){
//         char ch=(char)a;
//         if(i%2!=0){
//             printf("%d",j);
//         }        
//         else{
//             printf("%c",ch);
//         }
//         a++;
//         }
//     printf("\n");
// }




// star plus            *
//                      *
    //                *****
    //                  *
    //                  *



// int n;
// printf("ENTER THE ODD NUMBER OF ROW OR COLUMN :");
// scanf("%d",&n);
// for(int i=1;i<=n;i++){
//     for(int j=1;j<=n;j++){
//        if((i==(n+1)/2)||(j==(n+1)/2)){
//         printf("*");
//        }
//        else{
//         printf(" ");
//        }
//     }
//    printf("\n");
// }



//HOLLOW RECTANGLE   *******
//                   *     *
//                   *     *
//                   *******



// int m,n;
// printf("ENTER THE NUMBER OF ROW :");
// scanf("%d",&n);
// printf("ENTER THE NUMBER OF COLUMN:");
// scanf("%d",&m);
// for(int i=1;i<=n;i++){
//     for(int j=1;j<=m;j++){
//       if((i==1||i==n)||(j==1||j==m)){
//         printf("*");
//       }
//       else{
//         printf(" ");
//       }
//     }
//    printf("\n");
// }



//CROSS STAR         
//                    *   *
//                     * *
//                      *
//                     * *
//                    *    *




// int n;
// printf("ENTER THE ODD  NUMBER OF ROW OR COLUMN :");
// scanf("%d",&n);
// for(int i=1;i<=n;i++){
//     for(int j=1;j<=n;j++){
//        if((i==j)||((i+j)==(n+1))){
//         printf("*");
//        }
//        else{
//         printf(" ");
//        }
//     }
//    printf("\n");
// }


//FLOYD'S TRIANGLE        
//                              1
//                              23
//                              456
//                              78910


// int n;
// printf("ENTER THE NUMBER OF ROW OR COLUMN :");
// scanf("%d",&n);
// int a=1;
// for(int i=1;i<=n;i++){
//     for(int j=1;j<=i;j++){
//     printf("%d",a);
//     a=a+1;   
//     }
//    printf("\n");
// }


// 0 and 1 triangle                 1
//                                  01
//                                  101
//                                  0101
//                                  10101


// int n;
// printf("ENTER THE NUMBER OF ROW OR COLUMN :");
// scanf("%d",&n);
// // int a;
// // for(int i=1;i<=n;i++){
// //     if(i%2!=0){
// //         a=1;
// //     }
// //     else{
// //         a=0;
// //     }
// //     for(int j=1;j<=i;j++){
// //         printf("%d",a);
// //         if(a==0) a=1;
// //         else a=0;
// //     }
// //    printf("\n");
// // }
// //                                          ANOTHER WAY
// for(int i=1;i<=n;i++){
//     for(int j=1;j<=i;j++){
//     if(((i-j)%2==0) ) {
//         printf("1");
//     }
//     else{
//         printf("0");
//     }
//     }
//    printf("\n");
// }



// STAR TRIANGLE MAST                       *
//                                         **
//                                        ***
//                                       ****
//                                      *****

// int n;
// printf("ENTER THE NUMBER OF ROW OR COLUMN :");
// scanf("%d",&n);
// for(int i=1;i<=n;i++){
//     for(int j=1;j<=n-i;j++){
//         printf(" ");
//     }
//     for(int k=1;k<=i;k++){
//         printf("*");
//     }

//    printf("\n");
// }




//              rombos                   *****
//                                      *****
//                                     *****
//                                    *****
//                                   *****

// int n;
// printf("ENTER THE NUMBER OF ROW :");
// scanf("%d",&n);
// for(int i=1;i<=n;i++){
//     for(int j=i;j<=n;j++){
//         printf(" ");
//     }
//     for(int k=1;k<=n;k++){
//         printf("*");
//     }

//    printf("\n");
// }
return 0;
}