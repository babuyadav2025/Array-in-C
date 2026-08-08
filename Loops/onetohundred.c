#include<stdio.h>
int main()
{//to print odd number from 1 to 100
    // int i;
    // for ( i = 0; i <=100; i++)
    // {
    //    if(i%2!=0){
    //     printf("%d ", i);
    //    }
    // }
    // print table of any number
//    int n;
//         printf("Enter a number:");
//         scanf("%d", &n);
//         int i;
//         for ( i = n; i <=n*10; i=i+n)
//         {
//             printf("%d ", i);                                             
//         }
//     return 0;
// print AP 4 7 11
int n;
    printf("Enter a number:");
    scanf("%d", &n);
    int a=4;
    for (int  i = 1; i <= n; i++)
    {
        printf("%d ", a);
        a=a+3;
    }
    
    return 0;
    
}