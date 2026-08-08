#include<stdio.h>
void fibonacci(int n){
    int a=0, b=1;
    printf("Fibonacci series is : %d %d ", a,b);
    for(int i=1; i<=n-2; i++){
        int sum =a+b;
        a=b;
        b=sum;
        printf("%d ",sum);
    }
    return ;
}
int main(){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    fibonacci(n);
    return 0;
}