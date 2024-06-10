#include <stdio.h>
int main (){

//WRITE A PROGRAME TO PRINT THE ROW NUMBER HAVING MAXIMUM SUM IN GIVEN MATRIX


// int n,m;
// printf("THE ROW NUMBER IS :");
// scanf("%d",&n);
// printf("THE column NUMBER IS :");
// scanf("%d",&m);
// int arr[n][m];
// for(int i=1;i<=n;i++){
//     for(int j=1;j<=m;j++){
//         printf("THE VALUE OF ELEMENTF %d,%d is:",i-1,j-1);
//         scanf("%d",&arr[i-1][j-1]);
//     }
// }
// for(int i=1;i<=n;i++){
//     for(int j=1;j<=m;j++){
//         printf("%d ",arr[i-1][j-1]);
//     }
//     printf("\n");
// }
// int max_row_sum=0;
// int row_number;
// for(int i=1;i<=n;i++){
//     int sum=0;
//     for(int j=1;j<=m;j++){
//        sum+=arr[i-1][j-1];
//     }
//     if(max_row_sum<sum) max_row_sum=sum;
//     row_number=i-1;
// }
// printf("THE MAX ROW SUM IS :%d AND ROW NUMBER IS :%d",max_row_sum,row_number);





//GIVEN MATRIX ONLY HAVING 0 AND 1 .FIND THE ROW THAT HAVE MAXIMUM NUMBER OF 1



// int n,m;
// printf("THE ROW NUMBER IS :");
// scanf("%d",&n);
// printf("THE column NUMBER IS :");
// scanf("%d",&m);
// int arr[n][m];
// for(int i=1;i<=n;i++){
//     for(int j=1;j<=m;j++){
//         printf("THE VALUE OF ELEMENTF %d,%d is:",i-1,j-1);
//         scanf("%d",&arr[i-1][j-1]);
//     }
// }
// for(int i=1;i<=n;i++){
//     for(int j=1;j<=m;j++){
//         printf("%d ",arr[i-1][j-1]);
//     }
//     printf("\n");
// }
// int max_number=0;
// int row_number;
// for(int i=1;i<=n;i++){
//     int count=0;
//     for(int j=1;j<=m;j++){
//        if(arr[i-1][j-1]==1) count++;
//     }
//     if(count>max_number)  max_number=count;
//     row_number=i-1;
// }
// printf("THE MAX  NUMBERE OF 1 IS:%d AND ITS ROW NUMBER IS:%d",max_number,row_number);




//WRITE A PROGRAM TO PRINT THE TRANSPOSE OF A MATRIX            //[Leetcode 867]



// int n,m;
// printf("THE ROW NUMBER IS :");
// scanf("%d",&n);
// printf("THE column NUMBER IS :");
// scanf("%d",&m);
// int arr[n][m];
// int brr[m][n];
// for(int i=1;i<=n;i++){
//     for(int j=1;j<=m;j++){
//         printf("THE VALUE OF ELEMENTF %d,%d is:",i-1,j-1);
//         scanf("%d",&arr[i-1][j-1]);
//     }
// }
// for(int i=1;i<=n;i++){
//     for(int j=1;j<=m;j++){
//         printf("%d ",arr[i-1][j-1]);
//     }
//     printf("\n");
// }
// printf("THE TRANSPOSE IS\n");
// for(int i=1;i<=m;i++){
//     for(int j=1;j<=n;j++){
//     brr[i-1][j-1]=arr[j-1][i-1];
//     }
// }
// for(int i=1;i<=m;i++){
//     for(int j=1;j<=n;j++){
//         printf("%d ",brr[i-1][j-1]);
//     }
//     printf("\n");
// }



//WRIYE A PROGRAM TO PRINT THE TRANSPOSE OF A SQUARE MATRIX     (WITHOUT USING EXTRA ARRAY)       //[Leetcode 867]




// int n;
// printf("THE ROW NUMBER IS :");
// scanf("%d",&n);
// int arr[n][n];
// for(int i=1;i<=n;i++){
//     for(int j=1;j<=n;j++){
//         printf("THE VALUE OF ELEMENTF %d,%d is:",i-1,j-1);
//         scanf("%d",&arr[i-1][j-1]);
//     }
// }
// for(int i=1;i<=n;i++){
//     for(int j=1;j<=n;j++){
//         printf("%d ",arr[i-1][j-1]);
//     }
//     printf("\n");
// }
// printf("THE TRANSPOSE OF THE SQUARE MATRIX IS\n");
// for(int i=1;i<=n;i++){
//     for(int j=i;j<=n;j++){  // the most important line (to start j from i)
//         int c=arr[i-1][j-1];
//         arr[i-1][j-1]=arr[j-1][i-1];
//         arr[j-1][i-1]=c;                                            /////MUCH PRACTICE NEEDED
//     }
// }
// for(int i=1;i<=n;i++){
//     for(int j=1;j<=n;j++){
//         printf("%d ",arr[i-1][j-1]);
//     }
//     printf("\n");
// }



//ROTATE A MATRIX 90 DEGREE ANTI CLOCKWISE    [Leetcode 48]




// int n;
// printf("THE ROW NUMBER IS :");
// scanf("%d",&n);
// int arr[n][n];
// for(int i=1;i<=n;i++){
//     for(int j=1;j<=n;j++){
//         printf("THE VALUE OF ELEMENTF %d,%d is:",i-1,j-1);
//         scanf("%d",&arr[i-1][j-1]);
//     }
// }
// for(int i=1;i<=n;i++){
//     for(int j=1;j<=n;j++){
//         printf("%d ",arr[i-1][j-1]);
//     }
//     printf("\n");
// }
// printf("THE SQUARE MATRIX AFTER 90 DEGREE ANTI CLOCK WISE ROTATE IS :\n");
// for(int i=1;i<=n;i++){
//     for(int j=i;j<=n;j++){  
//         int c=arr[i-1][j-1];
//         arr[i-1][j-1]=arr[j-1][i-1];
//         arr[j-1][i-1]=c;                                         
//     }
// }
// int brr[n][n];
// for(int i=1;i<=n;i++){
//     for(int j=1;j<=n;j++){
//         brr[i-1][j-1]=arr[n-(i-1)-1][j-1];
//     }
// }
// for(int i=1;i<=n;i++){
//     for(int j=1;j<=n;j++){
//         printf("%d ",brr[i-1][j-1]);
//     }
//     printf("\n");
// }




//ROTATE A MATRIX 90 DEGREE ANTI CLOCKWISE    [Leetcode 48]



// int n;
// printf("THE ROW NUMBER IS :");
// scanf("%d",&n);
// int arr[n][n];
// for(int i=1;i<=n;i++){
//     for(int j=1;j<=n;j++){
//         printf("THE VALUE OF ELEMENTF %d,%d is:",i-1,j-1);
//         scanf("%d",&arr[i-1][j-1]);
//     }
// }
// for(int i=1;i<=n;i++){
//     for(int j=1;j<=n;j++){
//         printf("%d ",arr[i-1][j-1]);
//     }
//     printf("\n");
// }
// printf("THE SQUARE MATRIX AFTER 90 DEGREE ANTI CLOCK WISE ROTATE IS :\n");
// for(int i=1;i<=n;i++){
//     for(int j=i;j<=n;j++){  
//         int c=arr[i-1][j-1];
//         arr[i-1][j-1]=arr[j-1][i-1];
//         arr[j-1][i-1]=c;                                         
//     }
// }
// printf("THE SQUARE MATRIX AFTER 90 DEGREE CLOCK WISE ROTATE IS :\n");
// int crr[n][n];

// for(int i=1;i<=n;i++){
//     for(int j=1;j<=n;j++){
//         crr[i-1][j-1]=arr[i-1][n-(j-1)-1];
//     }
// }
// for(int i=1;i<=n;i++){
//     for(int j=1;j<=n;j++){
//         printf("%d ",crr[i-1][j-1]);
//     }
//     printf("\n");
// }

    return 0;
}