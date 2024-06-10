#include <stdio.h>

int main (){


//MAZE PATH   ( USING 4 VARIABLE)


// // int maze(int current_row , int current_column , int ending_row , int ending_column){
// //     int right_ways=0;
// //     int down_ways=0;
// //     if(current_row==ending_row&&current_column==ending_column)return 1;
// //     if(current_row==ending_row){
// //         right_ways+=maze(current_row ,current_column+1 ,ending_row ,ending_column);
// //     }
// //     if(current_column==ending_column){
// //         down_ways+=maze(current_row+1,current_column,ending_row ,ending_column);
// //     }
// //     if(current_row<ending_row&&current_column<ending_column){
// //         right_ways+=maze(current_row ,current_column+1 ,ending_row ,ending_column);
// //         down_ways+=maze(current_row+1,current_column,ending_row ,ending_column);
// //     }
// //     int total_ways=right_ways+down_ways;                                              ////MUST PRACTIICE
// //     return total_ways;
// // }
// int a;
// printf("ENTER THE NUMBER OF ROWS :");
// scanf("%d",&a);
// int b;
// printf("ENTER THE NUMBER OF COLUMN :");
// scanf("%d",&b);
// int no_of_ways=maze(1,1,a,b);
// printf("%d",no_of_ways);


                                                    //ANOTHER WAY
// // int maze(int n,int m){
// //     int right_ways=0;
// //     int down_ways=0;
// //     if(n==1&&m==1){
// //         return 1;
// //     }
// //     if(n==1){
// //         right_ways+=maze(n,m-1);
// //     }
// //     if(m==1){
// //         down_ways+=maze(n-1,m);
// //     }
// //     if(n>1&&m>1){
// //         down_ways+=maze(n-1,m);
// //         right_ways+=maze(n,m-1);
// //     }
// //     int total_ways=right_ways+down_ways;
// //     return total_ways; 
// // }
// int n;
// printf("ENTER THE NUMBER OF ROWS :");
// scanf("%d",&n);
// int m;
// printf("ENTER THE NUMBER OF COLUMN :");
// scanf("%d",&m);
// int no_of_ways=maze(n,m);
// printf("%d",no_of_ways);



// PRE IN POST



// // void PreInPost(int n){
// //     if(n==0) return;
// //     printf("pre %d\n",n);
// //     PreInPost(n-1);
// //     printf("in %d\n",n);
// //     PreInPost(n-1);
// //     printf("post %d\n",n);
// //     return;
// // }
// int n;
// printf("ENTER NUMBER :");
// scanf("%d",&n);
// PreInPost(n);



//PRINT ZIG ZAG   432111211123211121112343211121112321112111234



// //void ZigZag(int n){
// //     if(n==0) return;
// //     printf("%d ",n);
// //     ZigZag(n-1);
// //     printf("%d ",n);
// //     ZigZag(n-1);
// //     printf("%d ",n);
// //     return;
// // }
// int n;
// printf("ENTER NUMBER :");
// scanf("%d",&n);
// ZigZag(n);



// TOWER OF HANOI




// // void tower(int n, char s ,char h , char d){         // h= helper  //d = destination //  s= source
// //     if(n==0) return;
// //     tower(n-1,s,d,h);
// //     printf("%c to %c\n",s,d);
// //     tower(n-1,h,s,d);
// //     return;                                           // PRACTICE NEEDED
// // }
// int n;
// printf("ENTER NUMBER OF DISK :");
// scanf("%d",&n);
// tower(n,'A','B','C');
    return 0;
}