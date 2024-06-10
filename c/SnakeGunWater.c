#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int SnakeGunWater(char you,char computer){
    //draw conditions
    if( you==computer) 
    return 0;
    //draw conditions
    if(you=='S'&&computer=='W') return 1;
    else if(you=='W'&&computer=='S') return -1;
    if(you=='S'&&computer=='G') return -1;
    else if(you=='G'&&computer=='S') return 1;
    if(you=='G'&&computer=='W') return -1;
    else if(you=='W'&&computer=='G') return 1;

}
int main(){
    char you,computer;
    int number;
    srand(time(0));
    number=rand()%100+1;
    if(number<33) computer='S';
    else if (number >33 && number<66) computer ='G';
    else computer = 'W';
    printf("Enter 'S' For Snake,'G' For Gun,'W For Water:");
    scanf("%c",&you);
    int result =SnakeGunWater(you,computer);
    printf("You Chose %c And Computer Choose %c \n",you,computer);
    if(result==0) printf("The Match Is Draw ");
    else if(result==-1) printf("You Lose The Match ");
    else printf("You Won The Match");
    return 0;
}