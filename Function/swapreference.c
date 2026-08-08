#include<stdio.h>
void swap(int* x, int* y){
   int temp = *x; // temp = 2
    *x = *y; // *x=7-> a=7
    *y = temp; // *y=2 -> b=2
    return;

}
int main (){
    int a = 2; 
    int b = 7;
    swap(&a,&b);
    printf("The value of a is %d\n",a);
    printf("The value of b is %d",b);

    return 0;
}