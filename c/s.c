#include <stdio.h>
#include<stdbool.h>
#include<string.h>
// #include<math.h>
// #include<limits.h>
// int power(int n, int m) {
//     if (m == 0) return 1;
//     if (m == 1) return n;
    
//     int ans = power(n, m / 2);
    
//     if (m % 2 == 0) {
//         return ans * ans;
//     } else {
//         return n * ans * ans;
//     }
// }

// int reverse(int n,int m){
//     if(n==0) return m;
//     else return reverse(n/10,m+=n%10);
// }
// int reverseTheNumber(int a){
//      reverse(a,0);
// }
// int findGcd(int a,int b){
//     int gcd;
//     while(a!=0 && b!=0){
//     gcd=a;
//     a=b%a;
//     b=gcd;
// }
// return gcd;
// }


void swap(int *a,int *b){
    int c=*a;
    *a=*b;
    *b=c;
}
void shortArray(char arr[],int size){

    for(int i=0;i<size;i++){
        for(int j=0;j<2;j++){
            
        }
    }

}
int main(){
// // first
// printf("Firshtc\n");
// int n,m;
// printf("Enter n,m");
// scanf("%d %d",&n,&m);
// int arr[n][m];
// for(int i=0;i<n;i++){
//     for(int j=0;j<m;j++){
//         // printf("fir");
//         printf("arr[%d][%d]",i,j);
//         scanf("%d",&arr[i][j]);
//     }
// }
// for(int i=0;i<n;i++){
//     for(int j=0;j<m;j++){
//        // printf("arr[%d][%d]",i,j);
//         printf("%d",arr[i][j]);
//     }
//     printf("\n");
// }
// // printf("\nSec\n");
// //sec
// int p,q;
// printf("Enter p,q");
// scanf("%d %d",&p,&q);
// int brr[p][q];
// for(int i=0;i<p;i++){
//     for(int j=0;j<q;j++){
//         // printf("sec");
//         printf("brr[%d][%d]",i,j);
//         scanf("%d",&brr[i][j]);
//     }
// }
// for(int i=0;i<p;i++){
//     for(int j=0;j<q;j++){
//        // printf("brr[%d][%d]",i,j);
//         printf("%d",brr[i][j]);
//     }
//     printf("\n");
// }
// int crr[n][q];
//   int res=0;
// for(int i=0;i<n;i++){
  
//     for(int j=0;j<q;j++){
//         for(int k=0;k<m;k++){
//             res+=arr[i][k]*brr[k][j];
//         }
//         crr[i][j]=res;
//         res=0;
//         }
// }
// for(int i=0;i<n;i++){
//     for(int j=0;j<q;j++){
//        // printf("brr[%d][%d]",i,j);
//         printf("%d",crr[i][j]);
//     }
//     printf("\n");
// }



// selection sort

// int arr[]={5,6,9,8,4,2,1};

   
// for(int i=0;i<7;i++){
//     int max=arr[i];
//      int index=i;
//     for(int j=i+1;j<7;j++){
//         if(max>arr[j]){
//             max=arr[j];
//             index=j;
//         }
//         int c=arr[i];
//         arr[i]=arr[index];
//         arr[index]=c;
//     }
// }

// for(int i=0;i<7;i++){
//     int index=i;
//     int min=arr[i];
//     for(int j=i+1;j<7;j++){
//         if(min>arr[j]){
//             index=j;
//             min=arr[j];
//         }
//     }
//     swap(&arr[index],&arr[i]);
// }

// for(int i=0;i<7;i++){
//     printf("%d ",arr[i]);
// }



// insertion sort

// int arr[]={6,5,8,4,2,1};

// for(int i=1;i<7;i++){
//     int j=i;
//     while(j>=1 && arr[j]<arr[j-1]){
//         int c=arr[j];
//         arr[j]=arr[j-1];
//         arr[j-1]=c;
//         j--;
//     }
// }
// for(int i=0;i<7;i++){
//     printf("%d ",arr[i]);
// }



// int m;
// scanf("%d",&m);
// int z=reverseTheNumber(m);
// printf("%d",z);

// int a=50,b=10,c=70;
// // int gcd;
// int ans=findGcd(a,b);
// ans=findGcd(ans,c);
// printf("%d",ans);


// char arr[]={"aa","ee","bb","cc","dd"};
// shortArray(arr,5);


// struct pokemon{
//     char name[50];
//     int rank;
//     int hp;
// }pichu,picachu,raichu;
// strcpy(picachu.name,"raja");
// pichu.hp=50;
// pichu.rank=50;




int a = 1;
int b = ++a;
int c = a++;
printf("%d %d %d", a, b, c);

int a=1;
printf("%d %d %d",a,++a,a++);
return 0;
}