#include<stdio.h>
int main(){

//IF ELSE  STATEMENT


// say if it is even or odd


// int x;
// printf("Give a imput of x");
// scanf("%d",&x);
// if(x%2==0){
//     printf(" This is even.");
// }
// else{
//     printf("this is odd.");
// }


//print the absolute value  //|x|

// int x;
// printf("Give a value of x:");
// scanf("%d",&x);
// if(x<0){
//     x=x*(-1);
// }
// printf("The absolute value of x is :%d",x);



// calculate profit or lose from cost and selling price

// int cp,sp,pr;

// printf("Please provide the value of cp:");
// scanf("%d",&cp);
// printf("Please provide the value of sp:");
// scanf("%d",&sp);
// pr=sp-cp;
// if(cp<sp){
//     printf("you are in profit");
//     printf("\nyou gain:%d",pr);
// }
// else if(cp==sp){
//     printf("you do not do any income");
//     printf("\nyour credit:%d",pr);
// }
// else{
//     printf("you are in lose . please close your business");
//     printf("\nyour gain is %d",pr);
// }


// compare between perimeter and area

// int a,b;
// printf("Enter the value of side a:");
// scanf("%d",&a);
// printf("Enter the value of side b:");
// scanf("%d",&b);
// int area=(a*b);
// int perimeter=(2*(a+b));
// if(area>perimeter){
//     printf("area is gretter tham perimeter");
// }
// else{
//       printf("area is not gretter tham perimeter");
// }



// take imput from user and say that is it three digit number or not

// int a;
// printf("Enter a three number :");
// scanf("%d",&a);
// if(a>99&&a<1000){
//     printf("this is a three digit number");
// }
// else{
//     printf("this is not a three digit number");
// }



//tell us if it is divisible by 3 and 5

// int a;
// printf("Enter a  number :");
// scanf("%d",&a);
// if((a%3==0)&&(a%5==0)){
//     printf("this is divisible by 5 and 3");
// }
// else{
//     printf("this is not divisible by 5 and 3");
// }



//tell us that given number is divisible by 3 or 5

// int a;
// printf("Enter a  number :");
// scanf("%d",&a);
// if((a%3==0)||(a%5==0)){
// printf("this is divisible by 5 or 3");
// }
// else{
//     printf("this is not divisible by 5 or 3");
// }



//find out greater number among 3 number

// int a,b,c;
// printf("Enter  number a :");
// scanf("%d",&a);
// printf("Enter  number b :");
// scanf("%d",&b);
// printf("Enter  number c :");
// scanf("%d",&c);
// if(a>b&&b>c){
//     printf("%d is greatest",a);
// }
// else if(b>a&&b>c){
//     printf("%d is greatest",b);
// }
// else{
//     printf("%d is greatest",c);
// }



//find out grater amond 4 number

// int a,b,c,d;
// printf("Enter  number a :");
// scanf("%d",&a);
// printf("Enter  number b :");
// scanf("%d",&b);
// printf("Enter  number c :");
// scanf("%d",&c);
// printf("Enter  number d :");
// scanf("%d",&d);
// if(a>b&&b>c&&c>d){
//     printf("%d is greatest",a);
// }
// else if(b>a&&b>c&&b>d){
//     printf("%d is greatest",b);
// }
// else if(c>d&&c>b&&c>a){
//     printf("%d is greatest",c);
// }
// else{
//     printf("%d is greatest",d);
// }



//

// int a,b,c;
// printf("Enter  length a :");
// scanf("%d",&a);
// printf("Enter  length b :");
// scanf("%d",&b);
// printf("Enter  length c :");
// scanf("%d",&c);
// if((a+b)>c&&(b+c)>a&&(c+a)>b){
//     printf("this can  be used as side of triangle");
// }
// else{
//      printf("this can not  be used as side of triangle");

// }



// NESTED IF ELSE STATEMENT
   
   
//   tell us if it is divisible by 3 and 5(BY A DIFFERENT WAY)


// int a;
// printf("Enter a  number :");
// scanf("%d",&a);
// if(a%3==0){
//     if(a%5==0){
//      printf("this is divisible by 5 and 3");
//     }
//     else{
//     printf("this is not divisible by 5 and 3");
//     }
// }
// else{
//     printf("this is not divisible by 5 and 3");
    
// }




//tell us that given number is divisible by 3 or 5 but not by 15

// int a;
// printf("Enter a  number :");
// scanf("%d",&a);
// if((a%3==0)||(a%5==0)){
//     if(a%15!=0){
//         printf("given number is divisible by 3 or 5 but not by 15");
//     }
//     else{
//         printf("given number is divisible by 3 or 5 and by 15 also");
//     }
// }
// else{
//     printf("this is not divisible by 5 or 3");
// }



//find out greater number among 3 number(USING NESTED IF ELSE)

// int a,b,c;
// printf("Enter  number a :");
// scanf("%d",&a);
// printf("Enter  number b :");
// scanf("%d",&b);
// printf("Enter  number c :");
// scanf("%d",&c);
// if(a>b){
//     if(a>c){
//          printf("%d is greatest",a);
//     }
//     else{
//          printf("%d is greatest",c);
//     }
// }
// else{
//     if(b>c){
//         printf("%d is greatest",b);
//     }
//     else{
//         printf("%d is greatest",c);
//     }
// }

    return 0;
}