#include<stdio.h>
int main(){
    int year;
    printf("Enter year:");
    scanf("%d", &year);
    if (year%4==0)
    {
        printf("The given year %d is leap year",year);

    }
     else{
        printf("The given year %d is not leap year",year);
     }
     return 0;
}