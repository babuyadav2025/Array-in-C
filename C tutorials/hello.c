#include<stdio.h>
int main(){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    int arr[n];
    for(int i=1;i<=n;i++){
        arr[i]=i;
    }
    for(int j=1;j<=n;j++){
        printf("%d ",arr[j]);
    }
    return 0;

}