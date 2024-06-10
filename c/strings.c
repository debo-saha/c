#include <stdio.h>
#include<string.h>
int main (){
   
// STRINGS ARE CHARECTER ARRAYS

// char arr[5]={'a','h','m','k','u'};
// printf("THE 1ST ELEMENT IS :%c\n",arr[0]);
// printf("THE 2ND ELEMENT IS :%c\n",arr[1]);
// printf("THE 3RD ELEMENT IS :%c\n",arr[2]);
// printf("THE 4TH ELEMENT IS :%c\n",arr[3]);
// printf("THE 5TH ELEMENT IS :%c\n",arr[4]);

// arr[3]='y';                                  // change the value of a position
// printf("THE 4th ELEMENT IS :%c\n",arr[3]);


//SOME MORE IMPORTANT ASCII VALUES

//'A'=65     'a'=97
//'Z'=90     'z'=122
//'0'=48     '9'=57


//NULL CHARECTER

// char ch='\0';
// printf("%d",ch);
//ASCII VALUE OF NULL CHARECTER(\0) IS 0


//INITIALIZATION OF STRING

// char str[]="hi debojyoti how are you\0";
// int i=0;
// while(str[i]!='\0'){
//     printf("%c",str[i]);
//     i++;
// }


//OUTPUT OF STINGS WITHOUT LOOPS

// char str[]="hi debojyoti how are you\0";
// 1ST MATHOD
//printf("%s",str);    // %s is used to print strings which includes the header file <string.h>
//2ND MATHOD
// puts(str);



//TAKING INPUT WITHOUT LOOPS


//char str[20];
//METHOD 1
//scanf("%s",str);  //we donot use '&' here for taking input here     //scanf is only considered 1st word
//METHOD 2
//gets(str);  //entire sentence can be input
//MATHOD 3
//scanf("%[^\n]s",str);  //[^\n] is used to take a sentence input with scanf
//printf("YOUR INPUT IS : %s",str);




//REVERSE A STRING


// char str[40];
// printf("ENTER YOUR STRING : ");
// gets(str);
// int size=0;
// int i=0;
// while(str[i]!='\0'){
//     size++;
//     i++;
// }
// for(int j=0,k=size-1;j<=k;j++,k--){
//     char c=str[j];
//     str[j]=str[k];
//     str[k]=c;
// }
// printf("THE REVERSE STRING IS : ");
// puts(str);



//CHARECTER POINTER AS  A STRING

// //POINTER INITIALIZATION
// char* ptr="college wallah";
// ptr="physics wallah";
// printf("%s",ptr);

// //NORMAL INITIALLIZATION
// char str[]="\ncollege wallah";
// printf("%s",str);

// //IN NORMAL INITIALIZATION,WE CAN MODIFY INDIVISUAL CHARECTER BUT NOT THE ENTIRE STRING

// //POINTER INITIALIZATION,WE CAN MODIFY ENTIRE STRING BUT NOT THE INDVIDUAL CHARECTER



//SWALLOW AND DEEP COPY

// //shallow copy
// char s1[]="physics wallah";
// char*s2=s1;
// s1[0]='M';              //s1,s2 are same string
// printf("%s",s2);
// printf("\n%s",s1);


// //deep copy
// char s1[]="physics wallah";
// char s2[]="physics wallah";
// s2[0]='M';              //s1,s2 are not the same string
// printf("%p",s2);
// printf("\n%p",s1);



// CREATING A DEEP COPY


// char str1[]="college wallah";
// int i=0;
// int size=0;
// while(str1[i]!='\0'){
//     size++;
//     i++;
// }
// char str2[size];
// for(int k=0;k<size;k++){
//     str2[k]=str1[k];
// }
// str2[size]='\0';
// printf("%s",str2);




// BUILT IN FUNCTIONS


// NO1 >>> strlen(char*str)   >>>> return length of string
// NO2 >>> strcpy(char*s1,char*s2)  >>>> copies the content from s1 to s2
// NO3 >>> strcat(char*s1,char*s2)  >>>> concat s1 string with s2 and store in s1
// NO4 >>> strcmp(char*s1,char*s2)  >>>> compare the two string




//INSERT A NEW CHARECTER IN A STRNG AT A GIVEN POSITION

// char str[]="college";
// int i=0;
// int size=0;
// while(str[i]!='\0'){
//     size++;
//     i++;
// }
// int position;
// printf("ENTER THE POSTION OF THE CHARECTER:");
// scanf("%d",&position);
// for(int i=size-1;i>=position;i--){
//     str[i+1]=str[i];
// }
// str[size+1]='\0';
// str[position]='l';

// printf("%s",str);

    return 0;
}