#include<stdio.h>
int main()
{
    // int P;// p stand for percentage
    // printf("Enter P:");
    // scanf("%d", &P);
    // if(P>=90){
    //     printf("A grade");
    // }
    // else if(P>=70){
    //     printf("B grade");
    // }
    // else if(P>=50){
    //     printf("C grade");
    // }
    // else{
    //     printf("D grade");
    // }
    int x1,y1, x2, y2, x3, y3;
    printf("Enter value of x1 :");
    scanf("%d", &x1);
    printf("Enter value of y1:");
    scanf("%d", &y1);
    printf("Enter value of x2 :");
    scanf("%d", &x2);
    printf("Enter valu of y2:");
    scanf("%d", &y2);
    printf("Enter value of x3:");
    scanf("%d", &x3);
    printf("Enter value of y3:");
    scanf("%d", &y3);
    int m1=((y2-y1)/(x2-x1));
    int m2=((y3-y2)/(x3-x2));

    if (m1==m2)
    {
        printf("Given three points are straight line");
    }
    else{
        printf("Given three points are not straight line");
    }
    
    return 0;
}