#include<stdio.h>
int main(){
    int a;
    printf("Enter a number:");
    scanf("%d", &a);
    if (a%3==0 || a%5==0)
    {
        printf("The number is divisible by 3 or 5");
    }
    else{
        printf("The number is not divisible by 3 or 5");
    }
    return 0;
}