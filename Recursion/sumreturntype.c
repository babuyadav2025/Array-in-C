#include<stdio.h>
int sum(int n){
    if(n==1 || n==0){ 
        return 1;
    }
    int Ans = n+sum(n-1);
    return Ans;
}
int main(){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
   int T = sum(n);
   printf("%d",T);
    return 0;
}