#include<stdio.h>
int main(){
    int a= 5;
    int* x = &a;
   // VVIP-> *x = 7; //a is changed
   int** y = &x;
   int*** z = &y;
   printf("%d\n",a);
    printf("%d\n",*x);
    printf("%d\n",**y);
    printf("%d",***z);
  //  printf("%p\n",x);// %p se adderes print hota hai
    return 0;
}