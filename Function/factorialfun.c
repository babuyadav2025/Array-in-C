#include<stdio.h>
int fact(int n){
     int first = 1;
     for(int i=1; i<=n; i++){
        first = first*i;
     }
     return first;
}
int main(){
     int n;
     printf("enter number n:");
     scanf("%d",&n);
     int factorial = fact(n);
     printf("Factorial of n: %d",factorial);
    return 0;
}