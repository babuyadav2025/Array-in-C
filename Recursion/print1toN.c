#include<stdio.h>
// using extra parametre
// void increasing(int x, int n){
//     if(x>n) return;
//     printf("%d\n",x);
//     increasing(x+1, n);
//     return;
// }
// int main(){
//     int n;
//     printf("Enter a number:");
//     scanf("%d",&n);
//     increasing(1,n);
//     return 0;
// }
// without using any other parameter
void increasing(int n){
    if(n==0) return; // base case
    increasing(n-1); // call
    printf("%d\n",n); // code
    return;
}
int main(){
    int n; 
    printf("Enter a number:");
    scanf("%d",&n);
    increasing(n);
    return 0;
}
