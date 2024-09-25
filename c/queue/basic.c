#include <stdio.h>
#include<stdlib.h>
struct Queue{
    int size;
    int f;
    int r;
    int *arr;
};

int main(){
    struct Queue q;
    q.size=100;
    q.f=-1;
    q.r=-1;
    q.arr=(int*)malloc(sizeof(int)*q.size);
    

    return 0;
}