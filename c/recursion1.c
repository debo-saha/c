#include <stdio.h>

int main (){


//RECURTION


//PRINT THE FACTORIAL OF A GIVEN NUMBER


// //  int factorial(int n){
// //     if(n==1||n==0) return 1;
// //     return n*factorial(n-1);
// // }
// int n;
// printf("ENTER THE NUMBER  :");
// scanf("%d",&n);
// int fact=factorial(n);
// printf("THE  VALUE OF FACTORIAL %d IS :%d",n,fact);




//PRINT N TO 1

// //void decreasing (int n){
// //     if(n==0) return ;
// //     printf("%d\n",n);
// //     decreasing(n-1);
// //     return ;
// // }
// int n;
// printf("ENTER THE NUMBER  :");
// scanf("%d",&n);
// decreasing(n);



//PRINT 1 TO N

// // void increasing(int n,int x){
// //     if(n>x) return;
// //     printf("%d\n",n);
// //     increasing(n+1,x);
// // } 
// int n;
// printf("ENTER THE NUMBER  :");
// scanf("%d",&n);
// increasing(1,n);


//                  ANOTHER USEFULL WAY



// // void increasing (int n){
// //     if(n==0) return ;
// //     increasing(n-1);
// //     printf("%d\n",n);
// //     return ;
// // }
// int n;
// printf("ENTER THE NUMBER  :");
// scanf("%d",&n);
// increasing(n);



//PRNG DECREASING THEN INCREASING


// // void sequence (int n){
// //     if(n==0) return ;
// //     printf("%d\n",n);
// //     sequence(n-1);
// //     printf("%d\n",n);
// //     return ;
// // }
// int n;
// printf("ENTER THE NUMBER  :");
// scanf("%d",&n);
// sequence(n);



//THE SUM OF NUMBERS FROM 1 TO N  (Peramerised)


// // void sum(int n,int s){
// //     if(n==0){
// //         printf("%d",s);
// //         return;
// //     }
// //     sum(n-1,s+n);
// //     return;
// // }
// int n;
// printf("ENTER THE NUMBER  :");
// scanf("%d",&n);
// sum(n,0);


//THE SUM OF NUMBERS FROM 1 TO N  (Return Type)


// // int sum(int n){
// //     if(n==1) return 1;
// //     return n+sum(n-1);
// // }
// int n;
// printf("ENTER THE NUMBER  :");
// scanf("%d",&n);
// int s=sum(n);
// printf("THE VALUE OF SUM OF 1 TO %d is %d",n,s);



//CALCULATE A RAISE TO POWER B


// // int power(int a,int b){
// //     if(b==0) return 1;
// //     return a*power(a,b-1);
// // }
// int a;
// printf("ENTER THE BASE :");
// scanf("%d",&a);
// int b;
// printf("ENTER THE POWER :");
// scanf("%d",&b);
// int p= power(a,b);
// printf("THE VALUE OF %d RAISE TO THE POWER %d IS %d",a,b,p);


////CALCULATE A RAISE TO POWER B  (logarithimic mathod)



// // int power(int a,int b){
// //     if(b==0) return 1;
// //     int x= power(a,b/2);
// //     int ans;
// //     if(b%2==0){
// //         ans=x*x;
// //         return ans;
// //     }
// //     else{
// //         ans=x*x*a;
// //     }
// // }
// int a;
// printf("ENTER THE BASE :");
// scanf("%d",&a);
// int b;
// printf("ENTER THE POWER :");
// scanf("%d",&b);
// int p= power(a,b);
// printf("THE VALUE OF %d RAISE TO THE POWER %d IS %d",a,b,p);



//PRINT Nth FIBONACCI NUMBER



// // int fibonacci(int n){
// //     if (n==1||n==2) return 1;
// //    int ans =fibonacci(n-1)+fibonacci(n-2);
// //    return ans;
// // }
// int n;
// printf("ENTER THE NUMBER  :");
// scanf("%d",&n);
// printf("Fibonacci Series is :\n");
// for(int i=1;i<=n;i++){
// printf(" %d ",fibonacci(i));
// }




//STAIR PATH   (SINGLE STEP AND DOUBLE STAPE)


// //int stair(int n){
// //     if(n==1||n==2) return n;
// //     return stair(n-1)+stair(n-2);
// // }
// int n;
// printf("ENTER THE NUMBER  :");
// scanf("%d",&n);
// int way=stair(n);
// printf("%d",way);



//STAIR PATH   (SINGLE STEP AND DOUBLE STAPE AND TRIPPLE STAPES)


// //int stair(int n){
// //     if(n==1||n==2) return n;
// //     if(n==3) return 4;
// //     return stair(n-1)+stair(n-2)+stair(n-3);
// // }
// int n;
// printf("ENTER THE NUMBER  :");
// scanf("%d",&n);
// int way=stair(n);
// printf("THE NUMBER OF WAY OF STAIR %d IS ",way);

    return 0;
}