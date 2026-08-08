#include<stdio.h>
int main()
{
    //  float i= 2*3/4+4/4+8-2+5/8;
    // printf("%f", i);
    // int a,b;
    // printf("Enter two number a and b");
    // scanf("%d%d", &a, &b);
    // printf("sum=%d, difference=%d, multiply=%d, divide=%d", a+b, a-b,a*b, a/b);
    //  float f,c;
    //  printf("Enter temperature in dgree celcius: ");
    //  scanf("%f",&c);
    //  f=(9*c)/5+32;
    //  printf("Value of temperature in fahrenheit=%f", f);
     int a, b, c;
     printf("Enter number a:");
     scanf("%d", &a);
     printf("Enter number b:");
     scanf("%d", &b);
     c=a;
     a=b;
     b=c;
     printf("Swapped value of a=%d and swapped value of b=%d", a, b);
    return 0;
}