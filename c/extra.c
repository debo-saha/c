#include<stdio.h>
#include<limits.h>
#include<string.h>

int main(){
   char str[]="ZDTBH";
   int count=0;
   while(str[count]!='\0'){
if(str[count]>='A' && str[count]<='Z'){
        str[count]=str[count]+32;
    }
    count++;
   }
    // char str3[]="hhhgccc";
    // int i=0;
    // while(str3[i]!='\0'){
    //     if((str3[i]>='a')&&(str3[i]<='z')){
    //         str3[i]=str3[i]-32;
    //     }
    //     i++;
    // }
    // puts(str3);


    puts(str);
    return 0;
}