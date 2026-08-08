#include<stdio.h>
int main()
{
    // print prime number
     int n;
     printf("Enter anumber :");
     scanf("%d", &n);
     int a=2;
     for (int i = 2; i <=n-1; i++)
     {
         if (n%i==0)
         {
             a=1;
            break;
        }
        
     }
     if(n==1) printf("1 is neither prime nor composite");
     else if(a==2) printf("The number is prime number");
     else printf("The number is composite ");
    // print all odd number from 1 to 100 using continue 
    //     for (int i = 1; i <=100; i++)
    //     {
    //         if (i%2==0)
    //         {
    //             continue;
    //         }
    //         printf("%d ", i);
            
    //     }
    //  return 0;
    // print even nuber from 1 to 100 using continue statement
    // for (int i = 1; i <=100; i++)
    // {
    //     if (i%2!=0)
    //     {
    //         continue;
    //     }
    //     printf("%d ", i);
        
    // }
    return 0;
}