#include<stdio.h>
int main(){
    //printf("Hello world");
    // print * plus
    // int n;
    // printf("Enter num of row:");
    // scanf("%d", &n);
    // for(int i=1; i<=n; i++){
    //     for(int j=1; j<=n; j++){
    //         int a = n/2 +1;
    //         if(i==a || j==a) printf("* ");
    //         else printf("  ");
    //     }
    //     printf("\n");
    //     }
    // print * cross
    int n;
    printf("Enter number of row:");
    scanf("%d", &n);
   
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            
            if(i==j || (i+j)==n+1) printf("* ");
            else printf("  ");
        }
        printf("\n");
    }
        return 0;
}