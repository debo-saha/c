#include<stdio.h>
#include<math.h> // use for squre root ,cude root;
#include<limits.h> //use for int_max,min
#include<stdbool.h>// for bool functions
#include<stdlib.h> // use for malloc , calloc etc
 
int main(){

// PREPROCESSOR 

//    float x=sqrt(33);
//    float y=cbrt(9);
//    printf("%f",x);
//    printf("\n%f",y);
//    int z=INT_MAX;
//    long c=LONG_MAX;
//    printf("\n%d",z);
//    printf("\n%ld",c);


// MACROS USING #define

// printf("%.11f",pi);


//MACROS FUNCTION


// //#define pi 3.14159265359;
// // #define area(r) (pi*r*r);
// printf("%f", area(10));



// SWITCH STATEMENT


// PRINT DAY ACCORDING TO DAY NUMBER



// int n;
// printf("Enter The Number (1-7):");
// scanf("%d",&n);
// switch (n){
// case 1:
//     printf("Monday");
//     break;
// case 2:
//     printf("Tuesday");
//     break;
// case 3:
//     printf("Thursday");
//     break;
// case 4:
//     printf("Wednesday");
//     break;
// case 5:
//     printf("Friday");
//     break;
// case 6:
//     printf("Saturday");
//     break;
// case 7:
//     printf("Sunday");
// default:
//     printf("Invalid Number");
//     break;
// }


// MAKE A CALCULATOR USING SWITCH STATEMENT


// int a,b;
// char operation;
// printf("Enter The 1st Number :");
// scanf("%d",&a);

// printf("Enter The 2st Number :");
// scanf("%d",&b);
// while (getchar() != '\n');
//     printf("Enter The Operation (+,-,*,/):");
//     scanf("%c",&operation);
// switch (operation){
// case '+':
//     printf("%d",a+b);
//     break;
// case '-':
//     printf("%d",a-b);
//     break;
// case '*':
//     printf("%d",a*b);
//     break;
// case '/':
//     printf("%f",(float)a/b);
//     break;
// case '%':
//     printf("%d",a%b);
//     break;
// default:
//     printf("Enter Valid Operation");
// }


    // int num = 5;

    // printf("Initial value of num: %d\n", num);

    // // Prefix increment
    // printf("Prefix increment: %d\n", ++num);

    // // Postfix incrementṇṇ
    // printf("Postfix increment: %d\n", num++);

    // // Prefix decrement
    // printf("Prefix decrement: %d\n", --num);

    // // Postfix decrement
    // printf("Postfix decrement: %d\n", num--);

    // printf("Final value of num: %d\n", num);



// MEMORY ALLOCATION (MALLOC)


// // TO ALLOCATE A MEMORY FOR 100 INTEGER

// int*ptr1=(int*) malloc(100*sizeof(int));
// printf("%d\n",*ptr1); // give garbage output



// // TO ALLOCATE A MEMORY FOR 1000 CHARECTER

// char*ptr=(char*) malloc(1000*sizeof(char));


// MEMORY ALLOCATION(CALLOC)


// // TO ALLOCATE A MEMORY FOR 1000 FLOATING NUMBERS

// float*ptr=(float*) calloc(1000,sizeof(float));

// // TO ALLOCATE A MEMORY FOR 1000 CHARECTER

// char*ptr2=(char*) calloc(1000,sizeof(char));
// printf("%d",*ptr2); // give zero output



//TAKE n NUMBER OF INTISER AS AN INPUT AND DISPLAY THEM



// int n;
// printf("Enter The Number Of Terms:");
// scanf("%d",&n);
// int* ptr=(int*) malloc(n*sizeof(int));
// int* p=ptr;
// for(int i=1;i<=n;i++){
//     scanf("%d",&(*ptr));
//     ptr++;
// }
// for(int i=1;i<=n;i++){
//     printf("%d ",(*p));
//     p++;
// }



// MEMORY DEALLOCATION (free)


// float*ptr=(float*) calloc(1000,sizeof(float));
// free(ptr);
// ptr=NULL;
// printf("%p",ptr);



// MEMORY REALLOCATION (realloc)


// int*ptr=(int*) malloc(5*sizeof(int));  //20 bites allocated
// int *p=ptr;
// ptr=realloc(ptr,10*sizeof(int));  //40 bites allocated
//  printf("%p\n",*ptr);
//   printf("%p",&p);





// goto

// label:
//     printf("I am on level\n");
//        goto end;
// goto label;
// end:
//     printf("end0");


int inp;
for(int i=0;i<7;i++){
    printf("%d",i);
    for(int j=0;j<7;j++){
        printf("Enter Any Number. Enter Zero To End");
        scanf("%d",&inp);
        if(inp==0){
            goto end;   // it helps to break the entire loops in a single call
        }
    }
}
end:
    return 0;
}