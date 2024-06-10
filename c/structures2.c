#include<stdio.h>
#include<stdbool.h>
#include<string.h>
int main(){

//COMPARE TWO STRUCTURE VALUE OF SAME TYPE


// typedef struct date{
//     int day;
//     int month;
//     int year;
// }date;
// date arr[2];
// for(int i=0;i<2;i++){
//     printf("THE DD IS :");
//     scanf("%d",&arr[i].day);
//     printf("THE MM IS :");
//     scanf("%d",&arr[i].month);
//     printf("THE YYYY IS :");
//     scanf("%d",&arr[i].year);
// }
// bool flag=true;
// if(arr[0].day!=arr[1].day) flag=false;
// if(arr[0].month!=arr[1].month) flag=false;
// if(arr[0].year!=arr[1].year) flag=false;
// if(flag==true) printf("dates are same");
// else printf("dates are not same");



//NESTING OF STRUCTURES


// typedef struct pokemon{
//     char name[20];
//     int hp;
//     int attack;
//     int speed;
//     char tier;
// }pokemon;
// typedef struct lengend_pokemon{
//     char special_ability[20];
//     pokemon normal;
// }lengend_pokemon;
// typedef struct god_pokemon{
//     char special_attack[20];
//     lengend_pokemon legend;
// }god_pokemon;
// lengend_pokemon mewtwo;
// strcpy(mewtwo.special_ability,"earth_quack");
// mewtwo.normal.attack=100;
// mewtwo.normal.hp=400;
// mewtwo.normal.speed=150;
// strcpy(mewtwo.normal.name,"mewtwo");
// god_pokemon charachar;
// charachar.legend.normal.attack=100;




//COMPARE TWO STRINGS USING FUNCTIONS



// //typedef struct student{
// //     char name[50];
// //     int roll_number;
// //     char depertment[50];
// //     char course[50];
// //     int year_of_joining;
// // }student;
// // void check(student s1,student s2){
// //     int result= strcmp(s1.depertment,s2.depertment);
// //     if(result == 0) printf("THE DEPARTMENTS ARE EQUAL");
// //     else  printf("THE DEPARTMENTS ARE NOT EQUAL");
// // }
// student arr[2];
// for(int i=0;i<2;i++){
//     printf("THE NAME OF THE STUDENT  IS :");
//     scanf("%s",&arr[i].name);
//     printf("THE ROLL NUMBER IS :");
//     scanf("%d",&arr[i].roll_number);
//     printf("THE DEPERTMENT  IS :");
//     scanf("%s",&arr[i].depertment);
//     printf("THE COURSE  IS :");
//     scanf("%s",&arr[i].course);
//     printf("THE YEAR OF JOINING  IS :");
//     scanf("%d",&arr[i].year_of_joining);
// }
// check(arr[0],arr[1]);



//POINTER OF STRUCTURE


// typedef struct pokemon{
//     int hp;
//     int attack;
//     int speed;
//     char tier;
// }pokemon;
// pokemon pikachu;
// pikachu.hp=70;
// pikachu.attack=60;
// pikachu.speed=100;
// pikachu.tier='A';
// int* x=&pikachu;
// printf("%p\n",&pikachu.hp);
// printf("%p\n",&pikachu.attack);
// printf("%p\n",&pikachu.speed);
// printf("%p\n",&pikachu.tier);
// printf("%p",x);



//ASSINING AND CHANGE THE VALUES OF STRUCTURES USING POINTERS


// //typedef struct pokemon{
// //     int hp;
// //     int attack;
// //     int speed;
// //     char tier;
// // }pokemon;
// // void change(pokemon* p){
// //     /// (*p).hp=170;
// //     p->hp=170;
// //     ///(*p).attack=160;
// //     p->attack=160;                                      //(*p).something ==== p->something
// //     ///(*p).speed=10;
// //     p->speed=10;
// //     ///(*p).tier='B';
// //     p->tier='B';
// //     return;
// // }
// pokemon pikachu;
// //pokemon pikachu ={100,40,120,'A'};
// pikachu.tier='A';
// printf("%d\n",pikachu.hp);
// printf("%d\n",pikachu.attack);
// printf("%d\n",pikachu.speed);
// printf("%c\n",pikachu.tier);
// pokemon* x=&pikachu;
// //(*x).attack=100; //GIVE THE VALUE 
// change(&pikachu);
// printf("%d\n",pikachu.hp);
// printf("%d\n",pikachu.attack);
// printf("%d\n",pikachu.speed);
// printf("%c\n",pikachu.tier);



// UNIONS

// typedef union pokemon{
//     int hp;
//     int attack;
//     int speed;
//     char tier;
// }pokemon;
// pokemon pikachu;
// pikachu.attack=60;
// pikachu.hp=70;
// pikachu.speed=100;
// pikachu.tier='A';
// printf("%d\n",pikachu.attack);
// printf("%d\n",pikachu.hp);
// printf("%d\n",pikachu.speed);
// printf("%c\n",pikachu.tier);

// ////UNION ALWAYS TAKE THE VALUE OF THE LAST ELEMENT .. AND ITS SIZE IS THE MAXIMUM SIZE OF THE ELEMENT


return 0;
}
