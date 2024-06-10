#include<stdio.h>
int main(){


//MULTIPLICATION OF TWO MATRICES GIVEN BY USER


int n,m;
printf("THE 1ST MATRIX IS:\n");
printf("THE ROW NUMBER IS :");
scanf("%d",&n);
printf("THE column NUMBER IS :");
scanf("%d",&m);
int arr[n][m];
for(int i=1;i<=n;i++){
    for(int j=1;j<=m;j++){
        printf("THE VALUE OF ELEMENT %d,%d is:",i-1,j-1);
        scanf("%d",&arr[i-1][j-1]);
    }
}
int o,p;
printf("THE 2ND MATRIX IS :\n");
printf("THE ROW NUMBER IS :");
scanf("%d",&o);
printf("THE column NUMBER IS :");
scanf("%d",&p);
int brr[o][p];
for(int i=1;i<=o;i++){
    for(int j=1;j<=p;j++){
        printf("THE VALUE OF ELEMENT %d,%d is:",i-1,j-1);
        scanf("%d",&brr[i-1][j-1]);
    }
}
int ans_matrix[n][p];
if(m==o){
    for(int i=0;i<n;i++){                                                       ////VERY VERY IMPORTANT AND HARD QUESTION
        for(int j=0;j<p;j++){
            ans_matrix[i][j]=0;
            for(int k=0;k<m;k++){
                ans_matrix[i][j]+=arr[i][k]*brr[k][j];
            }
            
        }
    }
    for(int i=0;i<n;i++){
       for(int j=0;j<p;j++){
           printf("%d ",ans_matrix[i][j]);
       }
       printf("\n");
}
}
else{
    printf("MATRIX MULTIPLICATION IS NOT POSSIBLE");
}


//          PRINT IN HORIZONTAL WAVE ORDER

//          1 2 3                                    1 2 3
//          4 5 6                   -->>             6 5 4
//          7 8 9                                    7 8 9


// int n,m;
// printf("THE ROW NUMBER IS :");
// scanf("%d",&n);
// printf("THE column NUMBER IS :");
// scanf("%d",&m);
// int arr[n][m];
// for(int i=1;i<=n;i++){
//     for(int j=1;j<=m;j++){
//         printf("THE VALUE OF ELEMENT %d,%d is:",i-1,j-1);
//         scanf("%d",&arr[i-1][j-1]);
//     }
// }
// for(int i=1;i<=n;i++){
//     for(int j=1;j<=m;j++){
//         printf("%d ",arr[i-1][j-1]);
//     }
//     printf("\n");
// }
// printf("\n");
// for(int i=1;i<=n;i++){
//     for(int j=1;j<=m;j++){
//        if((i-1)%2!=0)
//        printf("%d ",arr[i-1][m-(j-1)-1]);
//        else
//        printf("%d ",arr[i-1][j-1]);
//     }
//     printf("\n");
// }



//PRINT IN VIRTICAL  WAVE ORDER

//                      1 2 3                                   1 8 3
//                      4 5 6               --->>               4 5 6
//                      7 8 9                                   7 2 9




// int n,m;
// printf("THE ROW NUMBER IS :");
// scanf("%d",&n);
// printf("THE column NUMBER IS :");
// scanf("%d",&m);
// int arr[n][m];
// for(int i=1;i<=n;i++){
//     for(int j=1;j<=m;j++){
//         printf("THE VALUE OF ELEMENT %d,%d is:",i-1,j-1);
//         scanf("%d",&arr[i-1][j-1]);
//     }
// }
// for(int i=1;i<=n;i++){
//     for(int j=1;j<=m;j++){
//         printf("%d ",arr[i-1][j-1]);
//     }
//     printf("\n");
// }
// printf("\n");
// for(int i=1;i<=n;i++){
//     for(int j=1;j<=m;j++){
//        if((j-1)%2!=0)
//        printf("%d ",arr[m-(i-1)-1][j-1]);
//        else
//        printf("%d ",arr[i-1][j-1]);
//     }
//     printf("\n");
// }




//SPIRAL PRINTING                   [Leetcode 54 ]

//     1 2 3 4
//     5 6 7 8                             ---->>              1 2 3 4 8 12 11 10 9 5 6 7
//     9 10 11 12

// int n,m;
// printf("THE ROW NUMBER IS :");
// scanf("%d",&n);
// printf("THE column NUMBER IS :");
// scanf("%d",&m);
// int arr[n][m];
// for(int i=1;i<=n;i++){
//     for(int j=1;j<=m;j++){
//         printf("THE VALUE OF ELEMENT %d,%d is:",i-1,j-1);
//         scanf("%d",&arr[i-1][j-1]);
//     }
// }
// for(int i=1;i<=n;i++){
//     for(int j=1;j<=m;j++){
//         printf("%d ",arr[i-1][j-1]);
//     }
//     printf("\n");
// }
// int min_row=0;
// int min_column=0;
// int max_row=n-1;
// int max_column=m-1;
// int total_elements=m*n;
// int count=0;
// while(count<total_elements){
//     for(int i=min_column;i<=max_column;i++){
//         printf("%d ",arr[min_row][i]);
//         count++;
//     }
//     min_row++;
//     if(count>=total_elements) break;
//     for(int j=min_row;j<=max_row;j++){
//         printf("%d ",arr[j][max_column]);
//         count++;
//     }
//     max_column--;
//     if(count>=total_elements) break;
//     for(int k=max_column;k>=min_column;k--){
//         printf("%d ",arr[max_row][k]);
//         count++;
//     }
//     max_row--;
//     if(count>=total_elements) break;
//     for(int l=max_row;l>=min_row;l--){
//         printf("%d ",arr[l][min_column]);
//         count++;
//     }
//     min_column++;
//     if(count>=total_elements) break;
// }



//GENERATE A nXn MATRIX FILLED WITH ELEMENT FROM 1 TO n^2 IN SPIRAL ORDER       [Leetcode -59]



// int n;
// printf("THE ROW NUMBER IS :");
// scanf("%d",&n);
// int arr[n][n];
// int min_row=0;
// int min_column=0;
// int max_row=n-1;
// int max_colunm=n-1;
// int total_element=n*n;
// int count=0;
// while(total_element>count){
//     for(int i=min_column;i<=max_colunm;i++){
//         arr[min_row][i]=count+1;
//         count++;
//     }
//     min_row++;
//     if(total_element<=count) break;
//     for(int j=min_row;j<=max_row;j++){  
//         arr[j][max_colunm]=count+1;
//         count++;
//     }
//     max_colunm--;
//     if(total_element<=count) break;
//     for(int k=max_colunm;k>=min_column;k--){
//         arr[max_row][k]=count+1;
//         count++;
//     }
//     max_row--;
//     if(total_element<=count) break;
//     for(int l=max_row;l>=min_row;l--){
//         arr[l][min_column]=count+1;
//         count++;
//     }
//     min_column++;
//     if(total_element<=count) break;
// }
// for(int i=1;i<=n;i++){
//     for(int j=1;j<=n;j++){
//         printf("%d ",arr[i-1][j-1]);
//     }
//     printf("\n");
// }
    return 0;
}
