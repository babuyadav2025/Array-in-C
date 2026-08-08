#include<stdio.h>
int main()
//{
//    int a, b, c;
//    printf("Enter first numbe:");
//    scanf("%d", &a);
//    printf("Enter second number:");
//    scanf("%d", &b);
//    printf("Enter third number:");
//    scanf("%d",&c);
//    if (a>b && a>c)
//    {
//     printf("a is greater among three number a=%d", a);
//    }
//    if (b>a && b>c)
//    {
//     printf("b is greater among three number b=%d", b);
//    }
//    if (c>a && c>b)
//    {
//     printf("c is greater among three number c=%d", c);
//    }
//     return 0;
//}
  {
    int a, b, c;
    printf("Enter first side of triangle:");
    scanf("%d", &a);
    printf("Enter second side of trianle:");
    scanf("%d", &b);
    printf("Enter third side of triangle");
    scanf("%d", &c);
    if ((a+b)>c && (b+c)>a && (c+a)>b )
    {
        printf("Entered sides is %d %d %d triangle sides" ,a, b, c);
    }
    else
    {
        printf("Entered sides is not triangle side");
    }
    return 0;
  }