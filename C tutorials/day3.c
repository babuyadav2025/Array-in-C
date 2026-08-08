#include <stdio.h>
int main() 
{
  int a, b, c;
    printf("Enter number a:");    
    scanf("%d", &a);
    printf("Enter number b:");
    scanf("%d", &b);
    c=a%b;
    printf("Value of a modulo b is=%d", c);
      
    
    return 0;
}