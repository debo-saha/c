#include<stdio.h>
int main(){


// SUUM OF THE SERIES  
//1-2+3-4+5-6 ......    



// int n;
// int sum1=0,sum2=0;
// printf("PLEASE SAY THE NUMBER OF TERMS :");
// scanf("%d",&n);
// for(int i=1;i<=n;i++){
//     if(i%2!=0){
//         sum1=sum1+i;
//     }
//     else{
//         sum2=sum2+i;
//     }
// }
                            //ANOTHER WAY

// int final_sum=sum1-sum2;
// if(n%2==00){
//     final_sum=-n/2;
// }
// else{
//     final_sum=-n/2+n;
// }
// printf("THE SUM IS :%d",final_sum);




//PRINT THE FACTORIAL OF "N" NUMBER


// int n;
// printf("PLEASE SAY THE NUMBER YOU WANNA TO SEE THE FACTORIAL :");
// scanf("%d",&n);
// int ans=1;
// for(int i=n;i>=1;i--){
//     ans=ans*i;
// }
// printf("THE VALUUE OF THE GIVEN  NUMBER FACTOORIAL IS :%d",ans);



// PRINT THE FACTORIAL OF FIRST 'N' NUMBER LINE BY LINE



// int n;
// printf("PLEASE SAY THE NUMBER OF TERMS YOU WANT TO SEE THE FACTORIALS :");
// scanf("%d",&n);
// int ans=1;
// for(int i=1;i<=n;i++){
//     ans=ans*i;
//     printf("\nTHE VALUUE  of %d FACTORIAL IS :%d",i,ans);
// }




//FIBONACCI NUMBER 
//1 1 2 3 5 8 13 21 34 .......




// //PRINT THE Nth FIBONACCI NUMBER

// int n;
// printf("PLEASE SAY THE POSITION OF THE TERM :");
// scanf("%d",&n);
// int a=1,b=1;
// int sum=1;
// for(int i=1;i<=n-2;i++){
//     sum=a+b;
//     a=b;
//     b=sum;
// }
// printf("\nTHE %dth FIBONACCCI NUMBER IS :%d",n,sum);




// PRINT 1ST N FIBONACCI NUMBER


// int n;
// printf("PLEASE SAY THE POSITION OF THE TERM :");
// scanf("%d",&n);
// int a=1,b=1;
// int sum=1;                                                                   /////   // DOUBT
// for(int i=1;i<=n;i++){
//     sum=a+b;
//     a=b;
//     b=sum;
//     printf("\nTHE %dth FIBONACCI NUMBER IS :%d",i,sum);
// }



// TO FIND THE VALUE OF ONE NUMBER RAISE TO POWER ANOTHER


// int a,b;
// printf("GIVE THE VALUE OF base:");
// scanf("%d",&a);
// printf("GIVE THE VALUE OF exponent:");
// scanf("%d",&b);
// int ans=1;
// for(int i=1;i<=b;i++){
//     ans=ans*a;
// }
// printf("%d raised to the power %d:%d",a,b,ans);




// PRINT ALL ALPHABETS AND THEIR ASCII VALUES


// for(int i=65;i<=90;i++){
//     char ch=(char)i;
//     printf("%c = %d\n",ch,i);
// }



///ARMSTRONG NUMBER = IF THE SUM OF CUBE OF EACH DIGIT IS THE NUMBER ITSELF
//EX - 153 =(1*1*1)+(5*5*5)+(3*3*3)



// int n;
// printf("Enter a number :");
// scanf("%d",&n);
// int reminder,add=0,c;
// c=n;
// while(n>0){
//     reminder=n%10;
//     add=add+(reminder*reminder*reminder);                            ////// MUCH PRACTICE NNEEDED
//     n=n/10;
// }
// if(add==c){
//     printf("this is armstrong number");
// }
// else{
//     printf("this is not armstrong number");
// }
    return 0;
}