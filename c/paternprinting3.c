#include<stdio.h>
int main(){



//       ALPHABETES TRIANGLE                A
//                                         AB
//                                        ABC
//                                       ABCD
//                                      ABCDE
// int n;
// printf("ENTER THE NUMBER OF ROW OR COLUMN :");
// scanf("%d",&n);
// for(int i=1;i<=n;i++){
//     int a=65;
//     for(int j=1;j<=n-i;j++){
//         printf(" ");
//     }
//     for(int k=1;k<=i;k++){
//        char ch=(char)a;
//        printf("%c",ch);
//        a++;
//     }
//    printf("\n");
// }




//     STAR PYRAMID                             *
//                                             ***
//                                            *****
//                                           *******
//                                          *********

// int n;
// printf("ENTER THE NUMBER OF ROW :");
// scanf("%d",&n);
// for(int i=1;i<=n;i++){
//      for(int k=1;k<=n-i;k++){
//         printf(" ");
//     }
//     for(int j=1;j<=2*i-1;j=j+1){
//         printf("*");
//     }
//       printf("\n"); 
//     }


//       NUMBER PYRAMID                                 1
//                                                     123
//                                                    12345
//                                                   1234567
//                                                  123456789

// int n;
// printf("ENTER THE NUMBER OF ROW :");
// scanf("%d",&n);
// for(int i=1;i<=n;i++){
//     int non=1;
//     for(int j=1;j<=n-i;j++){
//         printf(" ");
//     }
//     for(int k=1;k<=2*i-1;k++){
//         printf("%d",non);
//         non=non+1;
//     }
//     printf("\n");
// }



//      ALPHABETES   PYRAMID                            A
//                                                     ABC
//                                                    ABCDE
//                                                   ABCDEFG
//                                                  ABCDEFGHI

// int n;
// printf("ENTER THE NUMBER OF ROW :");
// scanf("%d",&n);
// for(int i=1;i<=n;i++){
//     int non=65;
//     for(int j=1;j<=n-i;j++){
//         printf(" ");
//     }
//     for(int k=1;k<=2*i-1;k++){
//         char ch =(char)non;
//         printf("%c",ch);
//         non=non+1;
//     }
//     printf("\n");
// }



//          NUMBER PYRAMID MAST                                 1
//                                                             121
//                                                            12321
//                                                           1234321
//                                                          123454321

// int n;
// printf("ENTER THE NUMBER OF ROW :");
// scanf("%d",&n);
// for(int i=1;i<=n;i++){
//     int a=1;
//     for(int j=1;j<=n-i;j++){
//         printf(" ");
//     }
//     for(int k=1;k<=i;k++){
//         printf("%d",a);
//         a++;
//     }
//     int b=i-1;
//     for(int l=1;l<=i-1;l++){
//         printf("%d",b);
//         b--;
//     }
//     printf("\n");
// }




//        ALPHABET PYRAMID MAST                                     A
//                                                                 ABA
//                                                                ABCBA
//                                                               ABCDCBA
//                                                              ABCDEDCBA

// int n;
// printf("ENTER THE NUMBER OF ROW :");
// scanf("%d",&n);
// for(int i=1;i<=n;i++){
//     int a=1;
//     for(int j=1;j<=n-i;j++){
//         printf(" ");
//     }
//     for(int k=1;k<=i;k++){
//         char ch=(char)(a+64);
//         printf("%c",ch);
//         a++;
//     }
//     int b=i-1;
//     for(int l=1;l<=i-1;l++){
//         char ch=(char)(b+64);
//         printf("%c",ch);
//         b--;
//     }
//     printf("\n");
// }



//                                                                
//  star diamond                                                     *
//                                                                  ***
//                                                                 *****
//                                                                *******
//                                                                 *****
//                                                                  ***
//                                                                   *

// int n;
// printf("ENTER THE NUMBER OF ODD OF ROW :");
// scanf("%d",&n);
// int nsp=(n-1)/2;
// int nst=1;
// int middle_line=(n+1)/2;
// for(int i=1;i<=n;i++){
//     for(int j=1;j<=nsp;j++){
//         printf(" ");
//     }
//     for(int k=1;k<=nst;k++){                                    // MUCH PRACTICE NEEDED
//        printf("*");
//     }
//     if(i<middle_line){
//         nsp--;
//         nst=nst+2;
//     }
//     else{
//         nsp++;
//         nst=nst-2;
//     }
//     printf("\n");
// }



//                       ULTA TRIANGLE                          *****
//                                                               ****
//                                                                ***
//                                                                 **
//                                                                  *
// //                                                              
// int n;
// printf("GIVE THE VALUE OF LINES :");
// scanf("%d",&n);
// int nsp=0;
// int nst=n;
// for(int i=1;i<=n;i++){
//     for(int j=1;j<=nsp;j++){
//         printf(" ");
//     }
//     for(int k=1;k<=nst;k++){
//         printf("*");
//     } 
//      nst--;
//      nsp++;
//     printf("\n");
// }

    return 0;
}