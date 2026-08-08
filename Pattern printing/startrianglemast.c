#include<stdio.h>
int main(){
     int n;
     printf("Enter a number:");
     scanf("%d", &n);
     for(int i=1; i<=n; i++){
         for(int j=1; j<=n-i; j++){
             printf(" "); 
         }
         for(int k=1; k<=i; k++){
             printf("*");
         }
         printf("\n");
     }
     return 0;
    // int n;
    // printf("Enter a number:");
    // scanf("%d", &n);
    // for(int i=1; i<=n; i++){
    //     for(int j=1; j<=n-i; j++){
    //         printf(" ");
    //     }
    //     for(int k=1; k<=i; k++){
    //         int a = 64+k;
    //         char ch = (char)a;
    //         printf("%c",ch);
    //     }
    //     printf("\n");
    // }
    // return 0;
}