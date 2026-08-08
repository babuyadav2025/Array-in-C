#include<stdio.h>
int main()
{
  float a;
  printf("Enter decimal number a=");
  scanf("%f", &a);
  int b;
  b=a;
  
  float c= a-b;
  printf("Fractional part of decimal number is =%f",c);

    return 0;
}