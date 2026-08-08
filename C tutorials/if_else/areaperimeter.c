#include<stdio.h>
int main(){
// int l, b;
//       printf("Enter length and width of a rectangle");
//       scanf("%d%d", &l, &b);
//       if (l*b>2*(l+b))
//       {
//         printf("Area of rectangle =%d",l*b);
//       }
//       else{
//         printf("Area of rectangle is not greater than its perimeter");
//       }
        int n;
        printf("Enter a number :");
        scanf("%d", &n);
        if (n%3==0 && n%5==0)
        {
            printf("Enter number is divisible by 3 and 5 ");
        }
        else{
            printf("Enter number is not divisible by 3 and 5 ");
        }
    return 0;
}