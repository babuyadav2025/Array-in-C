#include<stdio.h>
int main(){
    int n;
    printf("Enter size of array:");
    scanf("%d",&n);
    int arr[n];
    int p=1;
    for(int i=0;i<=n-1;i++){
        scanf("%d",&arr[i]);
        p=p*arr[i];
    }
    printf("%d",p);
    return 0;
}