#include<stdio.h>
int main(){
    int n;
    printf("Enter number of n:");
    scanf("%d",&n);
    int arr[n][n];
    printf("Enter all the element of array:\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
         int temp=arr[i][j];
         arr[i][j]=arr[j][i];
         arr[j][i]=temp;
        }
    }
    printf("\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for(int i=0;i<n;i++){
        for(int j=n-1;j>=0;j--){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;

}