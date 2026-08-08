#include<stdio.h>
int main(){
    // print star pyramid
    // int n;
    // printf("Enter number of line :");
    // scanf("%d",&n);
    // //int nst = 1;
    // //int nsp = 3;
    // for(int i=1; i<=n; i++){
    //     for(int k=1; k<=n-i; k++){
    //         printf(" ");
    //     }
    //     for(int j=1; j<=2*i-1; j++){
    //         printf("*");
    //     }
    //     printf("\n");
    // }
    // return 0;
    // print number pyramid
    // int n;
    // printf("Enter number of lines:");
    // scanf("%d",&n);
    // for(int i=1; i<=n; i++){
    //     for(int j=1; j<=n-i; j++){
    //         printf(" ");
    //     }
    //     for(int k=1; k<=2*i-1; k++){
    //         printf("%d", k);
    //     }
    //     printf("\n");
    // }
    // print number pyramid
    int n;
    printf("Enter a number lines:");
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i; j++){
            printf("  ");
        }
        for(int k=1; k<=2*i-1; k++){
            int a = k+64;
            char ch = (char)a;
            printf("%c ",ch);
        }
        printf("\n");
    }
    return 0;
}