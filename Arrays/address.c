#include<stdio.h>
int main(){
    // int arr[5]={1,1,2,2,3};

    //  printf("%p ",&arr[0]);
    //  printf("%p ",&arr[1]);
    //  printf("%p ",&arr[2]);
    //  printf("%p ",&arr[3]);
    //  printf("%p ",&arr[4]);
   int i,a=2,b=3;
   int arr[2+3];
   for(i=0;i<a+b;i++){
    scanf("%d",&arr[i]);
    printf("\n%d",arr[i]);
   }
    return 0;
}