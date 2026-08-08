#include<stdio.h>
int main(){
    // print ulta number triangle
    // int n;
    // printf("Enter a number : ");
    // scanf("%d", &n);
    // for(int i=1; i<=n; i++){
    //     for(int j=1; j<=n+1-i; j++){
    //         printf("%d ",j);
    //     }
    //     printf("\n");
    // }
    // print odd number triangle
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    for(int i=0; i<=n; i++){
        int a=1;
        for( int j=1; j<=i; j++){
         printf("%d ",a);
         a=a+2;
        }
        printf("\n");
    }
    return 0;
    }