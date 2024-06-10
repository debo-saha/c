#include <stdio.h>
int main (){
   


//                                                                *********
//            number table                                        **** ****
//                                                                ***   ***
//                                                                **     **
//                                                                *       *



// int n;
// printf("enter the value of row :");
// scanf("%d",&n);
// for(int m=1;m<=(2*n+1);m++){
//     printf("*");
    
// }
// printf("\n");
// int nst=n;
// int nsp=1;
// for(int i=1;i<=n;i++){
//     for(int j=1;j<=nst;j++){
//         printf("*");
//     }
//     for(int k=1;k<=nsp;k++){
//         printf(" ");
//     }
//      for(int l=1;l<=nst;l++){
//         printf("*");
//     }
//     nsp=nsp+2;
//     nst=nst-1;
//     printf("\n");
// }



//             number table                                     1234567
//                                                              123 567
//                                                              12   67
//                                                              1     7

// int n;
// printf("enter the value of row :");
// scanf("%d",&n);
// for(int i=1;i<=2*n+1;i++){
//     printf("%d",i);
// }
// printf("\n");
// int nst=n;
// int nsp=1;
// for(int i=1;i<=n;i++){
//     int a=1;
//     for(int j=1;j<=nst;j++){
//         printf("%d",a);
//         a++;
//     }
//     for(int k=1;k<=nsp;k++){
//         printf(" ");
//         a++;
//     }
//      for(int l=1;l<=nst;l++){
//         printf("%d",a);
//         a++;
//     }
//     nst--;
//     nsp=nsp+2;
//     printf("\n");
// }

//                                                              
//              ALPHABETE TABLE                                 ABCDEFG
//                                                              ABC EFG
//                                                              AB   FG
//                                                              A     G

// int n;
// printf("enter the value of row :");
// scanf("%d",&n);
// for(int i=1;i<=2*n+1;i++){
//     char ch=(char)i;
//     printf("%c",(ch+64));
// }
// printf("\n");
// int nst=n;
// int nsp=1;
// for(int i=1;i<=n;i++){
//     int a=65;
//     char cg=(char)a;
//     for(int j=1;j<=nst;j++){
//         printf("%c",cg);
//         cg++;
//     }
//     for(int k=1;k<=nsp;k++){
//         printf(" ");
//         cg++;
//     }
//      for(int l=1;l<=nst;l++){
//         printf("%c",cg);
//         cg++;
//     }
//     nst--;
//     nsp=nsp+2;
//     printf("\n");
// }


//                                                              
//                                                              123454321
//                                                              1234 4321
//                                                              123   321
//                                                              12     21
//                                                              1       1

// int n;
// printf("enter the value of row :");
// scanf("%d",&n);
// for(int i=1;i<=n+1;i++){
//    printf("%d",i);
// }
// for(int o=n;o>=1;o--){
//     printf("%d",o);
// }
// printf("\n");
// int nst=n;
// int nsp=1;
// for(int i=1;i<=n;i++){
//     int a=1;
//     for(int j=1;j<=nst;j++){
//         printf("%d",a);
//         a++;
//     }
//     a--;
//     int b=a;
//     for(int k=1;k<=nsp;k++){
//         printf(" ");
//     }
//      for(int l=1;l<=nst;l++){
//         printf("%d",b);
//         b--;
//     }
//     nst--;
//     nsp=nsp+2;
//     printf("\n");
// }




//                                                                  4444444
//                                                                  4333334
//                                                                  4322234
//      SPECIAL ONE                                                 4321234
//                                                                  4322234
//                                                                  4333334
//                                                                  4444444


// int n;
// printf("enter the value :");
// scanf("%d",&n);
// for(int i=1;i<=2*n-1;i++){
//     for(int j=1;j<=2*n-1;j++){
//        int a=i;
//        if(i>n) a=2*n-i;
//        int b=j;                                                     // HARDEST  CODE
//        if(j>n) b=2*n-j;
//        int min;
//        if(a>b) min=b;
//        else min=a;
//        printf("%d",(n+1)-min);
//     }
//     printf("\n");
// }
    return 0;
}