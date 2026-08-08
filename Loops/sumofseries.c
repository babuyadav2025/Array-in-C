#include<stdio.h>
int main(){
    // print sum of series 1-2+3-4+5....
//     int n;
//     printf("Enter a number :");
//     scanf("%d", &n);
//     int sum =0;
//    if (n%2==0)
//    {
//     sum=-n/2;
//    }
//    else{
//     sum=-n/2+n;
//    }

//     printf("The sum is %d",sum);
// print factorial of first n number
// int n;
// printf("Enter a number:");
// scanf("%d", &n);
// int r=1;
// for (int i = 1; i <=n; i++)
// {
//     r=r*i;
//     printf("Factorial of %d is %d\n",i,r);

// }
int n;
printf("Enter a number:");
scanf("%d",&n);
//int a=1, b=1;
//int sum=1;
int a=0,b=1;
int sum=0;
printf("The fibonacci series is:");

//printf("%d %d ", a,b);
for (int i = 1; i <=n; i++)
{
   if(i==1){
    printf("%d ",a);
    continue;
   } 
   if(i==2){
    printf("%d ",b);
    continue;
   }
    sum=a+b;
    a=b;
    b=sum;
    printf("%d ", sum);
    
}
    return 0;

}