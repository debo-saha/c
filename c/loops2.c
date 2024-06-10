#include<stdio.h>
int main(){

// WHILE LOOP


// PRINT ALL NUMBER BETWEEN 1 TO 100

// int i;
// while(i<=100){
//     printf("%d ",i);
//      i++;
// }



//DO WHILE LOOP


//PRINT ALL NUMBER BETWEEN 1 TO 100

// int i=1;
// do{
//     printf("%d ",i);
//     i++;
// }
// while(i<=100);


                                          //QUESTIONS USING LOOP

  // COUNT THE DIGITS OF A GIVEN NUMBER



// int n;
// printf("PLEASE SAY WHICH NUMBER YOU WANNA TO COUNT :");
// scanf("%d",&n);
// int count=0;
// while(n!=0){
//     n=n/10;
//     count=count+1;
// }
// printf("THE NUMBER OF DIGITS IS :%d",count);



//PRINHT THE SUM OF DIGITS OF A GIVEN NUMBER


// int n;
// printf("PLEASE SAY WHICH NUMBER YOU WANNA TO COUNT THE SUM OF DIGITS :");
// scanf("%d",&n);
// int sum=0;
// int reminder;
// while(n!=0){
//     reminder=n%10;
//     sum=sum+reminder;
//     n=n/10;
// }
// printf("THE SUM OF ALL DIGITS :%d",sum);



//FIND THE SUM OF ALL EVEN DFIGIT NNUMBERS



// int n;
// printf("PLEASE SAY WHICH NUMBER YOU WANNA TO COUNT THE SUM OF EVEN DIGITS :");
// scanf("%d",&n);
// int sum=0;
// int reminder;
// int count=0;
// while(n!=0){
//     reminder=n%10;
//     n=n/10;
//     count++;
//     if(count%2==0)
//     continue;
//     sum=sum+reminder;
// }
// printf("THE SUM OF ALL  EVEN DIGITS :%d",sum);



//FIND THE SUM OF ALL ODD DFIGIT NNUMBERS

// int n;
// printf("PLEASE SAY WHICH NUMBER YOU WANNA TO COUNT THE SUM OF ODD DIGITS :");
// scanf("%d",&n);
// int sum=0;
// int reminder;
// int count=0;
// while(n!=0){
//     reminder=n%10;
//     n=n/10;
//     count++;
//     if(count%2!=0)
//     continue;
//     sum=sum+reminder;
// }
// printf("THE SUM OF ALL ODD DIGITS :%d",sum);



//PRINT RREVERSE OF A GIVEN NUMBBER


// int n;
// printf("PLEASE SAY WHICH NUMBER YOU WANNA TO DO REVERSE:");
// scanf("%d",&n);
// int reverse=0;                                            //////   DOUBT    // cant use 0
// while(n!=0){
//     reverse=(n%10)+reverse*10;
//     n/=10;
// }
// printf("THE REVERSE IS :%d",reverse);



//PRINT THE SUM OF THE GIVEN NUMBER AND ITS REVERSE



// int n;
// printf("PLEASE SAY WHICH NUMBER YOU WANNA TO DO REVERSE:");
// scanf("%d",&n);
// int store=n;
// int reminder;
// int reverse=0;                                            
// while(n!=0){
//     reminder=n%10;
//     reverse=reminder+reverse*10;
//     n=n/10;
// }
// printf("THE REVERSE IS :%d",reverse);
// int sum;
// sum=(store+reverse);
// printf("\nTHE SUM OF THIS NUMBER AND ITS REVERSE IS :%d",sum);


    return 0;
}