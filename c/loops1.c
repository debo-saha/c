#include<stdio.h>
int main(){

// LOOPS

//FOR LOOPS


//PRINT ALL NUMBER BETWEEN 1 TO 100

// for(int i=1;i<=100;i++){
//     printf("%d\n",i);
// }



//PRINT ALL EVEN NUMBER BETWEEN 1 TO 100

// for(int i=1;i<=100;i++){
//     if(i%2==0){
//     printf("%d\n",i);
//     }
// }



//PRINT ALL ODD NUMBER BETWEEN 1 TO 100


// for(int i=1;i<=100;i++){
//     if(i%2!=0){
//     printf("%d\n",i);
//     }
// }



//PRINT THE TABLE OF 19

// for (int i = 19; i<=190; i=i+19){
//     printf("%d ",i);
// }



// PRINT A TABLE OF N TAKING IMPUT FROM USER

// int n;
// printf("Please say  which table you want to read :");
// scanf("%d",&n);
// for(int i=n;i<=(n*10);i=i+n){
//     printf("%d\n",i);
// }



//PRINT A AP TAKING THE  NUMBER OF TERMS FROM USER

//AP NO 1  //1 3 5 7 9 .....
// int n;
// printf("Please say  how many terms you wanna to see :");
// scanf("%d",&n);
// for(int i=1;i<=(2*n-1);i=i+2){
//     printf("%d ",i);
// }


//AP NO 2  //4 7 10 13 16 ......

// int n;
// printf("Please say HOW MANY TERMS YOU WANTS :");
// scanf("%d",&n);
// for(int i=4;i<=(4+(n-1)*3);i=i+3){
//     printf("%d ",i);
// }


//AP NO 3(DECREASING AP) //100 97 94 ......


// int n;
// printf("Please say HOW MANY TERMS YOU WANTS :");
// scanf("%d",&n);
// for(int i=100;i>=(100+(n-1)*(-3));i=i-3){
//     printf("%d ",i);
// }

                 //ONLY POSSITIVE TERMS

// for(int i=100;i>=0;i=i-3){
//     printf("%d ",i);
// }

// PRINT A GP TAKING THE  NUMBER OF TERMS FROM USER

// GP NO 1  //1 2 4 8 16 32 64 .......


// int n;
// printf("Please say HOW MANY TERMS YOU WANTS :");
// scanf("%d",&n);
// int m=1;
// for(int i=1;i<=n;i++){
//     printf("%d ",m);
//     m=m*2;
// }

// GP NP 2 //3 12 48 192 768 .......


// int n;
// printf("Please say HOW MANY TERMS YOU WANTS :");
// scanf("%d",&n);
// int m=3;
// for(int i=1;i<=n;i++){
//     printf("%d ",m);
//     m=m*4;
// }


//GO NO 3 (DECREASING GP)  //100 50 25 .....



// int n;
// printf("Please say HOW MANY TERMS YOU WANTS :");
// scanf("%d",&n);
// float m=100;
// for(int i=1;i<=n;i++){
//     printf("%f ",m);
//     m=m/2;
// }



//WRITE A PROGRAME TO CHECK IT PRIME OR NOT


// int n;
// int a=0;
// printf("Please say a number :");
// scanf("%d",&n);
// for(int i = 2;i<=(n-1);i++){                                                 // #importent
//     if(n%i==0){
//         a=1;
//         break;
//     }
// }
// if(n==1)printf("1 is neither prime nor composite");
// else if(a==1){
//     printf("this is not a prime number");
// }
// else{
//     printf("this is a prime number");
// }





// PRINT ALL ODD NUMBER BETWEEN 1 TO 100 USING (CONTINUE)

// for(int i=1;i<=100;i++){
//     if(i%2==0){
//         continue;
//     }
//     printf("%d ",i);
// }


    return 0;
}