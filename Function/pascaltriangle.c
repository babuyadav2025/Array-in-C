#include<stdio.h>
//pascal triangle by ncr function
// int factorial(int x){
//     int fact = 1;
//     for(int i=1; i<=x; i++){
//         fact=fact*i;
//     }
//     return fact;
// }
// int combination(int n, int r){
//     int icj = factorial(n)/(factorial(r)*factorial(n-r));
//     return icj;
// }
// int main(){
//     int n;
//     printf("Enter number n:");
//     scanf("%d",&n);
//     for(int i=0; i<=n; i++){
//         for(int k=0; k<=n-i-1; k++){
//             printf(" ");
//         }
//         for(int j=0; j<=i; j++){
//             int icj = combination(i,j);
//             printf("%d ",icj);
//         }
//         printf("\n");
//     }
//     return 0;
// }
// pascal triangle without using ncr function
int main(){
    int n;
    printf("Enetr number :");
    scanf("%d",&n);
    for(int i=0; i<=n; i++){
        int first = 1;
        for(int j=0; j<=i; j++){
            printf("%d ",first);
            first = first*(i-j)/(j+1);
        }
        printf("\n");
    }

    return 0;
}