#include<stdio.h>
int main(){//count number of digit in the given number
    // int n;
    // printf("Enter a number:");
    // scanf("%d", &n);
    // int count=0;
    // while (n!=0)
    // {
    //     n=n/10;
    //     count++;
    // }
    // printf("Number of digit in the number is %d", count);
    //print sum of  digit in the given number
    int n;
    printf("Enter a number:");
    scanf("%d", &n);
    int sum=0;
    int lt=0; // lt= last term
    while (n!=0)
    {
        lt=n%10;
        sum=sum +lt;
        n=n/10;
    }
    printf("Sum of the  digit in the given number= %d",sum);
    return 0;
}