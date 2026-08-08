#include<stdio.h>
int main(){
     int n;
     printf("Enter a number:");
     scanf("%d", &n);
     int r=0;
     while (n!=0)
     {
         r=r*10;
         r=r+(n%10);
         n=n/10;
     }
     printf("Reverse of given nuber %d", r);
    // WAP to print sum of entered number and its reverse of number
    // int n;
    // printf("Enter a number:");
    // scanf("%d", &n);
    // int r=0, t;// t is original number
    // t=n;
    
    // while (n!=0)
    // {
        
    //     r=r*10;
    //     r=r+(n%10);
    //     n=n/10;
    // }

    // int sum= t+r;
    // printf("Sum of number%d and its reverse%d is=%d",t,r, sum);
    //To print sum of even odd number upto n
    // int n;
    // printf("Enter a number:");
    // scanf("%d", &n);
    // int sumo = 0;
    // int sume=0;
    // for (int i = 1; i <=n; i++)
    // {
    //    if (i%2!=0)
    //    {
    //      sumo=sumo+i;
    //      continue;
    //    }
    //    else if (i%2==0)
    //    {
    //     sume=sume+i;
    //     continue;
    //    }  
        
    // }
    // printf("The sum of odd number  is =%d\n", sumo);
    // printf("The sum of even number is=%d", sume);
    return 0;
}