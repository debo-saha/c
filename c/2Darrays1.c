#include <stdio.h>
int main (){
    
//INITIALIZATION AND DECLARATION


// int arr[2][2]={{1,2},{3,4}};
// printf("\nTHE VALUE OF ELEMENT 0,0 IS :%d",arr[0][0]);
// printf("\nTHE VALUE OF ELEMENT 0,1 IS :%d",arr[0][1]);
// printf("\nTHE VALUE OF ELEMENT 1,0 IS :%d",arr[1][0]);
// printf("\nTHE VALUE OF ELEMENT 1,1 IS :%d",arr[1][1]);



//TAKING INPUT AND PRINT USING LOOPS


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



//ROLL NUMBER AND STUDENTS MARKS



// int n,m;
// printf("THE STUDENTS NUMBER ARE :");
// scanf("%d",&n);
// printf("THE NUMBER OF SUBJECTS ARE :");
// scanf("%d",&m);
// int arr[n][m];
// for(int i=1;i<=n;i++){
//     for(int j=1;j<=m;j++){
//         printf("THE ROLL NO %d STUDENT GOT IN SUBJECT %d is:",i,j);
//         scanf("%d",&arr[i-1][j-1]);
//     }
// }
// for(int i=1;i<=n;i++){
//     printf("%d ",i);
//     for(int j=1;j<=m;j++){
//         printf("%d ",arr[i-1][j-1]);
//     }
//     printf("\n");
// }



//PRINT 10 IN N*N MATRICES


// int n;
// printf("ENTER THE MATRIX LINE :");
// scanf("%d",&n);
// int arr[n][n];
// int z;
// printf("GIVE THE VALUE OF THE NUMBER :");
// scanf("%d",&z);
// for(int i=1;i<=n;i++){
//     for(int j=1;j<=n;j++){
//         printf("%d ",z);
//     }
//     printf("\n");
// }



//ADD TWO MATRICES



// int n,m;
// printf("THE ROW NUMBER IS :");
// scanf("%d",&n);
// printf("THE column NUMBER IS :");
// scanf("%d",&m);
// int arr1[n][m];
// printf("MATRIX NO 1\n");
// for(int i=1;i<=n;i++){
//     for(int j=1;j<=m;j++){
//         printf("THE VALUE OF ELEMENTF %d,%d is:",i-1,j-1);
//         scanf("%d",&arr1[i-1][j-1]);
//     }
// }
// for(int i=1;i<=n;i++){
//     for(int j=1;j<=m;j++){
//         printf("%d ",arr1[i-1][j-1]);
//     }
//     printf("\n");
// }
// printf("MATRIX NO 2\n");
// int arr2[n][m];
// for(int i=1;i<=n;i++){
//     for(int j=1;j<=m;j++){
//         printf("THE VALUE OF ELEMENTF %d,%d is:",i-1,j-1);
//         scanf("%d",&arr2[i-1][j-1]);
//     }
// }
// for(int i=1;i<=n;i++){
//     for(int j=1;j<=m;j++){
//         printf("%d ",arr2[i-1][j-1]);
//     }
//     printf("\n");
// }
// printf("THE SUM OF MATRIX 1 AND MATRIX 2 IS :\n");
// for(int i=1;i<=n;i++){
//     for(int j=1;j<=m;j++){
//         printf("%d ",arr1[i-1][j-1]+arr2[i-1][j-1]);
//     }
//     printf("\n");
// }




//FIND THE SUM OF ALL ELEMENTS IN A GIVEN MATRIX OF nXm



// int n,m;
// printf("THE ROW NUMBER IS :");
// scanf("%d",&n);
// printf("THE column NUMBER IS :");
// scanf("%d",&m);
// printf("ENTER VALUE OF THE ELEMENTS\n");
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
// int sum=0;
// for(int i=1;i<=n;i++){
//     for(int j=1;j<=m;j++){
//         sum+=arr[i-1][j-1];
//     }
// }
// printf("THE SUM OF ALL ELEMENTS IS :%d",sum);



//FIND THE MAX AND MINIMUM ELEMENT IN A MATRIX



// int n,m;
// printf("THE ROW NUMBER IS :");
// scanf("%d",&n);
// printf("THE column NUMBER IS :");
// scanf("%d",&m);
// printf("ENTER VALUE OF THE ELEMENTS\n");
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
// int max=arr[0][0];
// int max_row,max_column;
// for(int i=1;i<=n;i++){
//     for(int j=1;j<=m;j++){
//        if(max<arr[i-1][j-1]) max=arr[i-1][j-1];
//        max_row=i-1;
//        max_column=j-1;
//     }
// }
// printf("THE MAXIMUM ELEMENT IS :%d AND INDEX IS :(%d,%d)",max,max_row,max_column);
// int min=arr[0][0];
// int min_row,min_column;
// for(int i=1;i<=n;i++){
//     for(int j=1;j<=m;j++){
//        if(min>arr[i-1][j-1]) min=arr[i-1][j-1];
//        min_row=i-1;
//        min_column=j-1;
//     }
// }
// printf("\nTHE MINIMUM ELEMENT IS :%d and index is :(%d,%d):",min,min_row,min_column);





//GIVEN A MATRIX 'A' OF DIMENSION nXm AND 2 COORDINATES(l1,r1) AND (l2,r2).RETURN THE SUM OF THE RECTANGLE FROM (l1,r1) TO (l2,r2)




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
// int l1,l2,r1,r2;
// printf("ENTER THE STARTING ROW NUMBER:");
// scanf("%d",&l1);
// printf("ENTER THE ENDING ROW NUMBER:");
// scanf("%d",&l2);
// printf("ENTER THE STARTING COLUMN NUMBER:");
// scanf("%d",&r1);
// printf("ENTER THE ENDING COLUMN NUMBER:");
// scanf("%d",&r2);
// int sum=0;
// for(int i=l1;i<=l2;i++){
//     for(int j=r1;j<=r2;j++){
//         sum+=arr[i-1][j-1];
//     }
// }
// printf("THE SUM IS:%d",sum);
    return 0;
}