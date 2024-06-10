#include <stdio.h>
#include<string.h>
#include<stdbool.h>
int main(){

//initialization of structure

// struct pokemon{
//     int hp;
//     int attack;
//     int speed;
//     char tier;
// }pikachu,pichu,raichu;
// struct special_pokemon{
//     int special_damage;
//     struct pokemon pichu;
//};
// // struct pokemon pikachu;
// pikachu.attack=60;
// pikachu.hp=70;
// pikachu.speed=100;
// pikachu.tier='A';

// // struct pokemon pichu;
// pichu.attack=70;
// pichu.hp=50;
// pichu.speed=90;
// pichu.tier='S';


// // struct pokemon raichu;
// raichu.attack=60;
// raichu.hp=150;
// raichu.speed=100;
// raichu.tier='B';

// printf("%d",raichu.attack);


//CREATE A STRUCTURE TYPE 'BOOK' WITH NAME,PRICE AND NUMBER OF PAGES AS ITS ATTTRIBUTES


// struct book{
//     char name[40];
//     float price;
//     int number_of_pages;
// }book1,book2,book3;

// strcpy(book1.name,"Mahabharat");
// book1.number_of_pages=6000;
// book1.price=999.5;

// strcpy(book2.name,"Ramayana");
// book2.number_of_pages=8000;
// book2.price=1999.5;

// strcpy(book3.name,"Openhimer");
// book3.number_of_pages=4500;
// book3.price=599.5;

// printf("%d\n",book1.number_of_pages);
// printf("%f\n",book1.price);
// printf("%s\n",book1.name);



// CREATE A STRUCTURE TYPE 'PERSON' WITH NAME , SALARY AND AGE AS ITS ATTRIBUTE 



// struct person{
//     char name[30];
//     int salary;
//     int age;
// }person1,person2;

// strcpy(person1.name,"raghav");
// person1.age=32;
// person1.salary=90,000;

// strcpy(person2.name,"sanket");
// person2.age=29;
// person2.salary=70,000;

// printf("%s\n",person1.name);
// printf("%d",person2.age);


//TYPEDEF 

// typedef int intiger;
// intiger z=6;                //TYPEDEF IS USED TO CHANGE A ALREADY DEFINED DETATYPE TO A USER DEFINED DETATYPE LIKE 'int','float' etc.
// printf("%d",z); 


//SOLVE MULTIPLE POINTER PROBLEM


// typedef int* pointer;
// int x=5,y=7;
// pointer a=&x,b=&y;
// printf("%p",a);
// printf("\n%p",b);


// ARRAY OF STRUCTURE


// typedef struct pokemon{
//     int hp;
//     int attack;
//     int speed;
//     char tier;
//     char name[40];
// }pokemon;
// pokemon arr[3];
// arr[0].attack=60;
// arr[0].hp=70;
// arr[0].speed=100;
// arr[0].tier='A';
// strcpy(arr[0].name,"pikachu");
// arr[1].attack=80;
// arr[1].hp=50;
// arr[1].speed=90;
// arr[1].tier='S';
// strcpy(arr[1].name,"pichu");
// arr[2].attack=100;
// arr[2].hp=80;
// arr[2].speed=120;
// arr[2].tier='B';
// strcpy(arr[2].name,"raichu");
// for(int i=0;i<3;i++){
//     printf("THE NAME OF POKEMON %d IS :%s\n",i+1,arr[i].name);
//     printf("THE ATTACK OF POKEMON %d IS :%d\n",i+1,arr[i].attack);
//     printf("THE HP OF POKEMON %d IS :%d\n",i+1,arr[i].hp);
//     printf("THE SPEED OF POKEMON %d IS :%d\n",i+1,arr[i].speed);
//     printf("THE TIER OF POKEMON %d IS :%c\n",i+1,arr[i].tier);
// }



// typedef struct cricketer {
//     char name[100];
//     int age;
//     int number_of_test_matches;
//     float avg_runs;
// }cricketer;
// cricketer arr[3];
// for(int i=0;i<3;i++){
//     printf("THE NAME OF THE NO %d CRICKETER IS :",i+1); 
//     scanf("%s",arr[i].name);
//     printf("THE AGE OF THE NO %d CRICKETER IS :",i+1); 
//     scanf("%d",&arr[i].age);
//     printf("THE NUMBER TEST MATCHES OF THE NO %d CRICKETER IS :",i+1); 
//     scanf("%d",&arr[i].number_of_test_matches);
//     printf("THE AVERAGE RUN  OF THE NO %d CRICKETER IS :",i+1); 
//     scanf("%f",&arr[i].avg_runs);
// }
// for(int i=0;i<3;i++){
//     printf("\nTHE NAME OF NO %d PLAYER IS :%s",i+1,arr[i].name);
//     printf("\nTHE AGE OF NO %d PLAYER IS :%d",i+1,arr[i].age);
//     printf("\nTHE NUMBER OF TEST MATCHES OF NO %d PLAYER IS :%d",i+1,arr[i].number_of_test_matches);
//     printf("\nTHE AVERAGE RUN OF NO %d PLAYER IS :%f",i+1,arr[i].avg_runs);
// }



//COPYING ENTIRE STRUCTURE VARIBLE TO ANOTHER OF SAME TYPE

// struct pokemon{
//     int hp;
//     int attack;
//     int speed;
//     char tier;
// }pikachu,pichu,raichu;
// pichu.attack=70;
// pichu.hp=50;
// pichu.speed=90;
// pichu.tier='S';

// pikachu=pichu;  //COPYING ALL ELEMENTS FROM ONE TO ANOTHER
// printf("%d",pikachu.hp);




    return 0;
}