#include<stdio.h>
int main()
{
    //to print gp 1 2 4 8 16 ....
    // int n;
    // printf("Enter anumber:");
    // scanf("%d", &n);
    // int a=1;
    // for (int i = 1; i <=n; i++)
    // {
        
    //     printf("%d ", a);
    //     a=a*2;
    // }
    // to print gp 3 12 48 ...
    // int n;
    // printf("Enter a number :");
    // scanf("%d", &n);
    // int a=3;
    // for (int i = 1; i <=n; i++)
    // {
    //     printf("%d ", a);
    //     a=a*4;
    // }
    //to print the ap 100 97 94 91 ...
    //  int n;
    //  printf("Enter a number:");
    //  scanf("%d", &n);
    // int a=100;
    // for (int i = 1; i<=n; i++)
    // {
    //     /* code */printf("%d ", a);
    //     a=a-3;
    // }
    //print 100 97 94 91 without using any mathmatics
    // int a=100;
    // for (int i = 1; a>0; i++)
    // {
    //     printf("%d ", a);
    //     a=a-3;
    // }
    //print GP 100 50 25 
    int n; 
    printf("Enter a number:");
    scanf("%d", &n);
    float a=100;
    for (int i = 1; i <=n; i++)
    {
        printf("%f ", a);
        a=a/2;
    }
    

    return 0;
}